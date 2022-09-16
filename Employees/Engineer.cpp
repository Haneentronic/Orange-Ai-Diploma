#include "Engineer.h"
#include "Employees.h"
Engineer::Engineer(string name, int id, float salary, string sp, int exp ,int overtime): Employees(name,id,salary){
  Spaciality=sp;
  Experience=exp;
  Overtime_Hours=overtime;
  Overtime_Hours_Rate=150;

}
float Engineer::Total_Salary() {

    return getSalary()+(Overtime_Hours_Rate *Overtime_Hours);
}


void Engineer::Print_Data() {
    Employees::Print_Data();
   cout<<"Speciality : "<<Spaciality <<endl;
   cout<<"Experience : "<<Experience<<endl;

}

