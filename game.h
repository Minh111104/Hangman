#ifndef GAME_H
#define GAME_H
#include <iostream>
#include "player.h"
#include "word.h"
#include "hangman_art.h"

using namespace std;

class Game {
private:
    Player player;
    Word word;

public:
    Game() : player(6), word() {
        cout << logo << "\n";
        cout << "Pssst, the solution is " << word.getTargetWord() << ".\n";
    }

    void play() {
        while (player.isAlive() && !word.isComplete()) {
            char guess;
            cout << "Guess a letter: ";
            cin >> guess;
            guess = tolower(guess);

            if (word.isGuessed(guess)) {
                cout << "You've already guessed " << guess << "\n";
                continue;
            }

            if (word.checkGuess(guess)) {
                word.revealLetter(guess);
            } else {
                cout << "You guessed " << guess << ", that's not in the word. You lose a life.\n";
                player.loseLife();
            }

            cout << "\nCurrent word: " << word.getDisplayString() << "\n";
            cout << stages[player.getLives()] << "\n";
        }

        if (word.isComplete()) {
            cout << "Congratulations! You've won!\n";
        } else {
            cout << "You lost! The word was: " << word.getTargetWord() << "\n";
        }
    }
};

#endif // GAME_H
