#include <iostream> 
#include <fstream>
#include <cstdlib>
#include <cstring>
#include "person.h"

using namespace std; 

person::person()
  {
    first = new char [20]; 
    last = new char [20]; 
    ssn = new int [9]; 
    age = 0; 
    cout << "Person Constructor";
  }
  
person::~person()
  {
    cout << "Calling Person Destructor" << endl; 
    if(first != NULL)
      {
        delete [] first; 
        first = NULL; 
      }
      
    if(last != NULL)
      {
        delete []  last;
        last = NULL;  
      }
      
    if(ssn != NULL)
     {
       delete [] ssn;
       ssn = NULL; 
     }      

    cout << "Person Destructor" << endl; 
  }
  
bool person::setFirst(char* name)
  {
    int len;
  
    cout << "First should be: " << name << endl; 
       
    strcpy(first, name);  
    
    cout << "First is: " << first << endl; 
   
    return true; 
  }
  
bool person::setLast(char* name)
  {
    int len; 
    
    cout << "Last should be: " << name << endl; 
  
    strcpy(last, name);
    
    cout << "Last is: " << last << endl; 
    
    return true; 
  }
  
bool person::setAge(int num)
  {
    cout << "Age is being set to:" << num << endl;
  
    age = num; 
    
    cout << "Age is: " << age << endl; 
  
    return true; 
  }
  
bool person::setSSN(int* a)
  {
    int i;
    
    cout << "Social should be: "; 
    
    for(i = 0; i < 9; i++)
      {
        cout << a[i]; 
      }
    
    cout << endl; 
    
    cout << "Social is: "; 
    
    for(i = 0; i < 9; i++)
      {
        ssn[i] = a[i]; 
      }
      
    for(i = 0; i < 9; i++)
      {
        cout << ssn[i]; 
      }
      
    cout << endl;
      
    return true; 
  }
  
char* person::getFirst()const
  {
    cout << "Getting First Name: " << first << endl;
  
    return first; 
  }
  
char* person::getLast()const
  {
    cout << "Getting last name: " << last << endl; 
  
    return last; 
  }
  
int person::getAge()const
  {
    cout << "Getting age: " << age << endl; 
    return age; 
  }

int* person::getSSN()const
  {
    int i;
    
    cout << "Looking for: " ; 
    
    for(i = 0; i < 9; i++)
      {
        cout << ssn[i]; 
      }
      
    cout << endl;   
      
    return ssn; 
  }
  
void person::print()const
  {
    int i; 
  
    cout << first << ' ' << last << ' ' << age << ' ';
    
    for(i = 0; i < 9; i++)
      {
        cout << ssn[i];
      }
       
  }
  
employee::employee()
  {
    cout << "Calling Employee Constructor" << endl; 
    
    Enum = new int [5]; 
    
    title = new char [30]; 
    
    salary = 0; 
  }
  
employee::~employee()
  {
    cout << "Calling Employee Destructor" << endl; 
    
    if(Enum != NULL)
      {
        delete [] Enum;
        
        Enum = NULL; 
      }
      
    if(title != NULL)
      {
      delete [] title;
        
        title = NULL; 
      }
    salary = 0; 
    
  }
  
bool employee::setEnum(int* num)
  {
    int i ; 
    
    cout << "Employee number should be:";
    
    for(i = 0; i < 5; i++)
      {
        cout << num[i];
      }
      
    cout << endl; 
    
    for(i = 0; i < 5; i++)
      {
        Enum[i] = num[i]; 
      }
      
    cout << "Employee number is:";
      
    for(i = 0; i < 5; i++)
      {
        cout << Enum[i];
      }
      
    cout << endl; 
      
    return true; 
  }
  
bool employee::setTitle(char* label)
  {
   
   cout << "Title should be: " << label << endl; 
   
   strcpy(title,label); 
   
   cout << "Title is: " << title << endl; 
  
   return true; 
  }
  
bool employee::setSalary(int totes)
  {
    cout << "Salary should be: " << totes << endl;
    
    salary = totes;
    
    cout << "Salary is: " << salary << endl; 
    
    return true; 
  }
    
int* employee::getEnum()const
  {
    int i; 
    
    cout << "Employee number should be: " ;
    
    for(i =0; i < 5; i++)
      {
        cout << Enum[i];
      }
      
    cout << endl; 
    
    return Enum; 
  }
  
char* employee::getTitle()const
  {
    cout << "Title should be: " << title << endl;
    
    return title; 
  }
  
int employee::getSalary()const
  {
    cout << "Salary should be: " << salary << endl;
    
    return salary;
  }
  
void employee::print()const
  {
    int i; 
   
    person::print();
    
    cout << ' ';
    
    for(i = 0; i < 5; i++)
     {
       cout << Enum[i];
     }
     
   cout << ' ' << title << ' ' << salary << endl << endl; 
  }
  
student::student()
  {
    cout << "Calling student constructor" << endl; 
    
    nshe = new int [10]; 
    
    major = new char [30]; 
    
    gpa= 0.0; 
  }
  
student::~student()
  {
    cout << "Calling student destructor" << endl; 
    
    if(nshe != NULL)
      {
        delete [] nshe; 
      }
      
    if(major != NULL)
      {
        delete [] major;
      }
      
    gpa = 0.0; 
  }
  
bool student::setNSHE(int* num)
  {
    int i; 
    
    cout << "NSHE should be: " ;
    
    for(i = 0; i <10; i++)
      {
        cout << num[i]; 
      }
      
    cout << endl; 
    
    for(i = 0; i <10; i++)
      {
        nshe[i]=num[i];
      }
   
    cout << "NSHE is: ";
  
    for(i = 0; i <10; i++)
      {
        cout << nshe[i]; 
      }
      
    cout << endl; 
    
    return true; 
  }
  
bool student::setMajor(char* m)
  {
    
    cout << "Major should be: " << m << endl;
  
    strcpy(major, m);
    
    cout << "Major is: " << major << endl;
    
    return true; 
  }
  
bool student::setGpa(double a)
  {
    cout << "Gpa should be: " << a << endl;
    
    gpa = a; 
    
    cout << "Gpa is: " << gpa << endl; 
    
    return true; 
  }
  
int* student::getNSHE()const
  {
    int i;
    
    cout << "NSHE should be: ";
    
    for(i = 0; i <10; i++)
      {
        cout << nshe[i];
      }
      
    cout << endl; 
    
    return nshe; 
  }
  
char* student::getMajor()const
  {
    cout << "Major is: " << major << endl;
    
    return major; 
  }
  
double student::getGpa()const
  {
    cout << "Gpa is: " << gpa << endl;
    
    return gpa; 
  }
  
void student::print()const
  {
    int i; 
  
    person::print();
    
    cout << ' '; 
    
    for(i = 0; i <10; i++)
      {
        cout << nshe[i];
      }
      
    cout << ' ' << major << ' ' << gpa << endl;     
  }
