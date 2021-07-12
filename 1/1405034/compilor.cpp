#include <bits/stdc++.h>
using namespace std;
int bucket_size;
fstream infile;
fstream outfile;
class SymbolInfo{

private:
    string name;
    string type;

public:
    SymbolInfo* next;
    SymbolInfo(string nam, string typ){
        name=nam;
        type=typ;
        next=NULL;

    }
    SymbolInfo(){}

    string get_name()
    {
        return name;
    }
    string get_type()
    {
        return type;
    }

};

class ScopeTable{
private:
    SymbolInfo** hash_table;

public:
    ScopeTable *nxt;
    ScopeTable *parent;
    int id;
    ScopeTable(){
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
                delete head;
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
                outfile<<"<"<<key<<":"<<type<<"> already exists in current ScopeTable"<<endl;
                return false;
            }
            head=head->next;
            pos++;
        }
        head->next=entry;
        outfile<<"Inserted in scopetable# "<<id<<" at position "<<a<<","<<pos<<endl;
        return true;

    }

    SymbolInfo* Look_up(string key)
    {
        int a=hash_function(key);
        SymbolInfo* head=  hash_table[a];
        int pos=0;
        while(head->next!=NULL){
            if(key.compare(head->next->get_name())==0){
                outfile<<"Inserted in scopetable# "<<id<<" at position "<<a<<","<<pos<<endl;
                return head->next;
            }
            head=head->next;
            pos++;
        }
        outfile<<"Not found"<<endl;
        outfile<<endl;
        return NULL;
    }

    bool Delete(string key)
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

    void print()
    {
        outfile<<"scope table# "<<id<<endl;
        for(int i=0;i<bucket_size;i++){
           SymbolInfo* head=  hash_table[i];
           outfile<<i<<"-->";
           while(head->next !=NULL){
                outfile<<"<"<<head->next->get_name()<<":"<<head->next->get_type()<<"> ";
                head=head->next;
           }
           outfile<<endl;
        }
        outfile<<endl;
    }

};

class SymbolTable{
private:
    ScopeTable* head_list;
    ScopeTable* current_list;
public:
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
        outfile<<"New ScopeTable with id "<<entry->id<<" created"<<endl;
    }

    void Exit_Scope(){
        ScopeTable* prev=current_list;
        current_list=current_list->parent;
        current_list->nxt=NULL;
        outfile<<"ScopeTable with id "<<prev->id<<" removed"<<endl;
        prev->destructor();
        delete[] prev;

    }

    bool Insert(string key,string type){
        current_list->Insert(key,type);
        return true;
    }

    bool Remove(string key){
        if(current_list->Look_up(key)!=NULL){
            current_list->Delete(key);
            return true;
        }
        outfile<<key<<" not found"<<endl;
        return false;

    }

    bool Look_Up(string key){
        ScopeTable* cur=current_list;
        while (cur->parent!=NULL){
            if(cur->Look_up(key)!=NULL){
                return true;
            }
            cur=cur->parent;
        }
        return false;
    }

    void Print_Current_ScopeTable()
    {
        current_list->print();
    }

    void Print_All_ScopeTable(){
        ScopeTable* cur=current_list;
        while (cur->parent!=NULL){
            cur->print();
            cur=cur->parent;
        }
    }

};

int main()
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



}
