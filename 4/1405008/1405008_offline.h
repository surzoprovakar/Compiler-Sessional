
#ifndef compailer_H
#define compailer_H


#include <bits/stdc++.h>
using namespace std;


//fstream infile;
//fstream outfile;

typedef struct _value{
    int i;
    float f;
   // char c;
    int* i_Arr;
    float* f_Arr;
   // char* c_Arr;
}value;

class SymbolInfo{

private:
    string name;
    string type;

public:
    value val;
    int siz;
    int data_type;
    int index;
   // string str*;
   // int string_size;
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
        bucket_size=7;
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
                //outfile<<"<"<<key<<":"<<type<<"> already exists in current ScopeTable"<<endl;

                return false;
            }
            head=head->next;
            pos++;
        }
        head->next=entry;
        //outfile<<"Inserted in scopetable# "<<id<<" at position "<<a<<","<<pos<<endl;
        return true;

    }

    bool Insert(SymbolInfo* info)
    {
        int a=hash_function(info->get_name());
        SymbolInfo* head=  hash_table[a];
        //printf("%d\n",info->siz);
        int pos=0;
        while(head->next!=NULL){
            if(head->next->get_name().compare(info->get_name())==0){
                //outfile<<"<"<<key<<":"<<type<<"> already exists in current ScopeTable"<<endl;
                return false;
            }
            head=head->next;
            pos++;
        }

        head->next=info;
        //outfile<<"Inserted in scopetable# "<<id<<" at position "<<a<<","<<pos<<endl;
        return true;

    }

    SymbolInfo* Look_up(string key)
    {
        int a=hash_function(key);
        SymbolInfo* head=  hash_table[a];
        int pos=0;
        while(head->next!=NULL){
            if(key.compare(head->next->get_name())==0){
                //outfile<<"Inserted in scopetable# "<<id<<" at position "<<a<<","<<pos<<endl;
                return head->next;
            }
            head=head->next;
            pos++;
        }
        //outfile<<"Not found"<<endl;
        //outfile<<endl;
        return NULL;
    }

    /*bool Delete(string key)
    {
        int a=hash_function(key);
        SymbolInfo* head=  hash_table[a];
        int pos=0;
        while(head->next!=NULL){
            if(key.compare(head->next->get_name())==0){
                SymbolInfo* prev=head->next;
                head->next=head->next->next;
                outfile<<"Deleted entry at "<<a<<","<<pos<<" from current scope table"<<endl;
                return true;
            }
            head=head->next;
            int pos=0;
        }
        outfile<<"Not found"<<endl;
        outfile<<endl;
        return false;

    }
    */

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
        //outfile<<"New ScopeTable with id "<<entry->id<<" created"<<endl;
    }

    void Exit_Scope(){
        ScopeTable* prev=current_list;
        current_list=current_list->parent;
        current_list->nxt=NULL;
        //outfile<<"ScopeTable with id "<<prev->id<<" removed"<<endl;
        prev->destructor();
        delete[] prev;

    }

    bool Insert(string key,string type){
        current_list->Insert(key,type);
        return true;
    }

    bool Insert(SymbolInfo *key){
        //printf("%d %s %s \n",key->siz,key->get_name().c_str(),key->get_type().c_str());
        //SymbolInfo *temp=new SymbolInfo(key->get_name(),key->get_type());
        //temp->siz=key->siz;
        current_list->Insert(key);
        return true;
    }

  /*  bool Remove(string key){
        if(current_list->Look_up(key)!=NULL){
            current_list->Delete(key);
            return true;
        }
        outfile<<key<<" not found"<<endl;
        return false;

    }*/

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

/*int main()
{
    infile.open("input.txt");
    outfile.open("output1.txt");
    infile >> bucket_size;
    SymbolTable table;
    string str,key,type;

    while(!infile.eof()){
        infile>> str;
        if(str.compare("I")==0){
            infile>>key;
            infile>>type;
            table.Insert(key,type);
        }
        else if(str.compare("L")==0){
            infile>>key;
            table.Look_Up(key);
        }
        else if(str.compare("P")==0){
            infile>>key;
            if(key.compare("C")==0){
                table.Print_Current_ScopeTable();
            }
            else{
                table.Print_All_ScopeTable();
            }
        }
        else if(str.compare("D")==0){
            infile>>key;
            table.Remove(key);
        }
        else if(str.compare("S")==0){
            table.Enter_Scope();
        }
        else if(str.compare("E")==0){
            table.Exit_Scope();
        }
    }
    infile.close();



}*/
#endif
