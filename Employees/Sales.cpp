#include "Sales.h"
#include "Employees.h"
Sales::Sales(string name, int id, float salary, float gross): Employees(name,id,salary){
Gross_Sales=gross;
Rate=0.5;

}

float Sales::Total_Salary() { //override
   return getSalary()+(Gross_Sales *Rate);
}

void Sales::Print_Data() {
    Employees::Print_Data();
    cout<<"Gross Sales = "<<Gross_Sales <<endl;
    cout<<"Commission Rate = "<<Rate<<endl;

}