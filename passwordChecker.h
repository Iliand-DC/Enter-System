#ifndef PASSCHECKER_H
#define PASSCHECKER_H
#include "User.h"

class PasswordChecker
{
public:
    bool Check(User, std::string);
};

#endif