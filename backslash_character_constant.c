#include<stdio.h>
int main(){
    int i;
    printf("\aHello World\n\n");

    printf ("hello\b\n");  /*if we need to go one step back, cursore will click in o*/
    printf("Hello\bJana \n");  /* Remove the character o as it is goes one step back*/
    printf("Hello\b\bJana \n\n");

    printf ("Horizontal\ttab\n"); /*Horizontal tab*/
    printf("Vertical \v tab\n\n");  /*Vertical tab*/


    printf ("Hello\rWorld\n"); /*retrun the cursore to the begining of the line without advencing to the new line,
                                here output will be world, as first print hello then this world overlape the word hello*/
    for(i=0;i<100;i++){printf("%d\r",i);}
    for(i=0;i<100;i++){printf("\r%d",i);}

    printf ("\n\n \'Single quote \' , \n \"Double quote\", \n Questio Mark \? \n Blackslash\\ \n print Null value \0 \n");

    return 0;
}