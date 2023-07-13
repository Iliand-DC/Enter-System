#include <iostream>
#include "managment.h"
int main()
{
    Managment managment;
    managment.readAllUsersFromTxt("users.txt");
    managment.getAccess("Bob", "1234");
    managment.getAccess("Tom", "1234");
}