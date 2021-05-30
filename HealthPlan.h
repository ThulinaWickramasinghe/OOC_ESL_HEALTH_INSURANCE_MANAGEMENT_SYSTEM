#pragma once
#include<string>
class HealthPlan
{
private:
	unsigned int planID;
	std::string planName;
	std::string planDescription;
	unsigned int planPrice;

public:
	HealthPlan();
	HealthPlan(unsigned int p_planID , std::string p_planName , std::string p_planDescription , unsigned int p_planPrice);
	void displayHealthPlan();
	void setPlanID(unsigned int p_planID);
	void setPlanName(std::string p_planName);
	void setPlanDescription(std::string p_planDescription);
	void setPlanPrice(unsigned int p_planPrice);
	unsigned int getPlanID();
	std::string getPlanName();
	std::string getPlanDescription();
	unsigned int getPlanPrice();
};

