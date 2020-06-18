#include "employee.h"

void Employee::nhap()
{
    Check* p = new Check;
    cout << "Nhap ma nhan vien: ";
    getline(cin, this->id);
    while (p->checkid(this->id) == 0)									//KIEM TRA co trung ma nhan vien khong
    {
        cout << "Ma nhan vien bi trung, moi ban nhap lai:  \n";
        cout << "Nhap ma nhan vien(VD: 01): ";
        getline(cin, this->id);
    }
    Person::nhap();
    cout << "Nhap bo phan cong tac: ";
    getline(cin, this->team);
    while (this->team.empty())
    {
        cout << "Bo phan cong tac khong duoc bo trong \n";
        cout << "Moi ban nhap lai bo phan cong tac \n";
        getline(cin, this->team);

    }
}
