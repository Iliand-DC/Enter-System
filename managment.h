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
    void addUserToTxt(std::string, std::string);
    bool userExist(std::string);
    User findUser(std::string);
public:
    Managment();
    Managment(std::vector<User>);
    void getAccess(std::string, std::string);
    void addUser(std::string, std::string);
    void addUser(User);
    void readAllUsersFromTxt();
};

#endif