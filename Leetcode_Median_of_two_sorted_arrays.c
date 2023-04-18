double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size){
    int r[2000];
    int i,j,c=0;
    for (i=0;i<nums1Size;i++){
        r[c]=*(nums1+i);
        c+=1;
    }
    for (i=0;i<nums2Size;i++){
        r[c]=*(nums2+i);
        c+=1;
    }
    int t;
    for (i=0;i<(nums1Size+nums2Size);i++){
        for (j=i+1;j<(nums1Size+nums2Size);j++){
            if (r[j]<r[i]){
                t=r[i];
                r[i]=r[j];
                r[j]=t;
            }
        }
    }
    double ans;
    if ((nums1Size+nums2Size)%2==0){
        int a=r[((nums1Size+nums2Size)/2)-1];
        int b=r[(nums1Size+nums2Size)/2];
        ans=(double)(a+b)/2;
    }
    else {
        ans=r[(((nums1Size+nums2Size)+1)/2)-1];
    }
    return ans;
}
