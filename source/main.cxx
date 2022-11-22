#include "engine.h"

int main(int argc, char *argv[]) {
    Engine* pe = new Engine();
    pe->luanchGame();
    delete pe;
    return 0;
}