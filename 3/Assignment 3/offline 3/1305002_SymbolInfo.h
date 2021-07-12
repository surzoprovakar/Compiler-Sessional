#ifndef INFO_H
#define INFO_H

#include <bits/stdc++.h>

using namespace std;

union value
{
    int i;
    float f;
    char c;
    int* i_Arr;
    float* f_Arr;
    char* c_Arr;
};

class symbolInfo
{
public:
    string name;
    string type;
    int dataType=-1;
    int index = -1;
    value v;
    int sz = 0;
    symbolInfo *prev;
    symbolInfo *next;

    symbolInfo()
    {
        this->next = 0;
        this->prev = 0;
    }
    symbolInfo(string name, string type)
    {
        this->name = name;
        this->type = type;
        this->next = 0;
        this->next = 0;
    }
};
#endif
