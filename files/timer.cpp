#ifndef TIMER_CPP
#define TIMER_CPP

#include "main.hpp"

class Timer {
private:
    int time_left = -1;
    int hours = 0;
    int minutes = 0;
    int seconds = 0;

    float second_input;
    float minute_input;
    float hour_input;

public:
    void time_interface() {
        cout<< CYAN << "Enter the type of Time Input > "<<endl;
        cout<< CYAN <<  "1 - In Second" <<endl;
        cout<< CYAN <<  "2 - In Minute" <<endl;
        cout<< CYAN <<  "3 - In Hour" << RESET << MOVE_CURSOR(2,32);
        int operation_number;
        cin >> operation_number;

        cout << MOVE_CURSOR(2, 0) << CLEAR_TO_END;
        if (operation_number == 1) {
            time_input_second();
        } else if (operation_number == 2) {
            time_input_minute();
        } else if (operation_number == 3) {
            time_input_hour();
        }
        
        cout << MOVE_CURSOR(2, 0) << CLEAR_TO_END;
        cout << "Current Time Left > ";
        time_deduction();
    }

    void time_deduction() {
        cout << HIDE_CURSOR;
        while (time_left >= 0) {
            hours = time_left / 3600;
            minutes = (time_left % 3600) / 60;
            seconds = time_left % 60;

            cout << "\r" << GREEN << "Time Left: " << RESET;
            cout << (hours < 10 ? "0" : "") << hours << ":";
            cout << (minutes < 10 ? "0" : "") << minutes << ":";
            cout << (seconds < 10 ? "0" : "") << seconds << "   " << flush;

            this_thread::sleep_for(chrono::seconds(1));
            time_left--;
        }
        end_of_time();
        cout << HIDE_CURSOR;
    }

    void end_of_time() {
         cout << MOVE_CURSOR(2,0) << CLEAR_TO_END << GREEN << "The Time had FINISHED!" << RESET << endl;
    }

    void time_input_second() {
        cout << CYAN << "Enter the time (In Seconds) > " << RESET;
        cin >> second_input;
        time_left = static_cast<int>(second_input);
    }
    void time_input_minute() {
        cout << CYAN << "Enter the time (In Minutes) > " << RESET;
        cin >> minute_input;
        time_left = static_cast<int>(minute_input * 60);
    }
    void time_input_hour() {
        cout << CYAN << "Enter the time (In Hours) > " << RESET;
        cin >> hour_input;
        time_left = static_cast<int>(hour_input * 3600);
    }
};



#endif