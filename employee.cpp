#include "employee.h"
#include "date_attendance.h"
using namespace std;



Employee::Employee()
{
    id = "";
    name = "";
    birthday = "";
    adress = "";
    team = "";
}

Employee::Employee(int id, string name, string birthday, string adress, string team)
{
    this->id = id;
    this->name = name;
    this->birthday = birthday;
    this->adress = adress;
    this->team = team;
}

void Employee::setId(string id)
{
    this->id = id;
}
void Employee::setName(string name)
{
    this->name = name;
}
void Employee::setBirthday(string birthday)
{
    this->birthday = birthday;
}
void Employee::setAdress(string adress)
{
    this->adress = adress;
}
void Employee::setTeam(string team)
{
    this->team = team;
}
string Employee::getId()
{
    return this->id;
}
string Employee::getBirthday()
{
    return this->birthday;
}
string Employee::getAdress()
{
    return this->adress;
}
string Employee::getTeam()
{
    return this->team;
}
string Employee::getName()
{
    return this->name;
}

Employee searchEmployee(string file, string id)
{
    Employee e;
    string line;
    // doc file
    ifstream fileInput(file, ios::in);
    if (fileInput.is_open())
    {
        string str = id;
        while (!fileInput.eof())
        {
            getline(fileInput, line);
            string epl = line;
            istringstream stm(epl);
            string token;
            getline(stm, token,',' );

            if (token == str)
            {
                e.setId(id);
                getline(stm, token, ',');
                e.setName(token);
                getline(stm, token, ',');
                e.setBirthday(token);
                getline(stm, token, ',');
                e.setAdress(token);
                getline(stm, token, ',');
                e.setTeam(token);


            }
        }
        fileInput.close();
    }
    return e;
}

int valiDate(string Date)
{
    stringstream ss(Date);
    int day, month, year;

    ss >> day >> month >> year;

    if (year >= 1000 && year <= 3000)
    {
        if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && day > 0 && day <= 31)
            return 1;
        else
            if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 0 && day <= 30)
                return 1;
            else
                if (month == 2)
                {
                    if ((year % 4 == 0 || year % 400 == 0) && day > 0 && day <= 29)
                        return 1;
                    else if (day > 0 && day < 30)return 1;
                }
                else
                    return 0;
    }
    else
        return 0;
    return 0;
}

int testId(string file, string id)
{
    string line;
    ifstream fileInput(file, ios::in);
    if (fileInput.is_open())
    {
        string str = id;
        while (!fileInput.eof())
        {
            getline(fileInput, line);
            string epl = line;
            istringstream stm(epl);
            string token;
            getline(stm, token, ',');
            if (token == str)
            {
                return 0;
            }

        }
        fileInput.close();
    }
    return 1;
}

void writeDataToFile(string file)
{
    Employee* p = new Employee;
    ofstream myfile(file, ios::app);
    if (myfile.is_open())
    {
        cout << "Nhap ma nhan vien(VD: 01): ";
        getline(cin, p->id);
        while (testId(file, p->id) == 0) {
            cout << "Ma nhan vien bi trung, moi ban nhap lai:  \n";
            cout << "Nhap ma nhan vien(VD: 01): ";
            getline(cin, p->id);
        }

        cout << "Nhap ho va ten nhan vien: ";
        getline(cin, p->name);

        cout << "Nhap ngay thang nam sinh: ";
        getline(cin, p->birthday);
        while (valiDate(p->birthday) == 0)
        {
            cout << "Ban chua nhap dung dinh dang ngay thang, VD: 14 5 1999 \n";
            cout << "Nhap ngay thang nam sinh: ";
            getline(cin, p->birthday);
        }

        cout << "Nhap dia chi: ";
        getline(cin, p->adress);
        while (p->adress.empty())
        {
            cout << "Dia chi khong duoc bo trong \n";
            cout << "Moi ban nhap lai dia chi \n";
            getline(cin, p->adress);
        }

        cout << "Nhap bo phan cong tac: ";
        getline(cin, p->team);
        while (p->team.empty())
        {
            cout << "Bo phan cong tac khong duoc bo trong \n";
            cout << "Moi ban nhap lai bo phan cong tac \n";
            cin >> p->team;
        }
        cout << "-------------------------------------------------" << endl;

        //dinh dang luu vao file
         myfile << p->id << "," << p->name << "," << p->birthday << "," << p->adress << "," << p->team << endl;
        myfile.close();
    }
    else cout << "Mo file that bai. TIP: Kiem tra duong dan hoac Chay chuong trinh voi quyen admin\n";
}


void print(Employee e)
{
    cout << "Ma NV: " << e.getId() << endl;
    cout << "Ten NV: " << e.getName() << endl;
    cout << "Ngay thang nam sinh: " << e.getBirthday() << endl;
    cout << "Dia chi: " << e.getAdress() << endl;
    cout << "Bo phan cong tac: " << e.getTeam() << endl;


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

    string filePath = "C:/Users/Tuan Vu/Desktop/text.txt";
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
            string filepath = "C:/Users/Tuan Vu/Desktop/ImportData";                            // file cvs , filepath = "Duong dan file "
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

