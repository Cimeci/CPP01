/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inowak-- <inowak--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 13:52:09 by inowak--          #+#    #+#             */
/*   Updated: 2025/03/07 14:36:22 by inowak--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int N = 5;

	Zombie *hord = zombieHorde(N, "Zombies");

	for (int i = 0; i < N; i++){
		hord[i].announce();
	}
	delete[] hord;
}