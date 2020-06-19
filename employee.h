#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#pragma once
#include<bits/stdc++.h>
#include"diemdanh.h"
#include"check.h"
#include"search.h"
using namespace std;

class Employee :public Person // Deli CLASS
{
private:
    string id;
    string team;
    string file;        //Da co file san text.txt
    int check = 0; // so ngay diem danh duoc luu vao ;
    Diemdanh* cr = new Diemdanh[31];
public:

    void setcheck(int n);
    void nhap();
    string getid();
    int getcheck();
    void getdd(int i);				// Trang thai diem danh, neu Nghi se danh dau X
    string getddall(int i);		//Lay THong tin trang thai diem danh
    string getteam();
    void setid(string id);
    void setteam(string team,int i);
    void diemdanh(int i,string date,string TT);

};

#endif // EMPLOYEE_H
