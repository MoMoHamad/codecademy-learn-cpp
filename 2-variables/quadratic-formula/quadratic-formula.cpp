#include <iostream>
#include <cmath>

int main() {

	double a;
	double b;
	double c;

	// Input variables
	std::cout << "Enter a:" << "\n";
	std::cin >> a;

	std::cout << "Enter b:" << "\n";
	std::cin >> b;

	std::cout << "Enter c:" << "\n";
	std::cin >> c;

	// formula 
	double root1 = (-b + std::sqrt(b * b - 4 * a * c)) / (2 * a);
	double root2 = (-b - std::sqrt(b * b - 4 * a * c)) / (2 * a);

	std::cout << "Root 1 is " << root1 << "\n";
	std::cout << "Root 2 is " << root2 << "\n";
}