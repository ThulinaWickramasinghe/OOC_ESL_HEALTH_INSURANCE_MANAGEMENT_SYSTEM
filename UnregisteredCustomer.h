#pragma once
#include "Customer.h"


class UnregisteredCustomer :
    public Customer
{
public:
    void registerForInsurance(std::string CustomerName, std::string password, std::string p_name, std::string p_address, std::string p_email, std::string p_phoneNumber);
    ~UnregisteredCustomer();
};
