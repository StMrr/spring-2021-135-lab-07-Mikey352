#include <iostream>
#include "funcs.h"
#include <string>
#include <cctype>
std::string removeLeadingSpace(std::string line) {
	std::string answer;
	bool condition = false;
	for (int i = 0; i < line.size(); ++i) {
		if (!isspace(line[i])) {
			condition = true;
		}
		if (condition) {
			answer += line[i];
		}
	}
	return answer;
}



