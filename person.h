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
    Person();
    void nhap();
    string getname();
    void setName(string name);
    void setbirth(string date);
    void setadr(string adress);
    ~Person();
};

#endif // PERSON_H
