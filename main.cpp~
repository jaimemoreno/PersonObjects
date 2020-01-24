#include "person.cpp"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>

bool getNum(char* , int&, int&); 

bool getPersons(char*, employee*, student* ); 



int main()
{

int i; 


person* p = new person;

int* social = new int [9];

int* test;

int* dummy = new int [5];

int* a = new int [10];

int* num; 

int* diff = new int[9];

for(i = 0; i <9;i++)
 {
   diff[i]= 5; 
 }

for(i = 0; i <10;i++)
  {
    a[i]=i; 
  }

for(i = 0; i <5; i++)
  {
    dummy[i]=(i+1);
  }  

cout << "Testing Person Class" << endl << endl; 

for(i = 0; i < 9; i++)
  {
    social[i] = i; 
  }

if(!p->setFirst("Chez"))
  {
    cout << "Error in setFirst function" << endl; 
  }
 
if(!p->setLast("Dippler"))
  {
    cout << "Error in setLast function" << endl; 
  }
  
if(!p->setAge(45))
  {
    cout << "Error in setAge function" << endl; 
  }
    
if(!p->setSSN(social))
  {
    cout << "Error in setSSN function"<< endl; 
  }
  
cout << p->getFirst(); 

cout << " is the name returned" << endl; 

cout << p->getLast();

cout << " is the name returned" << endl; 

cout << p->getAge();

cout << " is the age returned " << endl; 

test = p->getSSN(); 

cout << "Returned: " ;
for(i = 0; i < 9; i++)
  {
    cout << test[i];
  }
  
cout << endl; 
  
p->print();

cout << endl;  

delete p; 

cout << endl << endl; 

cout << "Testing Employee Class" << endl; 

employee* e = new employee; 

if(!e->person::setFirst("Michael"))
  {
    cout << "Error in inheritance"<< endl; 
  }
  
if(!e->person::setLast("Hunt"))
  {
    cout << "Error in inheritance" << endl; 
  }
  
if(!e->person::setAge(21))
  {
    cout << "Error in inheritance" << endl; 
  }

if(!e->setSSN(social))
  {
    cout << "Error in inheritance"<< endl;
  }
  
if(!e->setEnum(dummy))
  {
    cout << "Error in setEnum" << endl; 
  }
  
if(!e->setTitle("Forever_21"))
  {
    cout << "Error in setTitle function" << endl; 
  }
  
if(!e->setSalary(250))
  {
    cout << "Error in setSalary function" << endl; 
  }

dummy = e->getEnum();

cout << "Returned: ";

for(i = 0; i <5; i++)
  {
    cout << dummy[i];
  }
  
cout << endl; 
  
cout << e->getTitle() << ' ' << "is the title returned" << endl; 

cout << e->getSalary() << ' ' << "is the returned salary" << endl << endl;   
  
e->print();

cout << endl; 

delete e; 

cout << endl << endl; 

cout << "Testing Student Class" << endl << endl; 

student* s = new student; 

if(!s->person::setFirst("Burt"))
  {
    cout << "error in inheritance" << endl;
  }
  
if(!s->person::setLast("Macklin"))
  {
   cout << "error in inheritance" << endl; 
  }
  
if(!s->person::setAge(29))
  {
    cout << "error in inheritance" << endl; 
  }
  
if(!s->setSSN(diff))
  {
    cout << "Error in inheritance"<< endl;
  }
  
  
if(!s->setNSHE(a))
  {
    cout << "error in setNSHE function" << endl; 
  }
  
if(!s->setMajor("FBI"))
  {
    cout << "error in setMajor function" << endl; 
  }
  
if(!s->setGpa(4.1))
  {
    cout << "error in setGpa function" << endl; 
  }

num = s->getNSHE();

cout << "nshe is: "; 

for(i = 0; i < 10; i++)
  {
    cout << num[i]; 
  }
  
cout << endl; 

cout << s->getMajor();

cout << " is the major returned " << endl; 

cout << s->getGpa();

cout << " is the gpa returned" << endl; 

cout << endl; 

s->print(); 

cout << endl << endl; 


delete s; 

cout << endl << endl; 

cout << "Begin testing with file data" << endl << endl; 

employee* workers = new employee [30];

student* peers = new student [30];

cout << "construction works" << endl << endl; 


getPersons("persons", workers, peers);
 
cout << endl << endl; 

delete [] workers;

workers = NULL; 

delete [] peers;

peers = NULL;  

return 0; 
}


