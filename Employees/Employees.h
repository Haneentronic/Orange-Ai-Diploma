#ifndef UNTITLED1_EMPLOYEES_H
#define UNTITLED1_EMPLOYEES_H
#include <iostream>
#include <string>
using namespace std;
class Employees {
private:
    string Name ;
    int ID;
    float Salary;
public:
    Employees(); //overloading
    Employees(string n , int id , float s);

    void setName(string n);
    string getName();
    void setId(int id);
    int getId();
    void setSalary(float salary);
    float getSalary();

   virtual float Total_Salary()=0;
   virtual void Print_Data()=0;


};

#endif
