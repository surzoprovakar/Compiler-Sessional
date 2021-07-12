#include<bits/stdc++.h>
using namespace std;

int total;
fstream infile;
fstream outfile;

class SymbolInfo{
private:
    string Name;
    string Type;
    SymbolInfo *next;
public:
    SymbolInfo() {
        this->next=NULL;
    }
    void setName(string s) {
        Name=s;
    }
    void setType(string t) {
        Type=t;
    }
    void setnext(SymbolInfo *anext) {
        next=anext;
    }

    string getName() {return Name;}
    string getType() {return Type;}
    SymbolInfo *getnext() {return next;}
};

class ScopeTable{
private:
    int num;
    SymbolInfo **head;
    ScopeTable *next;
    ScopeTable *parentScope;
public:
    ScopeTable() {
        head=new SymbolInfo*[total];
        for(int i=0;i<total;i++) {
            head[i]=NULL;
        }
    }
    void DeleteTable(){
        for(int i=0;i<total;i++) {
            SymbolInfo *del=head[i];
            while(del!=NULL) {
                SymbolInfo *tmp=del;
                del=del->getnext();
                delete tmp;
            }
        }
       delete [] head;
    };
    void setnum(int i){
        num=i;
    }
    int getnum(){
        return num;
    }
    int Hasfunction(string a) {return a.size()%total;}
    void setnext(ScopeTable *anext) {
        next=anext;
    }
    void setparent(ScopeTable *aparent) {
        parentScope=aparent;
    }
    ScopeTable *getnext() {return next;}
    ScopeTable *getparent() {return parentScope;}

    bool Insert(string a,string b){
        int hasval=Hasfunction(a);
        SymbolInfo *prev=NULL;
        SymbolInfo *tmp=head[hasval];
        int cont=0;
        while(tmp!=NULL) {
            prev=tmp;
            tmp=tmp->getnext();
            cont++;
        }
        if(tmp==NULL) {
           tmp=new SymbolInfo();
           tmp->setName(a);
           tmp->setType(b);
           if (prev==NULL) {
                head[hasval]=tmp;
                outfile<<"Inserted in scopetable#"<<num<<" at position ( "<<hasval<<","<<cont<<")"<<endl;
                return true;
           }
           else {
                prev->setnext(tmp);
                outfile<<"Inserted in scopetable#"<<num<<" at position ( "<<hasval<<","<<cont<<")"<<endl;
                return true;
           }

        }
        return false;
    }
    SymbolInfo* Lookup(string a) {
        int i,pos=0;
        int hasval=Hasfunction(a);
            SymbolInfo *tmp=head[hasval];
            while(tmp!=NULL){
                if(tmp->getName().compare(a)==0){
                    outfile<<"found in scopetable#"<<num<<" at position ("<<hasval<<","<<pos<<")"<<endl;
                    return tmp;
                }
                tmp=tmp->getnext();
                pos++;
            }

            outfile<<"Not found"<<endl;
            return NULL;
    }
    bool Delete(string a) {
        int i,pos=0;
        int hasval=Hasfunction(a);
        SymbolInfo *tmp=head[hasval];
        SymbolInfo *prev=NULL;
        while(tmp!=NULL){
            if(tmp->getName().compare(a)==0){
                if(prev==NULL){
                    outfile<<"Deleted entry at position ("<<hasval<<","<<pos<<") from current ScopeTable"<<endl;
                    head[hasval]=tmp->getnext();
                    delete tmp;
                    return true;
                }
                outfile<<"Deleted entry at position ("<<hasval<<","<<pos<<") from current ScopeTable"<<endl;
                prev->setnext(tmp->getnext());
                delete tmp;
                return true;
            }
            prev=tmp;
            tmp=tmp->getnext();
            pos++;
        }

        outfile<<"Not found"<<endl;
        return false;
    }
    void Print() {
        outfile<<"scopetable#"<<num<<endl;
        for (int i=0;i<total;i++) {
            SymbolInfo *tmp=head[i];
            outfile<<i<<" -->";
            while(tmp!=NULL){
                outfile<< "<"<<tmp->getName()<<" : "<<tmp->getType()<<" > ";
                tmp=tmp->getnext();
            }
            outfile<<endl;
        }
    }
};

class SymbolTable{
private:
    ScopeTable *head;
public:
    ScopeTable *gethead()
    {
        return head;
    }
    SymbolTable() {
        head=new ScopeTable();
        head->setnext(NULL);
        head->setparent(NULL);
        head->setnum(1);
    }
    void EnterScope() {
        ScopeTable *tmp=new ScopeTable();
        head->setnext(tmp);
        tmp->setnext(NULL);
        tmp->setnum(head->getnum()+1);
        tmp->setparent(head);
        head=tmp;
        outfile<<"New ScopeTable with id "<<head->getnum()<<" created"<<endl;
    }
    void ExitScope() {
        ScopeTable *tmp=head;
        head=head->getparent();
        head->setnext(NULL);
        tmp->DeleteTable();
        outfile<<"ScopeTable with id "<<tmp->getnum()<<" removed"<<endl;
        delete[] tmp;
    }
    bool Insert(string a,string b) {
        return head->Insert(a,b);
    }
    bool Remove(string a) {
        if(head->Lookup(a)!=NULL){
            return head->Delete(a);
        }
        outfile<<a<<" Not found"<<endl;
        return false;
    }
    bool Lookup(string a) {
        ScopeTable* tmp=head;
        while(tmp!=NULL){
            if(tmp->Lookup(a)!=NULL){
                return true;
            }
            tmp=tmp->getparent();
        }
        return false;

    }
    void Printcurrent() {
        head->Print();
    }
    void printall() {
        ScopeTable* tmp=head;
        while(tmp!=NULL){
            tmp->Print();
            tmp=tmp->getparent();
        }
    }

};



int main() {
    infile.open("input.txt");
    outfile.open("output.txt");
    infile>>total;
    SymbolTable ob;
    string x,y,z;

    while(!infile.eof()) {
        infile>>x;
        if(x.compare("I")==0) {
            infile>>y>>z;
            ob.Insert(y,z);
        }
        else if(x.compare("L")==0) {
            infile>>z;
            ob.Lookup(z);
        }
        else if(x.compare("D")==0) {
            infile>>z;
            ob.Remove(z);
        }
        else if(x.compare("P")==0) {
            infile>>y;
            if(y.compare("A")==0) ob.printall();
            else ob.Printcurrent();
        }
        else if(x.compare("S")==0) ob.EnterScope();
        else if(x.compare("E")==0) ob.ExitScope();
        else exit(0);

    }

    return 0;
}
