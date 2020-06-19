#include <iostream>

using namespace std;

int main()
void menu()
{
    system("cls");
    cout << "============================================== \n";
    cout << "= 1 - Nhap thong tin nhan vien               = \n";
    cout << "= 2 - Tim thong tin nhan vien                = \n";
    cout << "= 3 - Import danh sach nhan vien             = \n";
    cout << "= 4 - Tim thong tin nhan vien                = \n";
    cout << "= 5 - Lich su diem danh                      = \n";
    cout << "============================================== \n";
}

int main()
{
    string filePath = "ImportData.csv";
    int choice;
    string y;
    do
    {
        menu();
        cout << "Chon chuc nang (1-2): ";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            cout << "Moi nhap thong tin nhan vien \n";
            Employee a;
            a.nhap();
            system("pause");;
        }
        break;

        case 2:
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
            a.Print(b.Searchid(id));
            system("pasue");
        }
        break;

        case 3:
        {
            string id;
            Check a;
            a.setFILE("data.csv");
            cout << "Nhap ma nhan vien \n";
            getline(cin, id);
            while (a.checkid(id))
            {
                cout << "Ma so nhan vien khong khong ton tai\n";
                getline(cin, id);
            }
        }

        default:
            cout << "Khong hop le, moi nhan C de tiep tuc" << endl;
            cin >> y;
            break;
    }
    }while (choice == 1 || choice == 2 || choice == 3 || choice == 4 || y == "c");

    return 0;
}
