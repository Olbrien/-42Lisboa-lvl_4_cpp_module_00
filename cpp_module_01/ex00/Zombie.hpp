#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie {
	public:
		Zombie(std::string zombieName);
		~Zombie();

		void announce(void) ;

	private:
		std::string _zombieName;
};

#endif
