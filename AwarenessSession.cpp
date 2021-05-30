#include "AwarenessSession.h"
#include<iostream>

using namespace std;

AwarenessSession::AwarenessSession(string p_sessionID, string p_sessionDate, string p_sessionStartTime, string p_sessionHandlerID , string p_participantCustomer)
:sessionID(p_sessionID) , sessionDate(p_sessionDate) , sessionStartTime(p_sessionStartTime) , sessionHandlerID(p_sessionHandlerID) , participantCustomer(p_participantCustomer)
{
}

void AwarenessSession::changeSessionDate(std::string p_sessionDate)
{
	sessionDate = p_sessionDate;
}

void AwarenessSession::changeParticipantCustomer(string p_participantCustomer)
{
	participantCustomer = p_participantCustomer;
}

void AwarenessSession::changeSessionStartTime(std::string p_sessionStartTime)
{
	sessionStartTime = p_sessionStartTime;
}

void AwarenessSession::changeSessionHandlerID(std::string p_sessionHandlerID)
{
	sessionHandlerID = p_sessionHandlerID;
}

string AwarenessSession::getSessionID() const
{
	return sessionID;
}

string AwarenessSession::getSessionDate() const
{
	return sessionDate;
}

std::string AwarenessSession::getSessionStartTime() const
{
	return sessionStartTime;
}

std::string AwarenessSession::getSessionHandlerID() const
{
	return sessionHandlerID;
}

void AwarenessSession::displaySessionDetailsForOfficialUse() const
{
	cout << "*******************************************************************" << endl;
	cout << "\tSession ID          :  " << sessionID << endl;
	cout << "\tSession Date        :  " << sessionDate << endl;
	cout << "\tSession Start Time  :  " << sessionStartTime << endl;
	cout << "\tSession Handler ID  :  " << sessionHandlerID << endl;
	cout << "*******************************************************************" << endl;
}
