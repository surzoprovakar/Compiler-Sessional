#include <bits/stdc++.h>

using namespace std;

union value
{
    int i;
    float f;
    int* i_Arr;
    float* f_Arr;
};

class SymbolInfo{
public:
	string name;
	string type;
	value v;
	int dataType;
	int index;
	int sz;
	SymbolInfo *next;
	SymbolInfo(){
		name="";type="";dataType=-1;index=-1;sz=0;
	}
	SymbolInfo(string name,string type){
		this->name=name;this->type=type;this->next=NULL;
	}
};

