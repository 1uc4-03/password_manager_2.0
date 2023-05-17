#ifndef PASSWORD_MANAGHER_2_FUNCTIONS_H
#define PASSWORD_MANAGHER_2_FUNCTIONS_H

#pragma once

#include <string>
#include <map>

auto encrypt(std::string const & s);
auto decrypt(std::string const & s);

void getAccByPassword();
void getAccByEmail();
void newAcc();
void replaceAcc(); // eingebettet in newAcc()
void deleteAcc();
void viewAllAcc();

typedef void (*FnPtr)();

std::map<char, FnPtr> commands = {
    {'n', &newAcc},
    {'p', &getAccByPassword},
    {'e', &getAccByEmail},
    {'v', &viewAllAcc},
    {'d', &deleteAcc}
};

#endif
