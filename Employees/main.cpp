#include <iostream>
#include "Employees.h"
#include "Sales.h"
#include"Engineer.h"

using namespace std;
int main() {


    string name ;
    string job;
    string spec;
    float Gross_Sales;
    int id;
    int experience;
    int overTime;
    float Salary_for_Sale=1000;
    float Salary_for_Eng =10000;
    cout<<"You Are Engineer Or Sale ?"<<endl;
    cin>>job ;
    if(job=="Engineer"){
        cout<<"Enter your name : ";
        cin>>name ;
        cout<<endl;

        cout<<"Enter Your ID :";
        cin>>id;
        cout<<endl;

        cout<<"Enter Your Speciality :";
        cin>>spec;
        cout<<endl;

        cout<<"Enter Your Experience :";
        cin>> experience;
        cout<<endl;

        cout<<"Enter Number of Overtime Hours :";
        cin>>overTime;
        cout<<endl;

        Engineer engineer(name , id ,Salary_for_Eng ,spec,experience, overTime );
        engineer.Total_Salary();
        engineer.Print_Data();

    }else if(job=="Sale"){
        cout<<"Enter your name : ";
        cin>>name ;
        cout<<endl;

        cout<<"Enter Your ID :";
        cin>>id;
        cout<<endl;

        cout<<"Enter Your Gross Sales :";
        cin>>Gross_Sales;
        cout<<endl;

        Sales sale(name , id ,Salary_for_Sale,Gross_Sales);
        sale.Total_Salary();
        sale.Print_Data();


    }



}
