#include "stockpile.h"

int main() {
	std::map<std::string, int> options;
	options["quit"] = 1;
	options["help"] = 2;
	options["add"] = 3;
	options["del"] = 4;
	std::cout << "Stockpile manager active, What do you want to do?" << std::endl;
	int quit_flag = 0;
	std::string command;

	while (true)
	{

		std::cin >> command;

		switch (options[command]) {
		case(0): {
			std::cout << "I don't understand. Type \"help\" if you want help." << std::endl;
			break;
		}
			   //quit
		case (1): {
			std::cout << "quit" << std::endl;
			quit_flag = 1;
			break;
		}	//help
		case (2): {
			std::cout << "help" << std::endl;
			break;
		}
				//add
		case (3): {
			std::cout << "add" << std::endl;
			break;
		}
				//delete
		case (4): {
			std::cout << "remove" << std::endl;
			break;
		}
		default: {
			std::cout << "I don't understand. Type \"help\" if you want help." << std::endl;
			break;
		}
		}
		if (quit_flag == 1) { break; }
	}

	return 0;
}


