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
            std::cout << "Доступ получен." << std::endl;
        else
            std::cout << "Пароль не подходит." << std::endl;
    }
}
void Managment::addUser(std::string _name, std::string _pass)
{
    std::ofstream out("users.txt", std::ios::app);
    User newUser(_name, _pass);
    users.push_back(newUser);
    if (out.is_open())
    {
        out << _name << std::endl << _pass << std::endl;
    }
    out.close();
}
void Managment::addUser(User _user)
{
    users.push_back(_user);
    std::ofstream out("users.txt", std::ios::app);
    if (out.is_open())
    {
        out << _user.getName() << std::endl << _user.getPassword() << std::endl;
    }
    out.close();
}
Managment Managment::readAllUsersFromTxt(std::string nameOfFile)
{
    Managment managment;
    std::string nameLine;
    std::string passLine;
 
    std::ifstream in(nameOfFile);
    if (in.is_open())
    {
        while (std::getline(in, nameLine))
        {
            std::getline(in, passLine);
            managment.addUser(nameLine, passLine);
        }
    }
    in.close();
    return managment;
}