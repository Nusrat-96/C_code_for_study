#include<stdio.h>
#include <math.h>
#define PI 3.1416
#define ANGLE 180

int main(){
    int angle;
    float x, y;
    angle = 0;
    printf ("              Angle      Cos(Angle)\n\n");
    while (angle <=ANGLE){
        x = (PI/ANGLE)*angle;
        y = cos(x);
        printf("%15d      %13.4f\n", angle,y);
        angle = angle+10;
    }

    return 0;

}