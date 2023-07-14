#include "managment.h"

Managment::Managment(std::vector<User> _users)
{
    users = _users;
}
Managment::Managment(){}
bool Managment::userExist(std::string _name)
{
    for (auto item: users)
    {
        if(item.getName() == _name)
            return true;
    }
    return false;
}
User Managment::findUser(std::string _name)
{
    for (auto item: users)
    {
        if(item.getName() == _name)
            return item;
    }
}
void Managment::getAccess(std::string _name, std::string _pass)
{
    if (userExist(_name))
    {
        if(checker.Check(findUser(_name), _pass))
            std::cout << "Access successful." << std::endl;
        else
            std::cout << "Access denied." << std::endl;
    }
    else std::cout << "User is not exist." << std::endl;
}
void Managment::addUser(std::string _name, std::string _pass)
{
    std::ofstream out("users.txt", std::ios::app);
    User newUser(_name, _pass);
    users.push_back(newUser);
    addUserToTxt(_name, _pass);
}
void Managment::addUser(User _user)
{
    users.push_back(_user);
    addUserToTxt(_user.getName(), _user.getPassword());
    
}
void Managment::addUserToTxt(std::string _name, std::string _pass)
{
    std::ofstream out("users.txt", std::ios::app);
    if (out.is_open())
    {
        out << std::endl << _name << std::endl << _pass;
    }
    out.close();
}
void Managment::readAllUsersFromTxt()
{
    std::string nameLine;
    std::string passLine;
 
    std::ifstream in("users.txt");
    if (in.is_open())
    {
        while (std::getline(in, nameLine))
        {
            std::getline(in, passLine);
            User newUser(nameLine, passLine);
            users.push_back(newUser);
        }
    }
    in.close();
}