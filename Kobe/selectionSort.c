#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 100

int *randNums() {
    int* nums = (int*)malloc(N * sizeof(int));

    if (nums == NULL) {
        return NULL;
    }


    for (int i = 0; i < N; i++) {
        int num = rand() % 100;
        nums[i] = num;
    }
    
    return nums;
}

void *sort(int *nums) {

    for (int i = 0; i < N - 1; i++) {
        int min = i;


        for (int j = i + 1; j < N; j++) {
            if (nums[j] < nums[min]) {
                min = j;
            }
        }

        if (min != 1) {
            int temp = nums[min];
            nums[min] = nums[i];
            nums[i] = temp;
        }
    }   
}

int main() {
    srand(time(NULL));

    int *nums = randNums();

    sort(nums);


    return 0;
}