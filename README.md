# Terminal Timer

## Claim
This project is builded by **LIEW WEN HAO**, all right reserved.

## Table of Contents

1. [Introduction](#introduction)
2. [Methodology](#methodology)
3. [Weaknesses](#weaknesses)
4. [Future Improvements](#future-improvements)
5. [Conclusion](#conclusion)

---

## Introduction

The Timer program is a simple countdown application designed to allow users to input a time duration in seconds, minutes, or hours. Once the duration is provided, the program counts down and displays the remaining time in the format `HH:MM:SS`. The timer is implemented with terminal control features such as cursor movement and hiding the cursor to enhance the user experience.

---

## Methodology

The program consists of a `Timer` class that handles the countdown logic. 

The main program prompts the user to choose the time unit for input: seconds, minutes, or hours. Based on the user’s selection, the corresponding time conversion is done to set the initial time for the countdown. 

The countdown is then displayed in real-time, updating every second, while hiding the cursor to keep the interface clean and focused on the countdown itself.

The countdown of the time is using the chrono format instead of direct input from the computer in real time. This added the complexity of the project and make it harder to be writen.

---

### Key Features:

- **User Input**: The program asks for the time duration in seconds, minutes, or hours.

- **Countdown**: The countdown logic calculates and displays the time left in a formatted way (`HH:MM:SS`).

- **Cursor Control**: During the countdown, the cursor is hidden for a smoother user experience.

- **Terminal Color and Style**: The use of terminal colors and text styles helps to highlight key information (e.g., time left, input prompts).

---

## Weaknesses

- **Limited User Interface**: The program relies on text-based terminal output, which can be limiting in terms of visual appeal and interactivity.

- **Error Handling**: The program does not handle invalid inputs or edge cases, such as entering non-numeric values or negative time inputs.

- **Scalability**: The program is basic and may struggle with more advanced features like pause/resume functionality or supporting long-running timers beyond a few hours.

- **Platform Dependency**: The use of ANSI escape codes for terminal control may not work uniformly across all platforms and might require adaptation for non-UNIX-based systems.

---

## Future Improvements

- **Error Handling**: Implement better input validation to ensure that users cannot input invalid or nonsensical values.

- **Graphical User Interface (GUI)**: Develop a graphical user interface (GUI) to improve the visual experience and make the program more user-friendly, especially for non-technical users.

- **Pause and Resume Functionality**: Add the ability to pause and resume the countdown, allowing users to manage the timer more flexibly.

- **Sound Notifications**: Add audible alerts or notifications when the timer reaches zero, so users are alerted even if they aren't looking at the terminal.

- **Cross-Platform Support**: Improve compatibility with various platforms (e.g., Windows, macOS, and Linux) to ensure the program works seamlessly on all systems.

---

## Conclusion
The Timer program is a straightforward implementation of a countdown timer that allows users to input durations in different units and displays the countdown on the terminal. It is simple and functional but could benefit from additional features and better user interface support. The program serves as a good starting point for more advanced time-related applications and provides useful lessons in terminal control and basic time management functionality.
