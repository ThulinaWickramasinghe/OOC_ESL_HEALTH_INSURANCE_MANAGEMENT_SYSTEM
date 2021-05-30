#include "CashPayment.h"
#include<iostream>
#include<iomanip>

using namespace std;

CashPayment::CashPayment(unsigned int p_cash,unsigned int p_receiptNumber, string p_date, unsigned int p_amount, string p_payerCustomerID, string p_paymentDescription)
	:Payment(p_receiptNumber, p_date, p_amount, p_payerCustomerID, p_paymentDescription), cash(p_cash) , change(calculateChange())
{
}


unsigned int CashPayment::getCashAmount() const
{
	return cash;
}

unsigned int CashPayment::getChangeAmount() const
{
	return change;
}

unsigned int CashPayment::calculateChange() const
{
	return cash - amount;
}

void CashPayment::displayCashPaymentDetailsForCustomer() const
{
	cout << "*******************************************************************" << endl;
	cout << "\tPayment Description      :  " << paymentDescription << endl;
	cout << "\tAmount need to be paid   :  Rs. " << getPaymentAmount() / 100 << setw(2) << getPaymentAmount() % 100 << endl;
	cout << "\tCash paid                :  Rs. " << getCashAmount() / 100 << setw(2) << getCashAmount() % 100 << endl;
	cout << "\tChange                   :  Rs. " << getChangeAmount() / 100 << setw(2) << getChangeAmount() % 100 << endl;
	cout << "*******************************************************************" << endl;
}



void CashPayment::displayPaymentDetailsForCustomer() const
{
	cout << "*******************************************************************" << endl;
	cout << "\tReceipt Number      : " << receiptNumber << endl;
	cout << "\tCustomer ID         : " << payerCustomerID << endl;
	cout << "\tPayment Description : " << paymentDescription << endl;
	cout << "--------------------------------------------------------------------" << endl;
	cout << "\tAmount need to be paid   :  Rs. " << getPaymentAmount() / 100 << setw(2) << getPaymentAmount() % 100 << endl;
	cout << "\tCash paid                :  Rs. " << getCashAmount() / 100 << setw(2) << getCashAmount() % 100 << endl;
	cout << "\tChange                   :  Rs. " << getChangeAmount() / 100 << setw(2) << getChangeAmount() % 100 << endl;
	cout << "*******************************************************************" << endl;
}