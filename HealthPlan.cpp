#include "HealthPlan.h"
#include<iostream>
using namespace std;


HealthPlan::HealthPlan()
	:planID(0) , planName("not named yet") , planDescription("empty") , planPrice(0)
{

}

HealthPlan::HealthPlan(unsigned int p_planID, string p_planName, string p_planDescription, unsigned int p_planPrice)
	: planID(p_planID), planName(p_planName), planDescription(p_planDescription), planPrice(p_planPrice)
{

}

void HealthPlan::displayHealthPlan()
{
	cout << "****************************************************************" << endl;
	cout << "\tPlan ID         :  " << planID << endl;
	cout << "\tPlan Name       :  " << planName << endl;
	cout << "\tPlan Description:  " << planDescription << endl;
	cout << "\tPlan Price      :  " << planID << endl;
	cout << "****************************************************************" << endl;
}
void HealthPlan::setPlanID(unsigned int p_planID)

{
	planID = p_planID;
}

void HealthPlan::setPlanName(std::string p_planName)
{
	planName = p_planName;
}

void HealthPlan::setPlanDescription(std::string p_planDescription)
{
	planDescription = p_planDescription;
}

void HealthPlan::setPlanPrice(unsigned int p_planPrice)
{
	planPrice = p_planPrice;
}

unsigned int HealthPlan::getPlanID()
{
	return planID;
}

std::string HealthPlan::getPlanName()
{
	return planName;
}

std::string HealthPlan::getPlanDescription()
{
	return planDescription;
}

unsigned int HealthPlan::getPlanPrice()
{
	return planPrice;
}
