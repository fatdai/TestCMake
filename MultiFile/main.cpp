



#include <iostream>
#include <string>
#include "User.h"
using namespace std;

int main(){
  auto user = new User("zhangsan",21);
  user->print();
  delete user;
  return 0;
}
