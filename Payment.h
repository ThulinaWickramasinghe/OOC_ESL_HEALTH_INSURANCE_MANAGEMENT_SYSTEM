#pragma once
#include<string>
class Payment
{
protected:
	const unsigned int receiptNumber;
	const std::string date;
	const unsigned int amount; //amount in cents
	const std::string paymentDescription;
	std::string payerCustomerID;

public:
	Payment(unsigned int p_receiptNumber , std::string p_date , unsigned int p_amount , std::string p_payerCusstomerID, std::string p_paymentDescription);
	unsigned int getReceiptNumber() const;
	std::string getPaymentDate() const;
	unsigned int getPaymentAmount() const;
	std::string getPaymentDescription() const;
	std::string getPayerCustomerID() const;
};

