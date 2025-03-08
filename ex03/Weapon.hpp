#ifndef WEAPON_HPP
# define WEAPON_HPP

# define RED "\033[1;31m"
# define ORANGE "\033[38;5;214m"
# define YELLOW "\033[1;33m"
# define PURPLE "\033[1;35m"
# define BLUE   "\033[1;34m"
# define RESET "\033[0m"

# include <iostream>

class Weapon {

		private:
			std::string type;
		
		public:
			Weapon();
			Weapon(std::string type);
			~Weapon();
			std::string getType(void);
			void	setType(std::string type);
};

#endif