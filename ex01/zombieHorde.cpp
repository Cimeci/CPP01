/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inowak-- <inowak--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 13:51:23 by inowak--          #+#    #+#             */
/*   Updated: 2025/03/07 14:13:35 by inowak--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ){
    
    Zombie *Zombies = new Zombie[N];

    
    for (int i = 0; i < N; i++){
        Zombies[i].setname(name);
    }
    return (Zombies);
}