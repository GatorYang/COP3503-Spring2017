#include <iostream>
#include <fstream>

const std::string FILENAME_INPUT = "input-example.txt";

// how to pass to func.
void passToFunc(std::ifstream &file) {

}

int main() {
	std::ifstream file( FILENAME_INPUT.c_str() );
	int bestNum = 0;
	std::string name1;
	double bestDouble = 0;
	std::string name2;

	// works just like cin!
	file >> bestNum;
	std::cout << "bestNum: " << bestNum << std::endl;
	file >> name1;
	std::cout << "name1: " << name1 << std::endl;

	file.close();
	return 0;
}
