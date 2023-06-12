#include<stdio.h>
#include<stdlib.h>
// use of callloc
int main(){
    int *ptrr;
    int n;
    printf("Enter the number of block you want for calloc:\n");
    scanf ("%d", &n); 

    // use of callloc
    ptrr= (int*) calloc(n, sizeof(int));   
     
    for (int i=0; i<n; i++){
            printf("Enter the value of positon %d \n",i);
            scanf ("%d", &ptrr[i]);

        }
        
    for (int i=0; i<n+1; i++){
        printf("The value of positon %d is %d\n",i, ptrr[i]); 
        // for the calloc - values allcated in the memory initialized as zero
    }
    // End use of Calloc


    //use of realloc
    printf ("Enter the size of New array: \n");
    scanf ("%d", &n);


    ptrr = (int *) realloc(ptrr, n*sizeof(int));
    for (int i=0; i<n; i++){
            printf("Enter the value of positon %d \n",i);
            scanf ("%d", &ptrr[i]);

        }
        
    for (int i=0; i<n+1; i++){
        printf("The value of positon %d is %d\n",i, ptrr[i]); 
        // for the rcalloc - values allcated in the memory initialized as garbage
    }
    // end of use of realloc

 
    free(ptrr);
    return 0;
}

/* int main(){

    // use of malloc
    int *ptr;
    ptr = (int*) malloc(10*sizeof(int));
    for (int i= 0; i<3; i++){
        printf("Enter the value of %d of this array", i);
        scanf("%d", &ptr[i]);
    }

     for (int i= 0; i<4; i++){
        // for i=4 it will return garbage value as it is larger than the array length  
        printf(" the value of %d of this array is %d \n", i, ptr[i]); 
        
        
    }

    return 0;
} */


