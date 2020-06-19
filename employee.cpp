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
void Employee::setid(string id)
{
    this->id = id;
}
void Employee::setteam(string team,int i)
{
    //this->team = team;
    if (team == "" || team == " ")
    {
        this->team = "Khong co bo phan";
        cout << "Dong " << i << "Khong co bo phan " << endl;
    }// loi ko co bo phan
    else this->team = team;
}
void Employee::setcheck(int n)
{
    this->check = n;
}
void Employee::diemdanh(int i, string date, string TT)
{
    this->cr[i].setdate(date);
    this->cr[i].set_tt(TT);
}
string Employee::getid()
{
    return this->id;
}
int Employee::getcheck()
{
    return this->check;
}
void Employee::getdd(int i)
{
    //
    if (this->cr[i].get_tt() == "N")
        cout << this->cr[i].getDate() << ": X" << endl;
    else cout << this->cr[i].getDate() << ": " << this->cr[i].get_tt() << endl;
}
string Employee::getddall(int i)
{
    stringstream ss;
    ss << this->cr[i].getDate() << ":" << this->cr[i].get_tt() << endl;
    return ss.str();
}
string Employee::getteam()
{
    return this->team;
}

