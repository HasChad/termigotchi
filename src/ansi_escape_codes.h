#pragma once

#define UNDERLINE_ON "\033[4m";   // Underline on
#define UNDERLINE_OFF "\033[24m"; // Underline off\n
#define BOLD_ON "\033[1m";        // Bold on
#define BOLD_OFF "\033[21m";      // Bold off
#define SHOW_CURSOR "\033[?25h";  // Show cursor
#define HIDE_CURSOR "\033[?25l";  // Hide cursor

// Text Colors
#define RESET "\033[0m"
#define BLACK "\033[30m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"
#define WHITE "\033[37m"

// Bright Text Colors
#define BRIGHT_BLACK "\033[90m"
#define BRIGHT_RED "\033[91m"
#define BRIGHT_GREEN "\033[92m"
#define BRIGHT_YELLOW "\033[93m"
#define BRIGHT_BLUE "\033[94m"
#define BRIGHT_MAGENTA "\033[95m"
#define BRIGHT_CYAN "\033[96m"
#define BRIGHT_WHITE "\033[97m"

// Background Colors
#define BG_BLACK "\033[40m"
#define BG_RED "\033[41m"
#define BG_GREEN "\033[42m"
#define BG_YELLOW "\033[43m"
#define BG_BLUE "\033[44m"
#define BG_MAGENTA "\033[45m"
#define BG_CYAN "\033[46m"
#define BG_WHITE "\033[47m"

// Bright Background Colors
#define BG_BRIGHT_BLACK "\033[100m"
#define BG_BRIGHT_RED "\033[101m"
#define BG_BRIGHT_GREEN "\033[102m"
#define BG_BRIGHT_YELLOW "\033[103m"
#define BG_BRIGHT_BLUE "\033[104m"
#define BG_BRIGHT_MAGENTA "\033[105m"
#define BG_BRIGHT_CYAN "\033[106m"
#define BG_BRIGHT_WHITE "\033[107m"

/*
\033[2K                                - Clear Line")
\033[<L>;<C>H or \\033[<L>;<C>f        - Put the cursor at line L and column C.")
\033[<N>A                              - Move the cursor up N lines")
\033[<N>B                              - Move the cursor down N lines")
\033[<N>C                              - Move the cursor forward N columns")
\033[<N>D                              - Move the cursor backward N columns\n")
\033[2J                                - Clear the screen, move to (0,0)")
\033[K                                 - Erase to end of line")
\033[s                                 - Save cursor position")
\033[u                                 - Restore cursor position\n")
*/
