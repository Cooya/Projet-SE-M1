#include "syscall.h"

int main(){
  char u[10];
  GetString(u, 10);
  PutString(u);
  PutChar('\n');
  return 0;
}
