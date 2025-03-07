/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inowak-- <inowak--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 10:51:16 by inowak--          #+#    #+#             */
/*   Updated: 2025/03/07 13:41:07 by inowak--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>


class Zombie
{
    private :
    std::string name;
    
    public :
    Zombie(void);
    ~Zombie(void);


    void announce(void);
    void setname(std::string name);
};

void randomChump( std::string name );
Zombie* newZombie( std::string name );

#endif