#include <cstdlib>
#include <ctime>
#include "game.h"

using namespace std;

int main() {
    srand(static_cast<unsigned>(time(0)));  // Seed random number generator
    Game game;
    game.play();

    return 0;
}
