#include "search.h"

search::search()
{
    this->file = "text.txt";
}
void search::setFile(string name)
{
    this->file = name;
}
Employee search::Searchid(string id)
{
    int count = 0;			// Dem so dong
    Employee* p = new Employee;
    string line;
    ifstream fileinput(this->file, ios::in);
    string str = id;
    while (!fileinput.eof())
    {
        count++;
        getline(fileinput, line);
        string epl = line;
        istringstream stm(epl);
        string token;
        getline(stm, token, ',');
        if (token == str)
        {
            p->setid(id);
            getline(stm, token, ',');
            p->setName(token);
            getline(stm, token, ',');
            p->setbirth(token,count);
            getline(stm, token, ',');
            p->setadr(token,count);
            getline(stm, token, ',');
            p->setteam(token,count);
            getline(stm, token, ',');
            int n;
            stringstream ss(token);
            ss >> n;
            if (n == 0)
            {
                p->setcheck(n);
            }
            else
            {
                p->setcheck(n);
                for (int i = 0; i < n; i++)
                {
                    getline(stm, token, ':');
                    string tok = token;
                    getline(stm, token, ',');
                    p->diemdanh(i, tok,token);
                }
            }
        }
    }
    return *p;
}
Employee search::Searchnv(string name)
{
    int count = 0;	//Dem so dong
    Employee* p = new Employee;
    string line;
    ifstream fileinput(this->file, ios::in);
    string str = name;
    while (!fileinput.eof())
    {
        count++;
        getline(fileinput, line);
        string epl = line;
        istringstream stm(epl);
        string token;
        getline(stm, token, ',');
        string id = token;
        getline(stm, token, ',');
        if (token == str)
        {
            p->setid(id);
            p->setName(name);
            getline(stm, token, ',');
            p->setbirth(token,count);
            getline(stm, token, ',');
            p->setadr(token,count);
            getline(stm, token, ',');
            p->setteam(token,count);
            getline(stm, token, ',');
            int n;
            stringstream ss(token);
            ss >> n;
            if (n == 0)
            {
                p->setcheck(n);
            }
            else
            {
                p->setcheck(n);
                for (int i = 0; i < n; i++)
                {
                    getline(stm, token, ':');
                    string tok = token;
                    getline(stm, token, ',');
                    p->diemdanh(i, tok, token);
                }
            }
        }
    }
    return *p;
}
Employee search::Searchall() //alll
{
    int count = 0;
    Employee* p = new Employee;
    string line;
    ifstream fileinput(this->file, ios::in);
    while (!fileinput.eof())
    {
        count++;
        getline(fileinput, line);
        string epl = line;
        istringstream stm(epl);
        string token;
        getline(stm, token, ',');

            p->setid(token);
            getline(stm, token, ',');
            p->setName(token);
            getline(stm, token, ',');
            p->setbirth(token,count);
            getline(stm, token, ',');
            p->setadr(token,count);
            getline(stm, token, ',');
            p->setteam(token,count);
            getline(stm, token, ',');
            int n;
            stringstream ss(token);
            ss >> n;
            if (n == 0)
            {
                p->setcheck(n);
            }
            else
            {
                p->setcheck(n);
                for (int i = 0; i < n; i++)
                {
                    getline(stm, token, ':');
                    string tok = token;
                    getline(stm, token, ',');
                    p->diemdanh(i, tok, token);
                }
            }
    }

    return *p;
}
Employee search::Searchteam(string team)
{
    int count = 0;			// Dem so dong
    Employee* p = new Employee;
    string line;
    ifstream fileinput(this->file, ios::in);
    string str = team;
    while (!fileinput.eof())
    {
        count++;
        getline(fileinput, line);
        string epl = line;
        istringstream stm(epl);
        string token;
        getline(stm, token, ',');
        string id = token;
        getline(stm, token, ',');
        string name = token;
        getline(stm, token, ',');
        string birth = token;
        getline(stm, token, ',');
        string add;
        getline(stm, token, ',');
        if (token == str)
        {
            p->setid(id);
            p->setName(name);
            p->setbirth(birth, count);
            p->setadr(add, count);
            p->setteam(token, count);
            getline(stm, token, ',');
            int n;
            stringstream ss(token);
            ss >> n;
            if (n == 0)
            {
                p->setcheck(n);
            }
            else
            {
                p->setcheck(n);
                for (int i = 0; i < n; i++)
                {
                    getline(stm, token, ':');
                    string tok = token;
                    getline(stm, token, ',');
                    p->diemdanh(i, tok, token);
                }
            }
        }
    }
    return *p;
}
