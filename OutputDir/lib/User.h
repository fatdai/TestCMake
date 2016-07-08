#ifndef __GL_01__User__
#define __GL_01__User__

#include <string>
using namespace std;

class User{
public:
  User(const string& pname,int page):name(pname),age(page){}

  void print();

  int age = 0;
  string name;
};

#endif
