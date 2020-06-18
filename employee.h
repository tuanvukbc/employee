#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#pragma once
#include<bits/stdc++.h>
#include"person.h"
#include"diemdanh.h"
#include"check.h"
using namespace std;

class Employee :public Person // Deli CLASS
{
private:
    string id;
    string team;
    int check; // so ngay diem danh duoc luu vao ;
    Diemdanh* cr = new Diemdanh[31];
public:
    Employee();
    void setcheck(int n);
    void nhap();
    void setid(string id);
    void setteam(string team);
    void diemdanh(int i,string date,string TT);
};

#endif // EMPLOYEE_H
