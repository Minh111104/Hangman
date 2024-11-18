#ifndef WORD_H
#define WORD_H
#include <string>
#include <vector>
#include <algorithm>
#include "hangman_words.h"

using namespace std;

class Word {
private:
    string target_word;
    vector<char> display;

public:
    Word() {
        target_word = word_list[rand() % word_list.size()];
        display = vector<char>(target_word.length(), '_');
    }

    const string& getTargetWord() const { return target_word; }

    void revealLetter(char guess) {
        for (size_t i = 0; i < target_word.size(); ++i) {
            if (target_word[i] == guess) {
                display[i] = guess;
            }
        }
    }

    bool isGuessed(char guess) const {
        return find(display.begin(), display.end(), guess) != display.end();
    }

    bool isComplete() const {
        return find(display.begin(), display.end(), '_') == display.end();
    }

    bool checkGuess(char guess) const {
        return target_word.find(guess) != string::npos;
    }

    string getDisplayString() const {
        string display_str;
        
        for (char c : display) {
            display_str += c;
            display_str += " ";
        }
        return display_str;
    }
};

#endif // WORD_H
