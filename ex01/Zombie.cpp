/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inowak-- <inowak--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 13:52:05 by inowak--          #+#    #+#             */
/*   Updated: 2025/03/07 14:04:16 by inowak--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) {
    std::cout << "Zombie construct" << std::endl;
}

void    Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}
Zombie::~Zombie(void) {
    std::cout << "Zombie " << name << " destroyed" << std::endl;
}

void    Zombie::setname( std::string name ){
    this->name = name;
}

Zombie* newZombie( std::string name ){
    Zombie *newZombie;
    
    newZombie = new Zombie;
    newZombie->setname(name);
    return (newZombie);
}