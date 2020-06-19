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
void Person::setName(string name)
{
    this->hovaten = name;
}
void  Person::setbirth(string date,int i)
{

    if (this->birth.validate(date) == 0)
    {
        this->birth.setdate("Loi Dinh Dang dd/mm/yy");
        cout << "Dong " << i << "Loi dinh dang dd/mm/yy" << endl;
    }		//Loi dinh dang neu validate == 0
    else this->birth.setdate(date);
}
void  Person::setadr(string adress,int i)
{
    if (adress == "" || adress == " ")
    {
        this->adress = "Khong co dia chi nha";
        cout << "Dong " << i << "Khong co dia chi nha " << endl;
    }// Loi ko co dia chi
    else this->adress = adress;
}
string Person::getbirth()
{
    return this->birth.getDate();
}
string Person::getadress()
{
    return this->adress;
}
string Person::getname()
{
    return this->hovaten;
}
