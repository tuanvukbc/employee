#pragma once
#include<bits/stdc++.h>

using namespace std;
class Employee
{
    private:
        int id;
        string name;
        string birthday;
        string adress;
        string team;
    public:
        int employeeManager();
        Employee();
        Employee(int id, string name, string birthday, string adress, string team);

        void setId(int id);
        void setName(string name);
        void setBirthday(string birthday);
        void setAdress(string adress);
        void setTeam(string team);
        Employee searchEmployee(string file, int id);
        void writeDataToFile(string file);

        int getId();
        string getName();
        string getBirthday();
        string getAdress();
        string getTeam();

};

