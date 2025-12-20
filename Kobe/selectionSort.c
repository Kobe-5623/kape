#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100

int* randNums() {
    int* nums = (int*)malloc(SIZE * sizeof(int));

    if (nums == NULL) {
        return NULL;
    }

    srand(time(NULL));

    for (int i = 0; i < SIZE; i++) {
        int num = rand() % 100;
        nums[i] = num;
    }
    
    return nums;
}

//Di pa po tapus..
void sort() {
    int *nums = randNums();
    int min = 0;

    for (int i = 0; i <= SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (nums[j] <= min || min == 0) {
                min = j;
            }
        }
    }
}

int main() {
    /*
    for(int i = 0; i < N; i++) {
        printf("%d\n", nums[i]);
    }
    */
    return 0;
}