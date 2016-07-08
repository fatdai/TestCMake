



#include <iostream>
#include <string>
#include "User.h"
using namespace std;

int main(){
  auto user = new User("lisi",23);
  user->print();
  delete user;
  return 0;
}
