// pointer //

#include<stdio.h>

void change (int a[]);

int main(){
    int a[3] = {20,22,23};
    change (a);
    printf ("%d %d", *a, a[0]);
}

void change (int a[]){
    a[0]=10;
}
