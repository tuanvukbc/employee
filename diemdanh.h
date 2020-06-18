#ifndef DIEMDANH_H
#define DIEMDANH_H

#pragma once
#include<bits/stdc++.h>
#include"date.h"
#include"employee.h"
using namespace std;

class Diemdanh :public Date		// DIEMDANH // DELi CLASS
{
private:
    string file ;
    string Trangthai;
public:
    Diemdanh();
    int checl_tt(string tt);// Kiem tra trang thai di lam
    void history(Employee a); // Luu qua trinh diem danh ra mot file rieng roi cho xuat ra man hinh
    ~Diemdanh();
};

#endif // DIEMDANH_H
