int searchInsert(int* nums, int numsSize, int target){
    int i;
    if (nums[numsSize-1]<target){
        return numsSize;
    }
    for (i=0;i<numsSize;i++){
        if (nums[i]>target){
            return i;
        }
        if (nums[i]==target){
            return i;
        }
    }
    return 0;
}
