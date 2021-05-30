#pragma once
#include<string>
class AwarenessSession
{
private:
	std::string sessionID;
	std::string sessionDate;
	std::string sessionStartTime;//24 hour format (HH:MM) - ends in 30 minutes
	std::string sessionHandlerID;
	std::string participantCustomerID;
public:
	AwarenessSession(std::string p_sessionID, std::string p_sessionDate, std::string p_sessionStartTime, std::string p_sessionHandlerID , std::string p_participantCustomer);
	void changeSessionDate(std::string p_sessionDate);
	void changeSessionStartTime(std::string p_sessionStartTime);
	void changeSessionHandlerID(std::string p_sessionHandlerID);
	void changeParticipantCustomerID(std::string p_participantCustomer);
	std::string getSessionID() const;
	std::string getSessionDate() const;
	std::string getSessionStartTime() const;
	std::string getSessionHandlerID() const;
	std::string getSessionParticipantCustomer() const;
	void displaySessionDetailsForOfficialUse() const;
	void displaySessionDetailsForCustomer() const;
};
