/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inowak-- <inowak--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 14:53:20 by inowak--          #+#    #+#             */
/*   Updated: 2025/03/10 16:29:42 by inowak--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void){
	std::cout << RED << "[ DEBUG ]\n" << RESET << "lvl 0" << std::endl;
}

void Harl::info(void){
	std::cout << BLUE << "[ INFO ]\n" << RESET << "lvl 1" << std::endl;
}

void Harl::warning(void){
	std::cout << YELLOW << "[ WARNING ]\n" << RESET << "lvl 2" << std::endl;
}

void Harl::error(void){
	std::cout << PURPLE << "[ ERROR ]\n" << RESET << "lvl 3" << std::endl;
}

void Harl::complain(std::string level){

	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int lvl;

	for (lvl = 0; level != levels[lvl] && lvl < 4; lvl++){};
	
	switch(lvl){
		default:
			std::cout << "[ Probably complaining about insignificant problems ]\n";
		case 0:
			Harl::debug();
		case 1:
			Harl::info();
		case 2:
			Harl::warning();
		case 3:
			Harl::error();
	}
}