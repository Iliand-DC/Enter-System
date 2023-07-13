#include "user.h"
User::User(std::string _name, std::string _password)
{
    name = _name;
    password = _password;
}
std::string User::getPassword()
{
    return password;
}
std::string User::getName()
{
    return name;
}