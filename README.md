# Hangman

Welcome to the **Hangman Game**! This is a classic word-guessing game where the player attempts to guess a hidden word by suggesting letters within a limited number of attempts. The game provides visual feedback in the form of a Hangman figure that progressively completes with each incorrect guess. This project uses **CMake** to manage the build process.



## How to Play
1. **Objective**: Guess the hidden word one letter at a time before you run out of lives.
2. **Game Start**:
   - The game begins by displaying the Hangman logo and choosing a random word.
   - The word is represented as underscores (e.g., `_ _ _ _ _` for a five-letter word).
3. **Gameplay**:
   - Enter a single letter as your guess.
   - If the letter is in the word, it will be revealed in its correct position(s).
   - If the letter is not in the word, you lose one life, and the Hangman drawing progresses.
4. **Winning**: Reveal all the letters in the word before your lives run out.
5. **Losing**: If you run out of lives, the game ends, and the word is revealed.



## Code Structure
This game is implemented in C++ and follows a modular design using classes and header files for maintainability and scalability. Below is an overview of the source code:

### **Source Files**
- **`main.cpp`**: 
  - The entry point of the program.
  - Initializes the game and starts the gameplay loop.

- **`game.h`**: 
  - Contains the `Game` class, which manages the overall game flow.
  - Handles interactions between the player and the word, processes guesses, and updates the game state.

- **`player.h`**: 
  - Defines the `Player` class, responsible for tracking the player's remaining lives.
  - Provides methods to lose a life, check if the player is alive, and retrieve the number of lives.

- **`word.h`**: 
  - Implements the `Word` class, which manages the target word, tracks guessed letters, and updates the displayed word.
  - Handles functionality to check guesses, reveal letters, and determine if the word is complete.

- **`hangman_art.h`**: 
  - Contains the ASCII art stages of the Hangman figure.
  - Displays the current state of the Hangman based on the player's remaining lives.

- **`hangman_words.h`**: 
  - Stores a predefined list of words that the game randomly selects from.

### **Features**
- Random word selection.
- Feedback for guessed letters (correct, incorrect, or repeated).
- Progressive Hangman ASCII art display.
- Modular code for easy updates and extensions.



## Prerequisites
To compile and run the game, you need:
- A C++ compiler (CMake, GCC, Clang, etc.).
- A terminal or console to run the program.



## Compilation and Execution
1. Clone this repository to your local machine:
   ```bash
   git clone https://gitlab.com/your-username/hangman-game.git
    ```

2. Navigate to the project directory:
    ```bash
    cd hangman-game
    ```

3. Compile the game:
    ```bash
    g++ -o hangman main.cpp
    ```

4. Run the game:
    ```bash
    ./hangman
    ```



## Class Diagram
[Hangman Class Diagram](https://drive.google.com/file/d/1acmU82eLLuNCcjMW_sX_hvmA2uUfhlCM/view?usp=sharing)



## Contributions
Contributions are welcome! If you'd like to improve the game or add features, feel free to open a merge request.

## License
This project is licensed under the MIT License. See the `LICENSE` file for details.
