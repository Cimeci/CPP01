/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inowak-- <inowak--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 13:52:09 by inowak--          #+#    #+#             */
/*   Updated: 2025/03/10 11:41:26 by inowak--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"		

int main(int argc, char **argv){
    Harl harl;
    std::string debug = "DEBUG";
    std::string info = "INFO";
    std::string warning = "WARNING";
    std::string error = "ERROR";

    if (argc != 2){
        std::cout << "./harl [lvl error msg]\n";
        return (1);
    }
    if (argv[1] == debug || argv[1] == info || argv[1] == warning || argv[1] == error)
        harl.complain(argv[1]);
    else
        std::cout << "[ Probably complaining about insignificant problems ]\n";
}