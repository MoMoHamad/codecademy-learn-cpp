#include <iostream>
#include <stdlib.h>

int main() {

    //randomise seed
    srand(time(NULL));

    // computer input
    int computer = rand() % 3 + 1;

    // user input 
    int user;

    // prompt player to begin
    std::cout << "Lets play Rock, Paper, Scissors! \n";
    std::cout << "1) Rock \n";
    std::cout << "2) Paper \n";
    std::cout << "3) Scissors \n";

    std::cin >> user;

    if (user == 1 && computer == 1)
    {
        std::cout << "Player chose: Rock!";
        std::cout << "Computer chose: Rock!";
        std::cout << "Outcome: Draw!";
    }
    else if (user == 1 && computer == 2)
    {
        std::cout << "Player chose: Rock!";
        std::cout << "Computer chose: Paper!";
        std::cout << "Outcome: Computer Win!";
    }
    else if (user == 1 && computer == 3)
    {
        std::cout << "Player chose: Rock!";
        std::cout << "Computer chose: Scissors!";
        std::cout << "Outcome: Player Win!";
    }
    else if (user == 2 && computer == 1)
    {
        std::cout << "Player chose: Paper!";
        std::cout << "Computer chose: Rock!";
        std::cout << "Outcome: Player Win!";
    }
    else if (user == 2 && computer == 2)
    {
        std::cout << "Player chose: Paper!";
        std::cout << "Computer chose: Paper!";
        std::cout << "Outcome: Draw!";
    }
    else if (user == 2 && computer == 3)
    {
        std::cout << "Player chose: Paper!";
        std::cout << "Computer chose: Scissors!";
        std::cout << "Outcome: Computer Win!";
    }
    else if (user == 3 && computer == 1)
    {
        std::cout << "Player chose: Scissors!";
        std::cout << "Computer chose: Rock!";
        std::cout << "Outcome: Computer Win!";
    }
    else if (user == 3 && computer == 2)
    {
        std::cout << "Player chose: Scissors!";
        std::cout << "Computer chose: Paper!";
        std::cout << "Outcome: Player Win!";
    }
    else if (user == 3 && computer == 3)
    {
        std::cout << "Player chose: Scissors!";
        std::cout << "Computer chose: Scissors!";
        std::cout << "Outcome: Draw!";
    }


}