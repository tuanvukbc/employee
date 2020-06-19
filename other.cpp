#include "other.h"

void Other::Print(Employee p)													// Ham In ra thong tin (Bai 2)
{
    cout << "Ma NV: " << p.getid() << endl;
    cout << "Ten NV: " << p.getname() << endl;
    cout << "Ngay thang nam sinh: " << p.getbirth() << endl;
    cout << "Dia chi: " << p.getadress() << endl;
    cout << "Bo phan cong tac: " << p.getteam() << endl;
    if (p.getcheck() == 0)
    {
        cout << "Khong co du lieu diem danh cua nhan vien" << endl;
    }
    else
    {
        int n = p.getcheck();
        for (int i = 0; i < n; i++)
        {
            p.getdd(i);
        }
    }
}
void Other::setFile(string file)
{
    this->file = file;
}
void Other::History(Employee a, int i)		//  luu vao File history.txt;
{
    ofstream output(this->file, ios::app);
    output << "Ma NV: " << a.getid() << " Ho va Ten " << a.getname() << "Da duoc them vao " << a.getddall(i);
    a.getdd(i);
}
void Other::Printfcvs(Employee p,int n = 0)
{
    ofstream myfile("data.csv", ios::app);
    myfile << p.getid() << ',' << p.getname() << ',' << p.getbirth() << ',' << p.getadress() << ',' << p.getteam() << ',' << n;
    for (int i = 0; i < n; i++)
    {
        myfile << ',' << p.getddall(i);
        if (i == n - 1)myfile << endl;
    }
}
