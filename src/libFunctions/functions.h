#ifndef PASSWORD_MANAGHER_2_FUNCTIONS_H
#define PASSWORD_MANAGHER_2_FUNCTIONS_H

#include <string>
#include <map>
#include <iostream>

auto encrypt(std::string const & s);
auto decrypt(std::string const & s);

void getAccByPassword();
void getAccByEmail();
void newAcc();
void replaceAcc(); // eingebettet in newAcc()
void deleteAcc();
void viewAllAcc();

typedef void (*FnPtr)();

std::string disclaimerText = "This is the password manager. It securely stores your account data.\nManage your passwords by using the following commands:\n'n' stores a new password.\n'p' shows account info for a specific platform.\n'e' shows accounts connected to a specific email.\n'v' displays all listed accounts.\n'd' deletes a password by the corresponding platform.\n'c' cloes the manager.\n";
std::map<char, FnPtr> commands = {
    {'n', &newAcc},
    {'p', &getAccByPassword},
    {'e', &getAccByEmail},
    {'v', &viewAllAcc},
    {'d', &deleteAcc}
};

#endif
