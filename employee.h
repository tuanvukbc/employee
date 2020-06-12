#ifndef EMPLOYEE_H
#define EMPLOYEE_H


#pragma once
#include<bits/stdc++.h>
#include"date_attendance.h"


using namespace std;

class Employee
{
private:
    string id;
    string name;
    string birthday;
    string adress;
    string team;
    Date_attendance Date[31];
public:
    Employee();
    Employee(int id, string name, string birthday, string adress, string team);
    void setId(string id);
    void setName(string name);
    void setBirthday(string birthday);
    void setAdress(string adress);
    void setTeam(string team);
    void setDate(Date_attendance Date);

    friend void writeDataToFile(string file);
    string getId();
    string getName();
    string getBirthday();
    string getAdress();
    string getTeam();
    friend void getDatacsv(string file);

};
Employee searchEmployee(string file, string id);
int valiDate(string Date);
int testId(string file, string id);
void MENU();
void employeeManager();
void getDatacsv(string filepath);
void print(Employee e);

#endif // EMPLOYEE_H
