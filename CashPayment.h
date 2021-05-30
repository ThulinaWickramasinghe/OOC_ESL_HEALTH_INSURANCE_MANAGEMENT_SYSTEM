#pragma once
#include "Payment.h"

class CashPayment :
    public Payment
{
private:
    const unsigned int cash;//in cents
    const unsigned int change;//in cents
    unsigned int calculateChange() const;//in cents

public:
    CashPayment(unsigned int p_cash ,unsigned int p_receiptNumber, std::string p_date, unsigned int p_amount, std::string p_payerCustomerID, std::string p_paymentDescription);
    unsigned int getCashAmount() const;
    unsigned int getChangeAmount() const;
    void displayCashPaymentDetailsForCustomer() const;
    void displayPaymentDetailsForCustomer() const;
};

