#include <iostream>
#include <vector>
#include <string>

int main() {

    // word to be translated
    std::string word = "turpentine and turtles";

    // whale words
    std::vector<char> whale_word;

    // whales don't consider y a vowel
    std::vector<char> vowels = { 'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U' };

    // loop through word to translate
    for (int i = 0; i < word.size(); i++) {

        // loop through vowels
        for (int j = 0; j < vowels.size(); j++) {

            // Are we a vowel
            if (word[i] == vowels[j]) {

                whale_word.push_back(word[i]);
                // should we double?

                if (word[i] == 'e' || word[i] == 'E' || word[i] == 'u' || word[i] == 'U') {
                    whale_word.push_back(word[i]);
                }
            }
        }
    }


    for (int p = 0; p < whale_word.size(); p++) {

        std::cout << whale_word[p];

    }

    std::cout << "\n";
}