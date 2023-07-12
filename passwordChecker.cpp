#include "passwordChecker.h"

bool PasswordChecker::Check(User user, std::string probably_password)
{
   return user.getPassword() == probably_password;
}