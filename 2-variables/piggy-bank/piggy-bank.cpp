#include <iostream>

int main() {

	double pesos;
	double reais;
	double soles;

	std::cout << "Enter number of Colombian Pesos: ";
	std::cin >> pesos;

	std::cout << "Enter number of Brazilian Reais: ";
	std::cin >> reais;

	std::cout << "Enter number of Peruvian Soles: ";
	std::cin >> soles;

	double dollars = (0.054 * pesos) + (0.19 * reais) + (0.27 * soles);
	std::cout << "US Dollar = $" << dollars;

}