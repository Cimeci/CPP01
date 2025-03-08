/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inowak-- <inowak--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 10:07:41 by inowak--          #+#    #+#             */
/*   Updated: 2025/03/08 10:35:57 by inowak--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name){
	this->name = name;
}

void HumanB::setWeapon(Weapon &weapon){
	this->weapon = &weapon;
}

void HumanB::attack() {
    if (weapon)
        std::cout << RED << name << RESET << " attacks with their " << RED << weapon->getType() << RESET << std::endl;

    else
        std::cout << name << " has no weapon to attack with!" << std::endl;
}