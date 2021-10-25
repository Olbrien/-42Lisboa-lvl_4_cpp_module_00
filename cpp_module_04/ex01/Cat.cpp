#include "Cat.hpp"

  /******************/
 /*  Constructors  */
/******************/

Cat::Cat() {
	std::cout << "Cat Default Constructor Called" << std::endl;
	type = "Cat";
	brain = new Brain();
	return ;
}

Cat::Cat(Cat const & obj) {
	*this = obj;
	return ;
}

  /****************/
 /*  Destructor  */
/****************/

Cat::~Cat() {
	std::cout << "Cat Destructor Called" << std::endl;
	delete brain;
	return ;
}

  /**********************/
 /*  Member Functions  */
/**********************/

void Cat::makeSound() const {
	std::cout << "~meowwwwww meowwww~" << std::endl;
	return ;
}

  /**************************/
 /*  Operator Overloading  */
/**************************/

Cat & Cat::operator=(Cat const & obj) {
	(void)obj;
	return *this;
}
