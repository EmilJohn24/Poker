#ifndef GENERATOR_H
#define GENERATOR_H
#include <vector>
class Generator {
	//abstract card generation class
	public:
		typedef vector<Card> Pile;
		Generator() = default;
		virtual Card& generateCard() = 0; //method for spitting out new cards
		Pile generatePile(int amount) = 0;
		virtual bool isDone() = 0;
		virtual void update() = 0; //method for updating internal components

}

#endif
