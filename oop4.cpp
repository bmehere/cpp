
Write C++ Program using STL for sorting and searching user defined
records such as item records using vector container.

#include<iostream>
#include<fstream>
using namespace std;
class Employee
{
 string Name;
 int ID;
 double salary;
 public:
 void accept()
 {
 cout<<"\n Name :";
 cin.ignore();
 getline(cin,Name);
 cout<<"\n ID:";
 cin>>ID;
 cout<<"\n Salary :";
 cin>>salary;
 }
 void display()
 {
 cout<<"\n Name:"<<Name;
 cout<<"\n ID:"<<ID;
 cout<<"\n salary:"<<salary<<endl;
 }
 };
 
 int main()
 {
  Employee o[5];
  fstream f;
  int i,n;
  
  f.open("company.txt");
  f.open("company.txt",ios::out);
  cout<<"\n Enter the number of employees you want to store:";
  cin>>n;
  for(i=0;i<n;i++)
  {
  cout<<"\n Enter information of Employee"<<i+1<<"\n";
  o[i].accept();
  f.write((char*)&o[i],sizeof o[i]);
  }
  
  f.close();
  
  return 0;
 }
 
 
 output:
 Enter the number of employees you want to store:1

 Enter information of Employee1

 Name :Rahul

 ID:455567

 Salary :50,0000

