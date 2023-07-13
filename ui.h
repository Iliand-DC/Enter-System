#ifndef UI_H
#define UI_H
#include "managment.h"

void menu();
void info();

#endif

void info()
{
    std::cout << "1. Добавить нового пользователя." << std::endl 
    << "2. Получить доступ к пользователю." << std::endl
    << "3. Выход." << std::endl
    << "Введите номер действия: ";
}

void menu()
{
    Managment managment;
    managment.readAllUsersFromTxt();
    char choise = 'a';
    std::string name, password;
    while (choise != '3')
    {
        info();
        std::cin >> choise;     
        switch (choise)
        {
        case '1':
            std::cout << "Введите имя пользователя и пароль: " << std::endl;
            std::cin >> name; std::cin >> password;
            managment.addUser(name, password);
            break;
        case '2':
            std::cout << "Введите имя пользователя и пароль для получения доступа: " << std::endl;
            std::cin >> name; std::cin >> password;
            managment.getAccess(name, password);
            break;
        case '3':
            break;
        default:
            std::cout << "Введите номер команды из списка команд." << std::endl;
            break;
        }
    }
}