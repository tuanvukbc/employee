#include "date.h"

int Date::validate(string& datt)
{
    stringstream ss(datt);
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
void Date::nhap()
{
    getline(cin, this->date);
    while (validate(this->date) == 0)
    {
        cout << "Ban chua nhap dung dinh dang ngay thang, VD: 14 5 1999 \n";
        cout << "Nhap ngay thang nam sinh: ";
        getline(cin, this->date);
    }
}
string Date::getDate()
{
    return date;
}
void Date::setdate(string date)
{
    this->date = date;
}
