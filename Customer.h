#include<string>

#ifndef Customer_H
#define Customer_H


class Customer
{
protected:
	std::string name;
	std::string address;
	std::string email;
	std::string phoneNumber;
public:
	Customer();
	Customer(std::string p_name, std::string p_address, std::string p_email, std::string p_phoneNumber);
	void searchHelathPlans(int p_age);
	int requestAwarenessSession(int p_day, char p_time);
	~Customer();
};


#endif // !Customer_H