#ifndef MANAGMENT_H
#define MANAGMENT_H

#include "user.h"
#include "passwordChecker.h"
#include <vector>
#include <fstream>

class Managment
{
private:
    std::vector<User> users;
    PasswordChecker checker;
public:
    Managment();
    Managment(std::vector<User>);
    bool userExist(std::string);
    User findUser(std::string);
    void getAccess(std::string, std::string);
    void addUser(std::string, std::string);
    void addUser(User);
    Managment readAllUsersFromTxt(std::string);
};

#endif