#include <iostream>

#include "Employee.h"
#include "Clerk.h"
#include "Manager.h"

using namespace std;


Employee::Employee()
{
	cout << "Hello! Employee" << endl;
	name = "Genghis Khan";
	yearJoined = 2015;
	basicSalary = 10000.00;
	allowance = 1000.00;
}

Employee::Employee(string name, int yearJoined, double basicSalary, double allowance)
{
	cout << "Superclass invoked" << endl;
	this->name = name;
	this->yearJoined = yearJoined;
	this->basicSalary = basicSalary;
	this->allowance = allowance;
}

void Employee::print()
{
	
	cout << "Name : " << name << endl;
	cout << "Year Joined : " << yearJoined << endl;
	cout << "Basic Salary : " << basicSalary << endl;
	cout << "Allowance : " << allowance << endl;
}

double Employee::calcMonthlySalary()
{
	return basicSalary + allowance;
}



string Employee::getName()
{
	return name;
}
void Employee::setName(string name)
{
	this->name = name;
}

int Employee::getYearJoined()
{
	return yearJoined;
}
void Employee::setYearJoined(int yearJoined)
{
	this->yearJoined = yearJoined;
}

double Employee::getBasicSalary() 
{
	return basicSalary;
}
void Employee::setBasicSalary(double basicSalary)
{
	this->basicSalary = basicSalary;
}

double Employee::getAllowance()
{
	return allowance;
}

void Employee::setAllowance(double allowance)
{
	this->allowance = allowance;
}


