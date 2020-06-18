#include "check.h"

void Check:: setFILE(string name)
{
    this->file = name;
}
int Check::checkid(string id)  // Kiem tra xem co trung ma Nhan Vien khong
{

    string line;
    ifstream fileInput(this->file, ios::in);
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
