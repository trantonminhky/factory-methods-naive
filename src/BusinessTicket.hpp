#pragma once
#include <string>

class BusinessTicket {
public:
	BusinessTicket();

	int getPrice();
	std::string getComfortLevel();
	int getMaxBaggageWeight();
	std::string getServices();

	void printDetails();

private:
	int price;
	std::string comfortLevel;
	int maxBaggageWeight;
	std::string services;
};