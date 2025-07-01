#include "EconomyTicket.hpp"

EconomyTicket::EconomyTicket() {
	price = 30;
	comfortLevel = "Basic";
	maxBaggageWeight = 20;
	services = "Standard meals";
}

int EconomyTicket::getPrice() {
	return price;
}

std::string EconomyTicket::getComfortLevel() {
	return comfortLevel;
}

int EconomyTicket::getMaxBaggageWeight() {
	return maxBaggageWeight;
}

std::string EconomyTicket::getServices() {
	return services;
}

void EconomyTicket::printDetails() {
	printf("- Economy Ticket ($%d) -\n+ %s comfort\n+ %dkg baggage\n+ %s\n", price, comfortLevel.c_str(), maxBaggageWeight, services.c_str());
}