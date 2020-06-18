#include "menu.h"

void menu()
{
    system("cls");
    cout << "============================================== \n";
    cout << "= 1 - Nhap thong tin nhan vien               = \n";
    cout << "= 2 - Tim thong tin nhan vien                = \n";
    cout << "= 3 - Import danh sach nhan vien             = \n";
    cout << "============================================== \n";
}
void CASE1()
{
    cout << "Moi nhap thong tin nhan vien \n";
    Employee a;
    a.nhap();
}
void CASE2()
{
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


    system("pause");
}
