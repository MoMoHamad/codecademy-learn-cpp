#include <iostream>
#include <string>

int main() {

    int gryffindor = 0;
    int hufflepuff = 0;
    int ravenclaw = 0;
    int slytherin = 0;

    int answer1 = 0;
    int answer2 = 0;
    int answer3 = 0;
    int answer4 = 0;

    std::cout << "The Sorting Hat Quiz!" << "\n";

    std::cout << "Q1) When I'm dead, I want people to rmember me as:" << "\n";
    std::cout << "1) The Good" << "\n";
    std::cout << "2) The Great" << "\n";
    std::cout << "3) The Wise" << "\n";
    std::cout << "4) The Bold" << "\n";

    std::cin >> answer1;

    switch (answer1) {
    case 1:
        hufflepuff += 1;
        break;
    case 2:
        slytherin += 1;
        break;
    case 3:
        ravenclaw += 1;
        break;
    case 4:
        gryffindor += 1;
        break;
    default:
        std::cout << "Invalid Output" << "\n";
    }

    std::cout << "Q2) Dawn or Dusk?" << "\n";
    std::cout << "1) Dawn" << "\n";
    std::cout << "2) Dusk" << "\n";

    std::cin >> answer2;

    switch (answer2) {
    case 1:
        gryffindor += 1;
        ravenclaw += 1;
        break;
    case 2:
        hufflepuff += 1;
        slytherin += 1;
        break;
    default:
        std::cout << "Invalid Output" << "\n";
    }

    std::cout << "Q3) Which kind of instrument most pleases your ear?" << "\n";
    std::cout << "1) The violin" << "\n";
    std::cout << "2) The trumpet" << "\n";
    std::cout << "3) The piano" << "\n";
    std::cout << "4) The drum" << "\n";

    std::cin >> answer3;

    switch (answer3) {
    case 1:
        slytherin += 1;
        break;
    case 2:
        hufflepuff += 1;
        break;
    case 3:
        ravenclaw += 1;
        break;
    case 4:
        gryffindor += 1;
        break;
    default:
        std::cout << "Invalid Output" << "\n";
    }

    std::cout << "Q4) Which road tempts you most?" << "\n";
    std::cout << "1) The Wide, sunny grassy lane" << "\n";
    std::cout << "2) The narrow, dark, lantern-lit alley" << "\n";
    std::cout << "3) The twisting, leaf-strewn path through woods" << "\n";
    std::cout << "4) The cobbled streed lined (ancient buildings)" << "\n";

    std::cin >> answer4;
    switch (answer4) {
    case 1:
        hufflepuff += 1;
        break;
    case 2:
        slytherin += 1;
        break;
    case 3:
        gryffindor += 1;
        break;
    case 4:
        ravenclaw += 1;
        break;
    default:
        std::cout << "Invalid Output" << "\n";
    }

    int max = 0;
    std::string house = "";

    if (gryffindor > max) {
        house = "Gryffindor";
    }
    if (hufflepuff > max) {
        house = "Hufflepuff";
    }
    if (ravenclaw > max) {
        house = "Ravenclaw";
    }
    if (slytherin > max)
    {
        house = "Slytherin";
    }

    std::cout << house << "!\n";

}