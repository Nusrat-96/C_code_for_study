#include <stdio.h>
float multi(float a, float b){
    float multvalue;
    multvalue = a*b;
    return multvalue;
}

int main(){
    float a, b;
    float answer;
    a = 5;
    b= 6;
    answer = multi(a,b);
    printf("%f", answer);
    return 0;
}