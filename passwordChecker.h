#ifndef PASSCHECKER_H
#define PASSCHECKER_H
#include "user.h"

class PasswordChecker
{
public:
    bool Check(User, std::string);
};

#endif