#include <iostream>
#include <cmath>

using namespace std;

void PlayGame();
bool WantToPlayAgain();
bool IsGameOver( int secretNumber, int numberOfTries, int guess);

int main() {

    do {
        PlayGame();
    } while (WantToPlayAgain());

    return 0;
}

void PlayGame(){

    const int UPPER_BOUND = 100;
    int secretNumber = 65;
    int numberOfTries = ceil(log2(UPPER_BOUND));
    int guess = 0;

    do {

    } while( !IsGameOver(secretNumber, numberOfTries, guess));
}

bool WantToPlayAgain(){

    // TODO implement
    return false;
}

bool IsGameOver(int secretNumber, int numberOfTries, int guess){

    return secretNumber == guess || numberOfTries <= 0;
}