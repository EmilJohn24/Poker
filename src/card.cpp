#include "include/card.h"

class Card::InvalidCardException : public std::runtime_error {
	public:
	virtual char const *what() {
		return "Invalid card";		
	}
}
