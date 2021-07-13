#include <stdlib.h>
#include <stdio.h>

void swap(int *, int *);

int main(){
    int numbers[] = {5, 1, 4, 2, 3};

    /* find the size of an array */
    int size;
    size = sizeof(numbers) / sizeof(numbers[0]);

    for(int i = 1; i < size; i++){ 
            if( numbers[i] < numbers[i - i]){
                int * curr =  &numbers[i];
                int * prev = &numbers[i - i];

                swap(curr, prev);
                i--;
                continue;
            }
    }

    printf("Sorted array: ");
    for(int a = 0; a < size; a++){
        printf("%d, ", numbers[a]);
    }
    printf("\n");
    

    return 0;
}

void swap(int * a, int * b){
    int temp = * a;
    *a = *b;
    *b = temp;
}

