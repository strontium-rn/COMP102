//working with pointers                                    
#include<stdio.h>

int helloPointer(){
  int var, *ptr;
  var = 10;
  ptr = &var;
  
  printf("The value of ptr address = %p\n", ptr);
  printf("value at var = %d\n", var);
  printf("The value of ptr = %d\n", *ptr);
}
int main(){
  helloPointer();
  return 0;
}