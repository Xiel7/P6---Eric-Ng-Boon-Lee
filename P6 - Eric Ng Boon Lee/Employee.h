#pragma once
#include <iostream>
#include <string>



using namespace std;


class Employee
{
protected:
	string name;
	int yearJoined;
	double basicSalary;
	double allowance;

public:
	Employee();
	Employee(string name, int yearJoined, double basicSalary, double allowance);

	string getName();
	void setName(string name);

	int getYearJoined();
	void setYearJoined(int yearJoined);

	double getBasicSalary();
	void setBasicSalary(double basicSalary);

	double getAllowance();
	void setAllowance(double allowance);

	void print();

	virtual double calcMonthlySalary();
};




