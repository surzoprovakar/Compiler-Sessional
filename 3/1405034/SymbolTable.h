#include <bits/stdc++.h>
#include "SymbolInfo.h"

#define NULL_VALUE -99999

using namespace std;


class SymbolTable{
	public:
	SymbolInfo **head;
    	SymbolTable *next;
	SymbolTable() {
		head=new SymbolInfo*[8];
		for(int i=0;i<8;i++) {
		    head[i]=NULL;
		}
    	}
	int Hasfunction(string a) {return a.size()%8;}

	void insert(SymbolInfo *sym){
		int hasval=Hasfunction(sym->name);
		SymbolInfo *prev=NULL;
		SymbolInfo *tmp=head[hasval];
		while(tmp!=NULL) {
		    prev=tmp;
		    tmp=tmp->next;
		}
		if(tmp==NULL) {
		   tmp=new SymbolInfo();
		   tmp=sym;
		   if (prev==NULL) {
		        head[hasval]=tmp;
		        return;
		   }
		   else {
		        prev->next=tmp;
		        return;
		   }

		}
		return;
    	}
	
	SymbolInfo* Lookup(string a) {
		int pos=0;
		int hasval=Hasfunction(a);
		    SymbolInfo *tmp=head[hasval];
		    while(tmp!=NULL){
		        if(tmp->name.compare(a)==0){
		            
		            return tmp;
		        }
		        tmp=tmp->next;
		        pos++;
		    }

		    return NULL;
    	}
	void print(FILE *out){
		fprintf(out,"SymbolTable \n");
		SymbolInfo *temp=new SymbolInfo();
		for(int i = 0; i<8; i++) {
			fprintf(out,"%d --> ",i);
            		temp = head[i];
            		if(temp!=0) {
                		while(temp != 0) {
                    			fprintf(out,"<%s,%s,",temp->name.c_str(),temp->type.c_str());
                    			if(temp->sz == 0) {
                        			if(temp->dataType == 0) fprintf(out,"%d>",temp->v.i);
                        			else if(temp->dataType == 1) fprintf(out,"%f>",temp->v.f);
                    			}
                    			else {
                        			int n = temp->sz;
                        			fprintf(out,"{ ");
                        			if(temp->dataType == 0) {
                            				for(int i = 0; i<n; i++) {
                                				if(i==n-1) fprintf(out,"%d ",temp->v.i_Arr[i]);
                                				else fprintf(out,"%d, ",temp->v.i_Arr[i]);
                            				}
                        			}
                        			else if(temp->dataType == 1) {
                            				for(int i = 0; i<n; i++) {
                                				if(i==n-1) fprintf(out,"%f ",temp->v.f_Arr[i]);
                                				else fprintf(out,"%f, ",temp->v.f_Arr[i]);
                            				}
                        			}
                        
                        			fprintf(out,"} >");
                    			}
                    			temp = temp->next;
                		}
           		 }
		 fprintf(out,"\n");
        	}
    	}
};
