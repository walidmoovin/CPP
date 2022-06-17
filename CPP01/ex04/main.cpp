/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbekkal <wbekkal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 13:24:17 by wbekkal           #+#    #+#             */
/*   Updated: 2022/06/16 14:45:30 by wbekkal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int argc, char **argv){
	if (argc != 4 || !argv[1])
		return 0;	
	std::string newfilename(argv[1]);
	std::string init_word(argv[2]);
	std::string replaceword(argv[3]);
	std::ifstream ini_file(argv[1]);
	std::ofstream newfile;
	std::string line;
	
	if (ini_file){
		newfile.open(newfilename.append(".replace"));
		while(getline(ini_file, line)){
			int pos = line.find(argv[2]);
			if (pos != -1){
				for (int i = 0; i < line.length(); i++){
					if (i == pos){
						for (int x = 0; x < replaceword.length(); x++){
							if (x < init_word.length())
								line[i] = argv[3][x];
							else
								line.insert(i, 1, argv[3][x]);
							i++;
						}
					}
				}
			}
			newfile << line << std::endl;
		}
	}
	else
		std::cout << "error" << std::endl;
	ini_file.close();
	newfile.close();
	return 0;
}