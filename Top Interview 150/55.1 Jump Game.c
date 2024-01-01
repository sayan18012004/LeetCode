#include <stdio.h>
#include <stdbool.h>

bool canJump(int* nums, int numsSize) {
    int maxReach = 0;

    for (int i = 0; i < numsSize; i++) {
        if (i > maxReach) {
            return false; // Cannot reach current index i
        }
        maxReach = (i + nums[i]) > maxReach ? (i + nums[i]) : maxReach;
        if (maxReach >= numsSize - 1) {
            return true; // Can reach the end
        }
    }

    return false;
}

int main() {
    int nums[] = {2, 3, 1, 1, 4};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    bool canJumpResult = canJump(nums, numsSize);

    printf("%s", canJumpResult ? "true" : "false");

    return 0;
}
