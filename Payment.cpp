#include "Payment.h"

Payment::Payment(unsigned int p_receiptNumber, std::string p_date, unsigned int p_amount, std::string p_payerCustomerID ,std::string p_paymentDescription)
	:receiptNumber(p_receiptNumber) , date(p_date) , amount(p_amount) , paymentDescription(p_paymentDescription) , payerCustomerID(p_payerCustomerID)
{
}

unsigned int Payment::getReceiptNumber() const
{
	return receiptNumber;
}

std::string Payment::getPaymentDate() const
{
	return date;
}

unsigned int Payment::getPaymentAmount() const
{
	return amount;//amount is returned in cents
}

std::string Payment::getPaymentDescription() const
{
	return paymentDescription;
}


std::string Payment::getPayerCustomerID() const
{
	return payerCustomerID;
}