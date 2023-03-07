#include <iostream>
#include <iomanip>

int main() {

	std::cout << std::setfill('-') << std::setw(33) << std::left << "\n-Identity Matrix" << std::endl;
	int size{ 0 };
	std::cout << std::setw(33) << std::left << "Please enter an integer:" << std::endl;
	std::cin >> size;
	std::cout << std::endl;
	for (int i{ 0 }; i < size; ++i) {
		for (int j{ 0 }; j < size; ++j) {
			if (j == i) {
				std::cout << "1 ";
			}
			else {
				std::cout << "0 ";
			}
		}
		std::cout << std::endl;
	}
	std::cout << std::setfill('-') << std::setw(33) << std::left << "\n-Reversed Identity Matrix" << std::endl;
	int size_1{ 0 };
	std::cout << std::setw(33) << std::left << "Please enter an integer:" << std::endl;
	std::cin >> size_1;
	std::cout << std::endl;
	for (int i{ 0 }; i < size_1; ++i) {
		for (int j{ 0 }; j < size_1; ++j) {
			if (j + i + 1 == size_1) {
				std::cout << "1 ";
			}
			else {
				std::cout << "0 ";
			}
		}
		std::cout << std::endl;
	}
	return 0;
}