bool getPersons(char* file, employee* a, student *b)
  {
    double d; 
  
    bool worked = false; 
    
    char dum; 
    
    int t; 
    
    int i = 0; 
    
    int j = 0; 
  
    ifstream fin;
    
    fin.clear();
    
    fin.open(file); 
    
    fin>> dum; 
    
    if(fin.good())
      {
        worked = true; 
        
        cout << "input good" << endl; 
            
        while(fin.good())
         { 
          cout << i << endl;
          
          int* ss = new int [9];
    
          int* ns = new int [10]; 
    
          int* en = new int [5]; 
          
          char* temp = new char [30];
          
          char* temp2 = new char [30];
          
          char* temp3 = new char [30]; 
          
          j = 0; 
          
          if(dum == 's')
            {
              fin >> dum;
              
              fin >> dum;
              
              // get first
              
              while(dum != ':')
                {
                  temp[j] = dum;
                  
                  fin >> dum; 
                  
                  j++;
                }
                
              temp[j] = '\0';  
                
              b[i].setFirst(temp);
              
              fin >> dum;
              
              j=0; 
              
              // get last name
              
              while(dum != ':')
                {
                  temp2[j] = dum;
                  
                  fin >> dum; 
                  
                  j++;
                }
              
              temp2[j] = '\0';
                
              b[i].setLast(temp2);
              
              // get age
              
              fin>> dum;
              
              cout << dum << "asdfasdf" << endl; 
              
              t = dum - 48;
              
              cout << t << "here" << endl; 
              
              t = t*10; 
              
              fin >> dum;
              
              t = t+(dum-'0'); 
              
              b[i].setAge(t);  
              
              // get ssn
              
              fin>> dum;
              
              fin>> dum; 
              
              j = 0; 
              
              while(dum != ':')
                {
                
                  ss[j] = ((int)dum-48);
                  
                  fin >> dum; 
                  
                  j++;
                }
                
              b[i].setSSN(ss); 
              
              //get nshe
              
              fin>>dum; 
              
              j=0; 
              
              while(dum != ':')
                {
                
                  ns[j] = ((int)dum-48);
                  
                  fin >> dum; 
                  
                  j++;
                }
                
              b[i].setNSHE(ns);
              
              fin >> dum; 
              
              j= 0; 
              
              //get major 
              
              while(dum != ':')
                {
                  temp3[j] = dum;
                  
                  fin >> dum; 
                  
                  j++;
                }
                
                
              temp3[j] = '\0';
              
              b[i].setMajor(temp3);
              
              // get gpa 
              
              fin >> d; 
              
              b[i].setGpa(d); 
                            
            }
            
          else
           {
              fin >> dum;
              
              fin >> dum;
              
              // get first
              
              while(dum != ':')
                {
                  temp[j] = dum;
                  
                  fin >> dum; 
                  
                  j++;
                }
                
              temp[j] = '\0';
                
              a[i].setFirst(temp);
              
              fin >> dum;
              
              j=0; 
              
              // get last name
              
              while(dum != ':')
                {
                  temp2[j] = dum;
                  
                  fin >> dum; 
                  
                  j++;
                }
              temp2[j] = '\0';  
                
              a[i].setLast(temp2);
              
              // get age
              
              fin>> t;
              
              a[i].setAge(t);  
              
              // get ssn
              
              fin>> dum;
              
              fin>> dum; 
              
              j = 0; 
              
              while(dum != ':')
                {
                
                  ss[j] = ((int)dum-48);
                  
                  fin >> dum; 
                  
                  j++;
                }
                
              a[i].setSSN(ss); 
              
              //get employee number
              
              fin>>dum; 
              
              j=0; 
              
              while(dum != ':')
                {
                
                  en[j] = ((int)dum-48);
                  
                  fin >> dum; 
                  
                  j++;
                }
                
              a[i].setEnum(en);
              
              fin >> dum; 
              
              j= 0; 
              
              //get title 
              
              while(dum != ':')
                {
                  temp3[j] = dum;
                  
                  fin >> dum; 
                  
                  j++;
                }
                
              temp3[j] = '\0';   
                
              a[i].setTitle(temp3);
              
              // get salary 
              
              fin >> t; 
              
              a[i].setSalary(t);
           }
           
          delete [] ss;          
          
          ss = NULL;        
    
          delete [] ns;    
          
          ns = NULL; 
    
          delete [] en;    
          
          en = NULL;  
          
          delete [] temp;
          
          temp = NULL; 
          
          delete [] temp2;     
          
          temp2 = NULL; 
          
          delete [] temp3;
          
          temp3 = NULL;   
          
          i++; 
          
          fin>> dum; 
         }
      }
    fin.close(); 
       
    return worked; 
  }













