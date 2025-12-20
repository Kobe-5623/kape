#include <stdio.h>
#include <stdlib.h>

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


    return 0;
}