#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 100

int* randNums() {
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


void sort(int *nums) {

    for (int i = 1; i < N; i++) {
        if (nums[i] >= nums[i - 1]) {
            continue;
        }

        int temp = nums[i];
        int j = i - 1;

        while (j >= 0 && temp < nums[j]) {
            nums[j + 1] = nums[j];
            j--;
        }

        nums[j + 1] = temp;
    }
}


int main() {
    srand(time(NULL));
    int *nums = randNums();

    sort(nums);

    free(nums);
    return 0;
}