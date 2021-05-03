int maxSubArray(int* nums, int numsSize){
    int max = nums[0];
    int sum = 0;
    for(int i = 0; i < numsSize; i++)
    {
        sum += nums[i];
        if(sum > max)
        {
            max = sum;
        }
        if(sum < 0)
        {
            sum = 0;
        }
    }
    return max;
}

#if 0
int maxSubArray(int* nums, int numsSize){
    int max = nums[0];
    for(int i = 0; i < numsSize; i++)
    {
        int sum = 0;
        for(int j = i; j < numsSize; j++)
        {
            sum += nums[j];   
            if(sum > max)
            {
                max = sum;    
            }    
        }
    }
    return max;
}
#endif
