#include<bits/stdc++.h>
using namespace std;

int total;

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
        //int cont=0;
        //while(tmp!=NULL) {
            //prev=tmp;
            //tmp=tmp->getnext();
            //cont++;
        //}
        if(tmp==NULL) {
           tmp=new SymbolInfo();
           tmp->setName(a);
           tmp->setType(b);
           head[hasval]=tmp;
           cout<<"Inserted in scopetable#"<<num<<" at position ( "<<hasval<<","<<0<<")"<<endl;
           return true;
        }
        else {
            SymbolInfo *an=new SymbolInfo();
            an->setName(a);
            an->setType(b);
            an->setnext(tmp);
            head[hasval]=an;
            cout<<"Inserted in scopetable#"<<num<<" at position ( "<<hasval<<","<<0<<")"<<endl;
            return true;
        }
        return false;
    }
    SymbolInfo* Lookup(string a) {
        int i,pos=0;
        int hasval=Hasfunction(a);
            SymbolInfo *tmp=head[hasval];
            SymbolInfo *prev=NULL;
            while(tmp!=NULL){
                if(tmp->getName().compare(a)==0){
                    cout<<"found in scopetable#"<<num<<" at position ("<<hasval<<","<<pos<<")"<<endl;
                    if(prev!=NULL) {
                        prev->setnext(tmp->getnext());
                        tmp->setnext(head[hasval]);
                        head[hasval]=tmp;
                        return tmp;
                    }
                }
                prev=tmp;
                tmp=tmp->getnext();
                pos++;
            }

            cout<<"Not found"<<endl;
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
                    cout<<"Deleted entry at position ("<<hasval<<","<<pos<<") from current ScopeTable"<<endl;
                    head[hasval]=tmp->getnext();
                    delete tmp;
                    return true;
                }
                cout<<"Deleted entry at position ("<<hasval<<","<<pos<<") from current ScopeTable"<<endl;
                prev->setnext(tmp->getnext());
                delete tmp;
                return true;
            }
            prev=tmp;
            tmp=tmp->getnext();
            pos++;
        }

        cout<<"Not found"<<endl;
        return false;
    }
    void Print() {
        cout<<"scopetable#"<<num<<endl;
        for (int i=0;i<total;i++) {
            SymbolInfo *tmp=head[i];
            cout<<i<<" -->";
            while(tmp!=NULL){
                cout<< "<"<<tmp->getName()<<" : "<<tmp->getType()<<" > ";
                tmp=tmp->getnext();
            }
            cout<<endl;
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
        cout<<"New ScopeTable with id "<<head->getnum()<<" created"<<endl;
    }
    void ExitScope() {
        ScopeTable *tmp=head;
        head=head->getparent();
        head->setnext(NULL);
        tmp->DeleteTable();
        cout<<"ScopeTable with id "<<tmp->getnum()<<" removed"<<endl;
        delete[] tmp;
    }
    bool Insert(string a,string b) {
        return head->Insert(a,b);
    }
    bool Remove(string a) {
        if(head->Lookup(a)!=NULL){
            return head->Delete(a);
        }
        cout<<a<<" Not found"<<endl;
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
    cin>>total;
    SymbolTable ob;
    char c,d;
    string x,y,z;

    while(1) {
        cin>>c;
        if(c=='I') {
            cin>>x>>y;
            ob.Insert(x,y);
        }
        else if(c=='L') {
            cin>>z;
            ob.Lookup(z);
        }
        else if(c=='D') {
            cin>>z;
            ob.Remove(z);
        }
        else if(c=='P') {
            cin>>d;
            if(d=='A') ob.printall();
            else ob.Printcurrent();
        }
        else if(c=='S') ob.EnterScope();
        else if(c=='E') ob.ExitScope();
        else exit(0);

    }

    return 0;
}
