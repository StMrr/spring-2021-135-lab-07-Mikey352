#include <iostream>
#include <string>

#include "funcs.h"

int main() {
	std::string line;
	int counter = 0;
	while (std::getline(std::cin, line)){
		std::string answer;
		if (removeLeadingSpace(line)[0] == '}'){
			counter = counter - 1;
		}
		for (int i = 0; i < counter; ++i){
			answer += '\t';
		}
		answer += removeLeadingSpace(line);
		std::cout << answer << std::endl;
		counter += countChar(line, '{');
		if (removeLeadingSpace(line)[0] == '}'){
			counter++;
		}
		counter -= countChar(line, '}');
	}
}
