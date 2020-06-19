#ifndef DIEMDANH_H
#define DIEMDANH_H

#pragma once
#include<bits/stdc++.h>
#include"date.h"
#include "employee.h"
#include "person.h"
using namespace std;

class Diemdanh :public Date		// DIEMDANH // DELi CLASS
{
private:
    string Trangthai;
public:
    void diemdanh();
    string get_tt();
    int checl_tt(string tt);// Kiem tra trang thai di lam
    void set_tt(string trangthai);
};

#endif // DIEMDANH_H
