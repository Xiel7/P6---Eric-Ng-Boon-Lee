#pragma once
#include "Employee.h"
#include <iostream>
#include <string>

class Clerk : public Employee
{
private:
	int overtimeHours;
	double overtimeRate;

public:
	Clerk();
	Clerk(int overtimeHours, double overtimeRate,
		string name, int yearJoined, double basicSalary, double allowance);

	int getOvertimeHours();
	void setOvertimeHours(int hours);
	double getOvertimeRate();
	void setOvertimeRate(double rate);

	void print();

	double calcMonthlySalary();
};