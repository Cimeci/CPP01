/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inowak-- <inowak--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 14:49:56 by inowak--          #+#    #+#             */
/*   Updated: 2025/03/10 15:12:51 by inowak--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

# define RED "\033[1;31m"
# define ORANGE "\033[38;5;214m"
# define YELLOW "\033[1;33m"
# define PURPLE "\033[1;35m"
# define BLUE   "\033[1;34m"
# define RESET "\033[0m"

class Harl{
  
	private :
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);

	public :
		void complain(std::string level);
};


#endif