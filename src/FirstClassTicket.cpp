#include "FirstClassTicket.hpp"

FirstClassTicket::FirstClassTicket() {
	price = 100;
	comfortLevel = "Luxury";
	maxBaggageWeight = 40;
	services = "Gourmet meals";
}

int FirstClassTicket::getPrice() {
	return price;
}

std::string FirstClassTicket::getComfortLevel() {
	return comfortLevel;
}

int FirstClassTicket::getMaxBaggageWeight() {
	return maxBaggageWeight;
}

std::string FirstClassTicket::getServices() {
	return services;
}

void FirstClassTicket::printDetails() {
	printf("- First Class Ticket ($%d) -\n+ %s comfort\n+ %dkg baggage\n+ %s\n", price, comfortLevel.c_str(), maxBaggageWeight, services.c_str());
}