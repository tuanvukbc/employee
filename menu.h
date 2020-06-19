#ifndef MENU_H
#define MENU_H

#pragma once
#include<bits/stdc++.h>
#include"check.h"
#include"employee.h"
#include"other.h"
#include"search.h"

using namespace std;

class Menu
{
private:
    bool button;
public:
    void menu();
    void CASE1(){
        string id;
        cout << "Moi nhap ma nhan vien can tim kiem: ";
        getline(cin, id);
        Check* p = new Check;
        p->setFILE("text.txt");
        while (p->checkid(id) != 0) {
            cout << "Ma nhan vien khong ton tai \n";
            cout << "Moi ban nhap lai ma nhan vien can tim kiem: ";
            getline(cin, id);
        }
        cout << "Thong tin cua nhan vien co ma nhan vien: " << id << endl;
        Other a;
        search b;
        a.Print(b.Searcheid(id));
        system("pasue");
    }
    void CASE2();
};

#endif // MENU_H
