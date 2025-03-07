/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inowak-- <inowak--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 13:52:09 by inowak--          #+#    #+#             */
/*   Updated: 2025/03/07 14:46:55 by inowak--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string msg = "HI THIS IS BRAIN";
	std::string *stringPTR = &msg;
	std::string &stringREF = msg;

	std::cout << "----- adress -----" << std::endl;

	std::cout << &msg << std::endl;
	std::cout << &stringPTR << std::endl;
	std::cout << &stringREF << std::endl;

	std::cout << "----- value -----" << std::endl;

	std::cout << msg << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;
}