#include "diemdanh.h"

void Diemdanh::diemdanh()
{
    cout << "Nhap ngay thang ";
    Date::nhap();
    cout << "1.DL: Di lam \t2.DLNN: di lam nua ngay \t3.N: nghi\t4.NP: nghi phep \n";
    getline(cin, this->Trangthai);
    while (checl_tt(this->Trangthai) == 0)
    {
        cout << "Ban chua nhap dung dinh dang , VD: NL\n";
        getline(cin, this->Trangthai);
    }
}
int Diemdanh::checl_tt (string tt) // Kiem tra trang thai di lam
{
    if (tt == "DL" || tt == "DLNN" || tt == "N" || tt == "NP")
        return 1;
    else return 0;
}
void Diemdanh::set_tt(string trangthai)
{
    this->Trangthai = trangthai;
}
string Diemdanh::get_tt()
{
    return this->Trangthai;
}
