#include "menu.h"

void menu()
{
		system("cls");
		cout << "============================================== \n";
		cout << "= 1 - Nhap thong tin nhan vien               = \n";
		cout << "= 2 - Tim thong tin nhan vien                = \n";
		cout << "= 3 - Import danh sach nhan vien             = \n";
		cout << "= 4 - Lich Su diem danh                      = \n";
		cout << "= 5 - Tim Thong tin nhan vien theo Ten       = \n";
		cout << "= 6 - Tim Thong tin nhan vien theo Bo phan   = \n";
		cout << "= 7 - Tim Tat Ca Thong tin nhan vien         = \n";
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
		Other a;
		search b;
		search c;
		a.Print(b.Searcheid(id));
		system("pasue");
}
void CASE3()
{
		string id;
		Check a;
		Other c;
		search d;
		a.setFILE("data.csv");
		cout << "Nhap ma nhan vien \n";
		getline(cin, id);
		while (a.checkid(id))
	 {
			cout << "Ma so nhan vien khong khong ton tai\n";
			getline(cin, id);
		}
		Employee e = d.Searcheid(id);
		int n;
		c.Print(d.Searcheid(id));
		cout << "===Diem Danh====\n";
		cout << "So ngay diem danh \n";

		cin >> n;

		cin.ignore();
		for (int i = 0; i < n; i++)
		{
			e.diemdanh_1(i);
			c.History(e, i);
		}
		c.setFile("ImportData.txt");
		c.Printfcvs(e, n);
}
void CASE4()
{
		cout << "LICH SU DIEM DANH !" << endl;
		string line;
		ifstream fileInput("history.txt", ios::in);
		if (fileInput.is_open())
		{
			while (!fileInput.eof())
			{
				getline(fileInput, line);
				string epl = line;
				cout << epl << endl;
			}
			
		}
		
}
void CASE5()
{
		string name;
		cout << "Nhap Ten nhan vien ";
		getline(cin, name);
		search a;
		a.Searchnv(name);
}
void CASE6()
{
		string team;
		cout << "Nhap bo phan can tim " << endl;
		getline(cin, team);
		search a;
		a.Searchteam(team);
}
void CASE7()
{
		search a;
		a.Searchall();
	}
};
