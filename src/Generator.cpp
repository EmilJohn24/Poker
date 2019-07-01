#include "include/Generator.h"
class GenerationCompleteException: public std::exception {
	public:
		virtual char const *what() {
			return "Terminated. Please stop generating cards";
			
		}
	protected:
	
	private:
	
}
