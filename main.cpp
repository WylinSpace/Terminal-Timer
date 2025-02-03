#include "files/main.hpp"

int main() {
    cout << MOVE_CURSOR(1, 0) << CLEAR_SCREEN;
    cout << BOLD << YELLOW << "TIMER" << RESET << endl;
    Timer timer;
    timer.time_interface();
}