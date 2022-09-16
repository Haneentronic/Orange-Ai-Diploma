#ifndef UNTITLED1_ENGINEER_H
#define UNTITLED1_ENGINEER_H
#include "Employees.h"
#include <iostream>
#include <string>
class Engineer: public Employees{
public:
    string Spaciality ;
    int Experience;
    int Overtime_Hours;
    float Overtime_Hours_Rate;
public:
    Engineer(string name , int id, float salary,string sp ,int exp  , int overtime);
    float Total_Salary() override ;
    void Print_Data() override;

};


#endif //UNTITLED1_ENGINEER_H
