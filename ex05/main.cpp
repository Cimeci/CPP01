/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inowak-- <inowak--@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 13:52:09 by inowak--          #+#    #+#             */
/*   Updated: 2025/03/08 13:59:21 by inowak--         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"		

#include <iostream>
#include <string>

std::string customReplace(const std::string& str, const std::string& from, const std::string& to) {
    std::string result;
    size_t startPos = 0;
    size_t foundPos;

    // Tant qu'on trouve la sous-chaîne à remplacer
    while ((foundPos = str.find(from, startPos)) != std::string::npos) {
        // Ajouter la partie de la chaîne avant la sous-chaîne trouvée
        result.append(str, startPos, foundPos - startPos);
        // Ajouter la chaîne de remplacement
        result.append(to);
        // Mettre à jour la position de départ pour la prochaine recherche
        startPos = foundPos + from.length();
    }
    result.append(str, startPos, str.length() - startPos);

    return result;
}

int main(int argc, char **argv) {

	if (argc != 4)
		return (0);
	std::ifstream inputFile(argv[1]);
	if (!inputFile.is_open()) {
		std::cerr << "Error : open infile !" << std::endl;
		return 1;
	}

	std::string from = argv[2];
	std::string to = argv[3];
		
	std::ofstream replace;
		
	std::string filename(argv[1]);
    std::string filereplace = filename + ".replace";

	replace.open(filereplace.c_str(), std::ios::out);
    if (!replace.is_open()) {
        std::cerr << "Error : open outfile !" << std::endl;
        return 1;
    }

	std::string line;
	while (std::getline(inputFile, line)) {
		std::string replaceline = customReplace(line, from, to);
		replace << replaceline << std::endl;
	}

	inputFile.close();
	replace.close();
}
