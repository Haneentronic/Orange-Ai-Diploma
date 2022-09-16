#include "Employees.h"
#include <string>
using  namespace  std;
Employees ::Employees(string name, int id, float salary) {
    Name=name;
    ID=id;
    Salary=salary;

}
void Employees::setName(string n) {
    Name =  n;
}

void Employees::setId(int id) {
    ID=id;
}

int Employees::getId() {
    return ID;
}

void Employees::setSalary(float salary) {
    Salary=salary;
}

float Employees::getSalary() {
    return Salary;
}

string Employees::getName() {
    return Name;
}

Employees::Employees() {
    Name="UnKnown";
    ID=0;
    Salary=0.0;
}

void Employees::Print_Data() {
    cout<<"Name :"<<getName() <<endl;
    cout<<"Employee Id :"<<getId()<<endl;
    cout<<"Salary :"<< Total_Salary()<<endl;
}