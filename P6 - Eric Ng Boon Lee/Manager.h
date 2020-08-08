#pragma once
#include <iostream>
#include "Employee.h"


class Manager : public Employee
{
private:
	double travelClaims;

public:
	Manager();
	Manager(double travelClaims, string name, int yearJoined, double basicSalary, double allowance);

	double getTravelClaims();
	void setTravelClaims(double travelClaims);

	void print();

	double calcMonthlySalary();
};