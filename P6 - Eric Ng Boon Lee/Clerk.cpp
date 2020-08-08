#include <iostream>

#include "Employee.h"
#include "Clerk.h"
#include "Manager.h"

using namespace std;

Clerk::Clerk()
{
	cout << "Hello! Clerk" << endl;
	overtimeHours = 3;
	overtimeRate = 0.09;
}

Clerk::Clerk(int overtimeHours, double overtimeRate,
	string name, int yearJoined, double basicSalary, double allowance) :
	Employee(name, yearJoined, basicSalary, allowance)
{

	this->overtimeHours = overtimeHours;
	this->overtimeRate = overtimeRate;
}

void Clerk::print()
{
	cout << "Overtime Hours : " << overtimeHours << endl;
	cout << "Overtime Rate : " << overtimeRate << endl;

	Employee::print();
}

double Clerk::calcMonthlySalary()
{
	return basicSalary + allowance + (overtimeHours * overtimeRate);
}

int Clerk::getOvertimeHours()
{
	return overtimeHours;
}

void Clerk::setOvertimeHours(int hours)
{
	this->overtimeHours = hours;
}

double Clerk::getOvertimeRate()
{
	return overtimeRate;
}
void Clerk::setOvertimeRate(double rate)
{
	this->overtimeRate = rate;
}