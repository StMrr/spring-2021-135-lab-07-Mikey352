#include <iostream>
#include <string>

#include "funcs.h"

int main() {
	std::string line;
	int counter = 0; //initializing variable to keep track of number of tabs
	while (std::getline(std::cin, line)){
		std::string answer;
		if (removeLeadingSpace(line)[0] == '}'){
			counter = counter - 1; //
		}
		for (int i = 0; i < counter; ++i){
			answer += '\t'; //tabs being added as necessary
		}
		answer += removeLeadingSpace(line); //adding line to string that previously had tabs added
		std::cout << answer << std::endl;
		counter += countChar(line, '{');
		if (removeLeadingSpace(line)[0] == '}'){
			counter++;
		}
		counter -= countChar(line, '}');
	}
}
