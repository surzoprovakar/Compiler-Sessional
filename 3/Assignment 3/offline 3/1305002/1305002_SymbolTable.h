#ifndef TABLE_H
#define TABLE_H

#include <bits/stdc++.h>
#include "1305002_SymbolInfo.h"

#define NULL_VALUE -99999

using namespace std;

class symbolTable
{
public:
    int n;
    symbolInfo **head;
    symbolInfo **tail;

    symbolTable(int n)
    {
        this->n = n;
        this->head = new symbolInfo*[n];
        this->tail = new symbolInfo*[n];
        for(int i = 0; i<n; i++)
        {
            head[i] = 0;
            tail[i] = 0;
        }
    }

    int hashFunction(string name)
    {
        int sum = 0;

        for(int i = 0; i<name.length(); i++)
        {
            sum+=name[i];
        }

        return sum%this->n;
    }

    void insertSymbol(symbolInfo *newSymbol)
    {
        symbolInfo* pre = lookSymbol(newSymbol->name);
        if (pre == NULL)
        {
            int row = hashFunction(newSymbol->name);
            if(head[row] == 0)
            {
                head[row] = newSymbol;
                tail[row] = newSymbol;
            }
            else
            {
                newSymbol->next = 0;
                newSymbol->prev = tail[row];
                tail[row]->next = newSymbol;
                tail[row] = newSymbol;
            }
            return;
        }
    }
    symbolInfo* lookSymbol(string name)
    {
        int row = hashFunction(name);
        symbolInfo *temp = new symbolInfo();
        temp = head[row];
        int col = 0;
        while(temp!=0)
        {
            if(temp->name == name)
            {
                return temp;
            }
            else
            {
                temp = temp->next;
                col++;
            }
        }
        return NULL;
    }
    //void deleteSymbol(string name);
    void printTable(FILE *out)
    {
        int row = this->n;
        symbolInfo *temp = new symbolInfo();
        for(int i = 0; i<row; i++)
        {
            temp = head[i];
            if(temp!=0)
            {
                fprintf(out,"%d --> ",i);
                while(temp != 0)
                {
                    fprintf(out,"<%s,%s,",temp->name.c_str(),temp->type.c_str());
                    if(temp->sz == 0)
                    {
                        if(temp->dataType == 0) fprintf(out,"%d>",temp->v.i);
                        else if(temp->dataType == 1) fprintf(out,"%f>",temp->v.f);
                        else if(temp->dataType == 2) fprintf(out,"%c>",temp->v.c);
                    }
                    else
                    {
                        int n = temp->sz;
                        fprintf(out,"{ ");
                        if(temp->dataType == 0)
                        {
                            for(int i = 0; i<n; i++)
                            {
                                if(i==n-1) fprintf(out,"%d ",temp->v.i_Arr[i]);
                                else fprintf(out,"%d, ",temp->v.i_Arr[i]);
                            }
                        }
                        else if(temp->dataType == 1)
                        {
                            for(int i = 0; i<n; i++)
                            {
                                if(i==n-1) fprintf(out,"%f ",temp->v.f_Arr[i]);
                                else fprintf(out,"%f, ",temp->v.f_Arr[i]);
                            }
                        }
                        else if(temp->dataType == 2)
                        {
                            for(int i = 0; i<n; i++)
                            {
                                if(i==n-1) fprintf(out,"%c ",temp->v.c_Arr[i]);
                                else fprintf(out,"%c, ",temp->v.c_Arr[i]);
                            }
                        }
                        fprintf(out,"} >");
                    }
                    temp = temp->next;
                }
                fprintf(out,"\n");

            }
        }
    }
};

#endif
