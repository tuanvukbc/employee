#include "person.h"

void Person::nhap()
{
    cout << "Nhap Ho va Ten: ";
    getline(cin, this->hovaten);
    cout << "Nhap Ngay thang nam sinh ";
    this->birth.nhap();
    cout << "Nhap dia chi noi o : ";
    getline(cin, this->adress);
    while (this->adress.empty())
    {
        cout << "Dia chi khong duoc bo trong \n";
        cout << "Moi ban nhap lai dia chi \n";
        getline(cin, this->adress);
    }
}
string Person::getname()
{
    return this->hovaten;
}
