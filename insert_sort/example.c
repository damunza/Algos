#include <stdlib.h>
#include <stdio.h>

void swap(int *, int *);

int main(){
    int numbers[] = {5, 1, 4, 2, 3};

    /* find the size of an array */
    int size;
    size = sizeof(numbers) / sizeof(numbers[0]);

    for(int i = 0; i < size; i++){ 

        /* keep track of the back indexes*/
        for(int j = 1; j < size; j ++){
            if( numbers[j] < numbers[j - 1]){
                int * curr =  &numbers[j];
                int * prev = &numbers[j - 1];

                swap(curr, prev);
                j--;
                continue;
            }
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

