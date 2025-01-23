/*
 * This program is released under the Mozilla Public License, v2.0.
 * See https://www.mozilla.org/en-US/MPL/2.0/ for the full text of the license.
 *
 * Copyright (C) [2025] [Edge-Technology].
 *
 * This code does the following:
 * 1. Clears the clipboard using the "pbcopy" command.
 * 2. Terminates the Terminal application using the "killall" command.
 */

#include <iostream>
#include <cstdlib>

int main() {
    // Clear the clipboard
    system("pbcopy < /dev/null");

    // Forcefully kill the Terminal process
    system("killall Terminal");

    return 0;
}