#include "functions.h"
using std::cout;
using std::cin;
using std::endl;

int main(int, char**) {

    cout << disclaimerText;
    char command;

    for (;;) {
        cout << "input command: ";
        cin >> command;

        if (command == 'c') {
            break;
        }
        else if (commands.find(command) != commands.end()) {
            commands[command];
        }
        else {
            cout << "Invalid command. Try again.\n";
        }
    }

    cout << "closed." << endl;

    return 0;
}
 