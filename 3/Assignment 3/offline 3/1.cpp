#include <bits/stdc++.h>

using namespace std;

union value
{
    int i;
    float f;
    char c;
    int* i_Arr;
};


int main()
{
    string s = "ab";
    int a = strcmp(s.c_str(),"ab");
    cout<<a<<endl;

    int* i = (int*)malloc(sizeof(int));
    //int * j = new int*;
    i[0] = 1;
    cout<<i[0]<<endl;

    float f = 5.5;
    f++;
    cout<<f<<endl;

    value v;
    v.i_Arr = (int*)malloc(5*sizeof(int));
    for(int i = 0; i<5; i++) v.i_Arr[i] = -1;
    for(int i = 0; i<5; i++) cout<<v.i_Arr[i]<<endl;
    int y[5]; float z=2.0;
    //y[z] = 0;
    int j= 2*3+(5%3 < 4 && 8) || 2 ;
    cout<<j<<endl;
}
