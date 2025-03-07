/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inowak-- <inowak--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 11:15:48 by inowak--          #+#    #+#             */
/*   Updated: 2025/03/07 13:34:09 by inowak--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    Zombie::setname(std::string name){
    this->name = name;
}

Zombie* newZombie( std::string name ){
    Zombie *newZombie;
    
    newZombie = new Zombie;
    newZombie->setname(name);
    return (newZombie);
}