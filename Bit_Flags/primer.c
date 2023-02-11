#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define max(a,b) ((a>b)?(a):(b))
#define min(a,b) ((a<b)?(a):(b))
 
int str2int(char* str) {
  int rezult=0;
  while(*str)
      rezult=(rezult<<1)+(*str++-'0');
  return rezult;
}

int main() {
 char n1[33],n2[33],sum[33];
 strcpy (n1,"110011");
 strcpy (n2,"10001100"); //или ввести 2 строки из символов '0' и '1'
 if (strlen(n1)!=strlen(n2)) {
  int fill_len = max(strlen(n1),strlen(n2))-min(strlen(n1),strlen(n2));
  char *filler = newchar (max(strlen(n1),strlen(n2))+fill_len+1);
  sprintf (filler,"%0*d",fill_len,0);
  if (strlen(n1)<strlen(n2)) strcpy(n1,strcat(filler,n1));
  else strcpy(n2,strcat(filler,n2));
  //delete  filler;
 }
 printf("%032s\n+\n%032s\n=\n%032s\n"
    ,n1
    ,n2
    ,itoa(str2int(n1)+str2int(n2),sum,2)
    );
 printf("%32i\n+\n%32i\n=\n%32i\n"
    ,str2int(n1)
    ,str2int(n2)
    ,str2int(n1)+str2int(n2)
    );
    fflush (stdin);
 getchar();
 return 0;
}