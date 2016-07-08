

#include "User.h"

void User::print(){
   printf("name is %s,and age is %d\n",name.c_str(),age);
   #ifdef MYDEF
   printf("定义了 LIBHELLO_BUILD \n");
   #else
   printf("没有进行定义 LIBHELLO_BUILD \n");
   #endif
}
