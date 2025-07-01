#pragma once
#include <string>

class FirstClassTicket {
public:
	FirstClassTicket();

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