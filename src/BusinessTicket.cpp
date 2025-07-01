#include "BusinessTicket.hpp"
#include <stdio.h>

BusinessTicket::BusinessTicket() {
	price = 60;
	comfortLevel = "Extra";
	maxBaggageWeight = 30;
	services = "Premium meals";
}

int BusinessTicket::getPrice() {
	return price;
}

std::string BusinessTicket::getComfortLevel() {
	return comfortLevel;
}

int BusinessTicket::getMaxBaggageWeight() {
	return maxBaggageWeight;
}

std::string BusinessTicket::getServices() {
	return services;
}

void BusinessTicket::printDetails() {
	printf("- Business Ticket ($%d) -\n+ %s comfort\n+ %dkg baggage\n+ %s\n", price, comfortLevel.c_str(), maxBaggageWeight, services.c_str());
}