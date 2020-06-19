#ifndef PERSON_H
#define PERSON_H

#pragma once
#include<bits/stdc++.h>
#include"date.h"
using namespace std;

class Person		// Base CLASS PERSON
{
private:
    string hovaten;
    Date birth;
    string adress;
public:
    void nhap();
    string getname();
    string getbirth();
    string getadress();
    void setName(string name);
    void setbirth(string date,int i);
    void setadr(string adress,int i);
};

#endif // PERSON_H
