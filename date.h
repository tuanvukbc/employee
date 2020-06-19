#ifndef DATE_H
#define DATE_H

#pragma once
#include<bits/stdc++.h>
using namespace std;

class Date	// BASE CLASS DATE
{
private:
    string date;
public:
    int validate(string& datt);
    void nhap();
    string getDate();
    void setdate(string date);
};

#endif // DATE_H
