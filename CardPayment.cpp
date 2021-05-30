#include "CardPayment.h"
#include<iostream>
#include<iomanip>
using namespace std;

CardPayment::CardPayment(unsigned int p_cardType, std::string p_cardNumber, std::string p_cardHolderName, string p_expirydate, unsigned int p_discount, unsigned int p_receiptNumber, string p_date, unsigned int p_amount, string p_payerCustomerID,string p_paymentDescription)
:Payment(p_receiptNumber,p_date, p_amount, p_payerCustomerID,p_paymentDescription),cardType(p_cardType),cardNumber(p_cardNumber) , cardHolderName(p_cardHolderName), expiryDate(p_expirydate) , discount(p_discount) , finalAmount(calculateFinalAmount())
{
}

unsigned int CardPayment::getCardType() const
{
	return cardType;
}

std::string CardPayment::getCardHolderName() const
{
	return cardHolderName;
}

std::string CardPayment::getExpiryDate() const
{
	return expiryDate;
}

unsigned int CardPayment::getDiscount() const
{
	return discount;
}

unsigned int CardPayment::calculateFinalAmount() const
{
	return amount* (1 - discount);//amount is returned in cents
}

int CardPayment::getFinalAmount() const
{
	return finalAmount;
}

void CardPayment::displayPaymentDetailsForCustomer() const
{

	cout << "*******************************************************************" << endl;
	cout << "\tPayment Description :  " << paymentDescription << endl;
	cout << "\tAmount              :  Rs." << amount/100 << setw(2)<<amount%100<<endl;
	cout << "\tDiscount            :  " << discount * 100<<"%" << endl;
	cout << "\tFinal Amount        :  Rs." << getFinalAmount() /100 << setw(2) << getFinalAmount() % 100 << endl;
	cout << "*******************************************************************" << endl;
}

void CardPayment::displayPaymentForOfficialUse() const
{
	cout << "*******************************************************************" << endl;
	cout << "\tReceipt Number      : " << receiptNumber << endl;
	cout << "\tCustomer ID         : " << payerCustomerID << endl;
	cout << "\tPayment Description : " << paymentDescription << endl;
	cout << "\tCardholder's name   : " << cardHolderName << endl;
	cout << "\tCard type           : " << (1 == cardType?"Master Card":"VISA Card") << endl;
	cout << "\tCard Number         : " << cardNumber << endl;
	cout << "\tExpiry Date         : " << expiryDate << endl;
	cout << "--------------------------------------------------------------------" <<endl;
	cout << "\tAmount              : Rs. " << amount/100 << setw(2) << amount % 100 << endl;
	cout << "\tDiscount            : " << discount * 100 << "%" << endl;
	cout << "\tFinal Amount        : Rs. " << getFinalAmount() /100 << setw(2) << getFinalAmount() % 100 << endl;
	cout << "*******************************************************************" << endl;
}
