#ifndef OTHER_H
#define OTHER_H
#pragma once
#include<bits/stdc++.h>
#include"employee.h"

class Other
{
private:
    string file;	//Da co file san List.txt
public:
    void setFile(string file);	// thay doi File
    void History(Employee a,int i);						// Lich su diem danh
    void Print(Employee p);		// Xuat ra man hinh
    void Printfcvs(Employee p,int n); // Xuat ket qua ra file csv	n la so ngay da duoc diem danh
};

#endif // OTHER_H
