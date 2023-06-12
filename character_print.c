#include<stdio.h>
int main(){
   char x = 'T';
   static char name[20] = "Tutorials Point";
   printf("OUTPUT OF CHARACTERS");
   printf("%c\n %3c\n %5c\n", x,x,x);
   printf("%3c\n %c\n", x,x);
   printf(" ");
   
   printf("OUTPUT OF STRINGS");
   printf("%s", name);
   printf("%20s", name);
   printf("%20.10s", name);
   printf("%.5s", name);
   printf("%-20.10s", name);
   printf("%5s", name);

   return 0;
}

