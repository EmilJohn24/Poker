#ifndef CARD_H
#define CARD_H

class Card {
	public:
		typedef unsigned char card_num;
		
		//constructors
		Card() = default;
		static enum class Suit {FLOWER, SPADE, HEART, DIAMOND};
		static enum class Special {JACK = 11, QUEEN = 12, KING = 13, ACE = 14};
		static int compare(const Card &first, const Card &second);
		bool operator<(const Card &other);
		bool operator>(const Card &other);
		
	protected:
		Card(Suit suit, card_num number) : _suit(suit), _number(number) {};
	private:
		card_num _number;
		Suit _suit;
}

#endif //CARD_H
