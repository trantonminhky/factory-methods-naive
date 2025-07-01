#include "EconomyTicket.hpp"
#include "BusinessTicket.hpp"
#include "FirstClassTicket.hpp"
#include <iostream>

int main() {
	int option;
	std::cout << "Choose ticket type (1 - Economy, 2 - Business, 3 - First Class): ";
	std::cin >> option;

	if (option == 1) {
		EconomyTicket* ticket = new EconomyTicket();
		ticket->printDetails();
		delete ticket;
	} else if (option == 2) {
		BusinessTicket* ticket = new BusinessTicket();
		ticket->printDetails();
		delete ticket;
	} else if (option == 3) {
		FirstClassTicket* ticket = new FirstClassTicket();
		ticket->printDetails();
		delete ticket;
	} else {
		std::cout << "Invalid choice.";
	}

	return 0;
}