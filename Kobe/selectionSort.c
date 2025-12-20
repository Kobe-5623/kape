#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int* randNums(int size) {
    int* nums = (int*)malloc(size * sizeof(int));

    if (nums == NULL) {
        return NULL;
    }

    srand(time(NULL));

    for (int i = 0; i < size; i++) {
        int num = rand() % 100;
        nums[i] = num;
    }
    
    return nums;
}

int main() {
    int N = 100;
    int *nums = randNums(N);
    /*
    for(int i = 0; i < N; i++) {
        printf("%d\n", nums[i]);
    }
    */
    return 0;
}