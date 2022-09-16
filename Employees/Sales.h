#ifndef UNTITLED1_SALES_H
#define UNTITLED1_SALES_H
#include <iostream>
#include "Employees.h"
using namespace std;

class Sales : public Employees{
private:
    float Gross_Sales;
    float Rate;

public:
    Sales(string name , int id , float salary , float gross );
    float Total_Salary() override;
    void Print_Data();

};
#endif
