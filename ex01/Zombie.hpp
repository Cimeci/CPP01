/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inowak-- <inowak--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 13:56:09 by inowak--          #+#    #+#             */
/*   Updated: 2025/03/07 14:05:03 by inowak--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>


class Zombie{
  
    private:
        std::string name;
    public:
        Zombie(void);
        ~Zombie(void);

        void announce(void);
        void setname(std::string name);
};

Zombie* zombieHorde( int N, std::string name );
Zombie* newZombie( std::string name );

#endif