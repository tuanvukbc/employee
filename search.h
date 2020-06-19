#ifndef SEARCH_H
#define SEARCH_H

#pragma once
#include<bits/stdc++.h>
#include"employee.h"
using namespace std;

class search
{
private:
    string file;	//Da co file san text.txt
public:
    search();
    void setFile(string name);
    Employee Searchid(string id); // search theo id
    Employee Searchnv(string name);// search theo ten nhan vien
    Employee Searchall(); //all
    Employee Searchteam(string team); // search theo team
};
#endif // SEARCH_H
