
#ifndef compailer_H
#define compailer_H


#include <bits/stdc++.h>
using namespace std;



union value{
    int i;
    float f;
    int* i_Arr;
    float* f_Arr;
};

class SymbolInfo{

private:
    string name;
    string type;

public:
    value val;
    int siz;
    int data_type;
    int index;
    int myList[1000];
    int list_size;
    int ret_type;
    string code;

    SymbolInfo* next;
    SymbolInfo(string nam, string typ){
        name=nam;
        type=typ;
	code="";
        next=NULL;
        siz=0;
        data_type=-1;
        index=-1;
        list_size=-1;
        ret_type=-1;
    }
    SymbolInfo(){code="";}

	SymbolInfo(const SymbolInfo *sym){
         	name=sym->name;
         	type=sym->type;
         	code=sym->code;
		data_type=sym->data_type;
    }


    string get_name()
    {
        return name;
    }
    string get_type()
    {
        return type;
    }
    void set_name(string nam){
        this->name=nam;
    }
	void set_name(char* nam){
        this->name=string(nam);
    }
    void set_type(string typ){
        type=typ;
    }

};

class ScopeTable{
private:
    SymbolInfo** hash_table;
    int bucket_size;

public:
    ScopeTable *nxt;
    ScopeTable *parent;
    int id;
    ScopeTable(){
        bucket_size=6;
        hash_table= new SymbolInfo*[bucket_size];
        for(int i=0;i<bucket_size;i++){
            hash_table[i]=new SymbolInfo();
            hash_table[i]->next=NULL;
        }
    }

    int hash_function(string str){
       int l=str.size();
        int sum=0;
        for(int i=0;i<l;i++){
            sum=sum+str[i];
        }
        return sum%bucket_size;
    }
    void destructor(){
        for(int i=0;i<bucket_size;i++){
            SymbolInfo* head= hash_table[i];
            while(head!=NULL){
                SymbolInfo* prev=head;
                head=head->next;
                delete prev;
            }
        }
        delete[] hash_table;
    }
    bool Insert(string key, string type)
    {
        int a=hash_function(key);
        SymbolInfo* head=  hash_table[a];
        SymbolInfo* entry;
        entry=new SymbolInfo(key,type);

        int pos=0;
        while(head->next!=NULL){
            if(head->next->get_name().compare(key)==0){
                return false;
            }
            head=head->next;
            pos++;
        }
        head->next=entry;
        return true;

    }

    bool Insert(SymbolInfo* info)
    {
        int a=hash_function(info->get_name());
        SymbolInfo* head=  hash_table[a];
        int pos=0;
        while(head->next!=NULL){
            if(head->next->get_name().compare(info->get_name())==0){
                return false;
            }
            head=head->next;
            pos++;
        }

        head->next=info;
        return true;

    }

    SymbolInfo* Look_up(string key)
    {
        int a=hash_function(key);
        SymbolInfo* head=  hash_table[a];
        int pos=0;
        while(head->next!=NULL){
            if(key.compare(head->next->get_name())==0){
                return head->next;
            }
            head=head->next;
            pos++;
        }
        return NULL;
    }


    void print(FILE *out)
    {

        for(int i=0;i<bucket_size;i++){
           SymbolInfo* head=  hash_table[i];

           fprintf(out,"%d: -->",i);
           while(head->next !=NULL){
              if(head->next->siz==0){
                    if(head->next->data_type==0){
                        fprintf(out,"<%s ,%s, %d>",head->next->get_name().c_str(),head->next->get_type().c_str(),head->next->val.i);
                    }
                    else if(head->next->data_type==1){
                        fprintf(out,"<%s ,%s, %f>",head->next->get_name().c_str(),head->next->get_type().c_str(),head->next->val.f);
                    }
                    else{
                        fprintf(out,"<%s ,%s>",head->next->get_name().c_str(),head->next->get_type().c_str());
                    }
              }
              else{
                    if(head->next->data_type==0){

                        fprintf(out,"<%s ,%s, {",head->next->get_name().c_str(),head->next->get_type().c_str());
                        for(int x=0; x < head->next->siz; x++){
                            fprintf(out,"%d,",head->next->val.i_Arr[x]);
                        }
                        fprintf(out,"}");
                    }
                    else{
                        fprintf(out,"<%s ,%s, {",head->next->get_name().c_str(),head->next->get_type().c_str());
                        for(int x=0; x < head->next->siz; x++){
                            fprintf(out,"%f ,",head->next->val.f_Arr[x]);
                        }
                        fprintf(out,"}");
                    }

              }

              head=head->next;
           }

           fprintf(out,"\n");
        }

        fprintf(out,"\n");
    }

};

class SymbolTable{
public:
    ScopeTable* head_list;
    ScopeTable* current_list;

    SymbolTable()
    {
        head_list= new ScopeTable();
        current_list=new ScopeTable();
        head_list->nxt=current_list;
        head_list->parent=NULL;
        current_list->parent=head_list;
        current_list->nxt=NULL;
        current_list->id=1;
    }
    void Enter_Scope(){
        ScopeTable* entry= new ScopeTable();
        current_list->nxt=entry;
        entry->parent=current_list;
        entry->nxt=NULL;
        entry->id=current_list->id + 1;
        current_list=entry;
    }

    void Exit_Scope(){
        ScopeTable* prev=current_list;
        current_list=current_list->parent;
        current_list->nxt=NULL;
        prev->destructor();
        delete[] prev;

    }

    bool Insert(string key,string type){
        current_list->Insert(key,type);
        return true;
    }

    bool Insert(SymbolInfo *key){
        current_list->Insert(key);
        return true;
    }


    SymbolInfo* Look_Up(string key){
        ScopeTable* cur=current_list;
        while (cur->parent!=NULL){
            if(cur->Look_up(key)!=NULL){
                return cur->Look_up(key);
            }
            cur=cur->parent;
        }
        return NULL;
    }

    SymbolInfo* Lk_Up(string key){
        ScopeTable* cur=current_list;
        if(cur->Look_up(key)!=NULL){
            return cur->Look_up(key);
        }
        return NULL;
    }

    void Print_Current_ScopeTable(FILE* out)
    {
        current_list->print(out);
    }

    void Print_All_ScopeTable(FILE* out){
        ScopeTable* cur=current_list;
        while (cur->parent!=NULL){
            cur->print(out);
            fprintf(out,"\n\n");
            cur=cur->parent;
        }
    }

};


#endif
