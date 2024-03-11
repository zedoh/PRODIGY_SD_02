#include <iostream>
#include <cstdlib> 
#include <ctime> 
#include <iostream>


int main() {
    srand(time(0));
    
    // Generate a random number between 1 and 100
    int randomNumber = rand() % 100 + 1;
    int guess = 0;
    int attempts = 0;
    
    std::cout << "I have chosen a number between 1 and 100. Can you guess it?" << std::endl;
    
    do {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        attempts++;
        if(guess > 100 || guess < 1){
            std::cerr<<"\n Your guess is not within the range, please try again!!\n" ; 
            --attempts;
            continue;
        }        
        if (guess < randomNumber) {
            std::cout << "Too low! Try again." << std::endl;
        } else if (guess > randomNumber) {
            std::cout << "Too high! Try again." << std::endl;
        } else {
            std::cout << "Congratulations! You've guessed the number in " << attempts << " attempts!" << std::endl;
        }
    } while (guess != randomNumber);
    
    return 0;
}
