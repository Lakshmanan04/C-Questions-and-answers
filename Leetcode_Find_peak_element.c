int findPeakElement(int* nums, int numsSize){
    int i,m=nums[0],index=0;
    for (i=0;i<numsSize;i++){
        if (nums[i]>m){
            m=nums[i];
            index=i;
        }
    }
    return index;
}
