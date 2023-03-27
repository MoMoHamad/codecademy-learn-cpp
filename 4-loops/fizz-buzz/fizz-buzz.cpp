#include <iostream>

int main() {

    for (int i = 1; i <= 100; i++) {
        // multiples of 3 print fizz
        if (i % 5 == 0 && i % 3 == 0) {
            std::cout << "Fizz Buzz!" << "\n";
        }
        // multiples of 5 print buzz 
        else if (i % 5 == 0)
        {
            std::cout << "Buzz!" << "\n";
        }
        // multiplles of both 3 and 5 print fizz buzz
        else if (i % 3 == 0)
        {
            std::cout << "Fizz!" << "\n";
        }
        else
        {
            std::cout << i << " !" << "\n";
        }

    }

}