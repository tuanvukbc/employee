#ifndef CHECK_H
#define CHECK_H

#pragma once
#include<bits/stdc++.h>
using namespace std;

class Check
{
private:
    string file;
public:
     void setFILE(string name);
     int checkid(string id);  // Kiem tra xem co trung ma Nhan Vien khong
     int checkdd(string dd);
};
#endif // CHECK_H
