/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inowak-- <inowak--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 09:51:56 by inowak--          #+#    #+#             */
/*   Updated: 2025/03/08 10:34:10 by inowak--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() : type("default"){}

Weapon::Weapon(std::string type) : type(type) {}

std::string Weapon::getType(void){
    return (type);
}

void Weapon::setType(std::string type){
    this->type = type;
}

Weapon::~Weapon(){}