#include <stdlib.h>
#include <stdio.h>

void swap(int *, int *);

int main(){
    int numbers[] = {5, 1, 4, 2, 3};

    /* find the size of an array */
    int size;
    size = sizeof(numbers) / sizeof(numbers[0]);

    int i = 0;
    while(i < size){
        if(i > 0){
            int * curr = &numbers[i];
            int * prev = &numbers[i - 1];  
            if( *curr < *prev){
                swap(curr, prev);
                continue;
            }
        }
        i++;
    }

    printf("Sorted array: ");
    for(int a = 0; a < size; a++){
        printf("%d, ", numbers[a]);
    }
    printf("\n");
    

    return 0;
}

void swap(int * a, int * b){
    int * temp = a;
    a = b;
    b = temp;

    return;
}

