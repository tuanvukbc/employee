#include "employeemanager.h"
#include "employee.h"
#include "date_attendance.h"

employeeManager::employeeManager()
{

}

void MENU()
{
    system("cls");
    cout << "============================================== \n";
    cout << "= 1 - Nhap thong tin nhan vien               = \n";
    cout << "= 2 - Tim thong tin nhan vien                = \n";
    cout << "= 3 - Import danh sach nhan vien             = \n";
    cout << "============================================== \n";


}

void employeeManager()
{

    string filePath = "C:/Users/Tuan Vu/Desktop/ImportData.csv";
    int choice;
    char y ='c';

    do
    {
        MENU();
        cout << "Chon chuc nang (1-3): ";
        cin >> choice;
        cin.ignore();
        switch (choice)
        {
        case 1:
        {
            cout << "Moi nhap thong tin nhan vien: \n";
            writeDataToFile(filePath);
            system("pause");
        }
        break;

        case 2:
        {
            string id;
            cout << "Moi nhap ma nhan vien can tim kiem: ";
            getline(cin, id);
            while (testId(filePath, id) != 0) {
                cout << "Ma nhan vien khong ton tai \n";
                cout << "Moi ban nhap lai ma nhan vien can tim kiem: ";
                cin >> id;
            }
            cout << "Thong tin cua nhan vien co ma nhan vien: " << id << endl;
            print(searchEmployee(filePath, id));

            system("pause");
        }
        break;
        case 3:
        {
            cout << "Dang doc du lieu tu file cvs\n";
            string filepath = "C:/Users/Tuan Vu/Desktop/ImportData.csv";
            getDatacsv(filepath);
            break;
        }
        default:
            cout << "Khong hop le, moi nhan C de tiep tuc" << endl;
            putchar(y);
            break;
        }
    } while (choice == 1 || choice == 2 || y == 'c' || choice == 3);
}
