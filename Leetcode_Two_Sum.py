class Solution(object):
    def twoSum(self, nums, target):
        f=0
        r=[]
        for i in range(len(nums)):
            for j in range(i+1,len(nums)):
                if nums[i]+nums[j]==target:
                    r.append(i)
                    r.append(j)
                    f=1
                    break
            if f==1:
                break
        return r
