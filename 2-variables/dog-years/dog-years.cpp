#include <iostream>

int main() {


	int dog_age = 6;

	// The first two years of a dog�s life count as 21 human years
	int early_years = 21;

	// Each following year counts as 4 human years.
	int later_years = (dog_age - 2) * 4;

	// calculating the human years
	int human_years = early_years + later_years;

	std::cout << "My name is wolf! Ruff ruff, I am " << human_years << " years old in human years.";

}