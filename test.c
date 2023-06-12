// Your First C++
#define PERIOD 10
#define PRINCIPAL 5000.00
#include<stdio.h>
int main(){
    int year;
    float amount, value, rate;
    amount = PRINCIPAL;
    rate = 0.11;
    year = 0;
    while (year <=PERIOD)
    {
        printf("%d  %8.2f\n", year, amount);
        value = amount + (amount*rate);
        amount = value;
        year = year +1;
    }
    return 0;
}