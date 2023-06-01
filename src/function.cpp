#include <iostream>
#include <string>

bool check_command(std::string comm){
	if (comm == "move" || comm == "resize" || comm == "display" || comm == "close") {
		return true;
	}
	else {
		return false;
	}
}