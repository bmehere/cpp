#include<iostream>
#include<fstream>
using namespace std;
class Employee              // declaring class employee
{
 string Name;
 int ID;
 double salary;
 public:
 void accept()
 {
 cout<<"\n Name : ";
 cin.ignore();
getline(cin,Name);
 cout<<"\n Id : ";
 cin>>ID;
 cout<<"\n Salary : ";
 cin>>salary;
 }
 void display()
 {
 cout<<"\n Name : "<<Name;
 cout<<"\n Id : "<<ID;
 cout<<"\n Salary : "<<salary<<endl;
 }
};

int main()
{
 Employee o[5];
 fstream f;
 int i,n;

 f.open("demo.txt",ios::out);
 cout<<"\n Enter the number of employees you want to store : ";
 cin>>n;
 for(i=0;i<n;i++)
 {
 cout<<"\n Enter information of Employee "<<i+1<<"\n";
 o[i].accept();
 f.write((char*)&o[i],sizeof o[i]);
 }

 f.close();

 f.open("demo.txt",ios::in);
 cout<<"\n Information of Employees is as follows : \n";
 for(i=0;i<n;i++)
 {
 cout<<"\nEmployee "<<i+1<<"\n";
 f.write((char*)&o[i],sizeof o[i]);
 o[i].display();
 }
 f.close();
 
 return 0;
}

OUTPUT:

Enter the number of employees you want to store : 2

 Enter information of Employee 1

 Name : priya

 Id : 3445

 Salary : 50000
 Enter information of Employee 2

 Name : RAHUL
 Id : 5678
 Salary : 40000
 Information of Employees is as follows : 

Employee 1

 Name : priya
 Id : 3445
 Salary : 50000

Employee 2

 Name :RAHUL 
 Id : 5678
 Salary : 40000

