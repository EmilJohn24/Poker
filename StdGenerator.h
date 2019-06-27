#ifndef STD_GENERATOR_H
#define STD_GENERATOR_H
#include "Generator.h"
#include "card.h"

class StandardDeckGenerator : public Generator{
	public:
		Card& generateCard() override;
		void update() override;
		bool isDone() override;
	protected:
		void setCurrNum(int newCurrNum) {_currNum = newCurrNum};

	private:
		Card::card_num _currNum;
		Card::Suit _currSuit;
		
}

#endif
