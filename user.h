#ifndef USER_H
#define USER_H

#include <iostream>

class User
{
private:
    std::string name;
    std::string password;
public:
    User(std::string, std::string);
    std::string getName();
    std::string getPassword();
};

#endif