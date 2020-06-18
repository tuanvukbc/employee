#ifndef DATE_ATTENDANCE_H
#define DATE_ATTENDANCE_H


#pragma once
#include<bits/stdc++.h>
using namespace std;
class Date	// BASE CLASS DATE
{
private:
    string date;
public:
    Date();
    int validate(string& datt);
    void nhap();
    string getDate();
    ~Date();
};

#endif // DATE_ATTENDANCE_H
