#include<stdio.h>
int sum_array (int *array_value, int last_index);
int main(){
    int array[100], numbercounter;

    printf ("Enter the number of array elements");
    scanf("%d", &numbercounter);

    printf ("Enter %d values of array\n", numbercounter);
    for (int i = 0; i<numbercounter; i++){
        scanf("%d", &array[i]);
    }

    printf ("The value of array is ");
    for (int j=0; j<numbercounter; j++){
        printf("%d ", array[j]);
    }

    printf("Sum of Array elements is: %d", sum_array(array, numbercounter-1));

    return 0;
}



int sum_array (int *array_value, int last_index){

    if (NULL==array_value || last_index<0){
        return 0;
    }
    
    return array_value[last_index]+sum_array(array_value, last_index-1);
}