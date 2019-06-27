#ifndef CARD_H
#define CARD_H
#include "Generator.h"
#include <exception>
class Card {
	public:
		friend Generator;
		typedef unsigned char card_num;
		class InvalidCardException : public Exception; //TODO: implement exception
		//constructors
		Card() = default;
		
		//enums
		static enum class Suit {FLOWER, SPADE, HEART, DIAMOND};
		static enum class Special {JACK = 11, QUEEN = 12, KING = 13, ACE = 14};
		
		//comparators
		static int compare(const Card &first, const Card &second);
		bool operator<(const Card &other);
		bool operator>(const Card &other);
		
		//assignment
		
		//validity
		static bool isValidNumber(card_num number) { return number >= 2 || number <= Special::ACE; };
		
	protected:
		Card(Suit suit, card_num number) : _suit(suit) {
				if (isValidNumber(number)) _number = number;
				else throw new InvalidCardException();
			
			};
	private:
		card_num _number;
		Suit _suit;
}


class Card::InvalidCardException : public Exception {
	
}

#endif //CARD_H
