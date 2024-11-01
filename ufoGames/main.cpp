#include <iostream>
#include <vector>
#include "ufo_functions.h"

int main(){
    // intiliazie and declare two new string for user input
    greet();
    std::string codeword="codecademy", answer="__________";
    int misses = 0;

    // this variable will be useful to store information about the incorrect player guesses and asnwer
    std::vector <char> incorrect;
    bool guess = false;

    //asking user input about their answer
    char letter;

    while (misses < 7 && answer != codeword){
        
        
        display_misses(misses);
        display_status(answer, incorrect);

        std::cout << "\n\nPlease enter your guess: \n";
        std::cin >> letter;

        for (int i = 0; codeword.length() > i; i++){
            if (letter == codeword[i]){
                answer[i] = letter;
                guess = true;
            }
        }
        if (guess == true){
            std::cout << "\nCorrect";}
        else{
            std::cout << "\nIncorrect! The tractor beam pulls the person in further.";
            incorrect.push_back(letter);
            misses++;
        }
        guess = false;
        end_game(answer, codeword);
        }
        
        
    

    
    return 0;
}