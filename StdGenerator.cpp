#include "StdGenerator.h"

Card &StandardDeckGenerator::generateCard(){
	update();
	if (isDone()) return 
	return Card(_currSuit, _currNum);
}

void StandardDeckGenerator::update(){
	if (_currNum < Card::Special::ACE) _currNum += 1;
	else {
		_currSuit++;
	} 
}

bool StandardDeckGenerator::isDone(){
	return _currNum == Card::Special::ACE && _currSuit == Card::Suit::DIAMOND
}
