#pragma once
#include "Payment.h"

class CardPayment :
    public Payment
{
private:
    unsigned int cardType;//1 for master cards 2 for visa cards
    std::string cardNumber;
    std::string cardHolderName;
    std::string expiryDate;
    unsigned int discount; // as a decimal
    unsigned int finalAmount;//after discount (in cents)
    unsigned int calculateFinalAmount() const;
    
public:
    CardPayment(unsigned int p_cardType, std::string p_cardNumber ,std::string p_cardHolderName,std::string p_expirydate, unsigned int p_discount , unsigned int p_receiptNumber, std::string p_date, unsigned int p_amount, std::string p_payerCustomerID, std::string p_paymentDescription);
    unsigned int getCardType() const;
    std::string getCardHolderName() const;
    std::string getExpiryDate() const;
    unsigned int getDiscount() const;
    void displayPaymentDetailsForCustomer() const;
    void displayPaymentForOfficialUse() const;
    int getFinalAmount() const;
    
};

