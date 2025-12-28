#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 100 

int *randNums() {
    int *nums = (int*)malloc(N * sizeof(int));
    if (!nums) return NULL;

    for (int i = 0; i < N; i++)
        nums[i] = rand() % 100;

    return nums;
}

void sort(int *nums) {
    int temp;
    int swapped;
    int n = N;

    do {
        swapped = 0;
        int lastSwap = 0;

        for (int j = 1; j < n; j++) {
            if (nums[j] < nums[j - 1]) { 
                temp = nums[j];
                nums[j] = nums[j - 1]; 
                nums[j - 1] = temp; 

                swapped = 1;
                lastSwap = j; 
            }
        }

        n = lastSwap;
    } while (swapped); 
}

int main() {
    srand(time(NULL)); 
    int *nums = randNums();

    sort(nums); 

    free(nums);
    return 0;
}
