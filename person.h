#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>

using namespace std; 

class person{

public:

person();

~person(); 

bool setFirst(char*);

bool setLast(char*);

bool setAge(int);

bool setSSN(int*);

char* getFirst()const;

char* getLast()const;

int getAge()const;

int* getSSN()const;

void print()const;

protected:

char* first;

char* last;

int age;

private:

int* ssn; 

};

class employee : public person{

public:

employee();

~employee();

bool setEnum(int*);

bool setTitle(char*);

bool setSalary(int); 

int* getEnum()const;

char* getTitle()const; 

int getSalary()const;

void print()const; 

private:

int* Enum;

char* title; 

int salary; 


};

class student : public person{

public:

student();

~student();

bool setNSHE(int*);

bool setMajor(char*);

bool setGpa(double); 

int* getNSHE()const;

char* getMajor()const;

double getGpa()const; 

void print()const; 

private: 

int* nshe;

char* major; 

double gpa; 

}; 
