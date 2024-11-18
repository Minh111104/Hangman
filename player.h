#ifndef PLAYER_H
#define PLAYER_H

using namespace std;

class Player {
private:
    int lives;
public:
    Player(int initial_lives = 6) : lives(initial_lives) {}

    int getLives() const { return lives; }
    void loseLife() { lives--; }
    bool isAlive() const { return lives > 0; }
};

#endif // PLAYER_H
