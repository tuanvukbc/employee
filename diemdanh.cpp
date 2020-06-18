#include "diemdanh.h"
#include "employee.h"
#include "date.h"
#include "person.h"

Diemdanh::Diemdanh()
{
    this->file = "History.txt";
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
void Diemdanh::history(Employee a) // Luu qua trinh diem danh ra mot file rieng roi cho xuat ra man hinh
{
    ofstream output(file, ios::app);
    output << a.getname() << "Da duoc diem danh vao " << Date::getDate() << ": " << endl;
    output.close();
}
