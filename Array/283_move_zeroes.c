void moveZeroes(int* nums, int numsSize){
    bool isOK = false;
    while(!isOK)
    {
        isOK = true;
        for(int i = 0; i+1 < numsSize;i++)
        {
            if(nums[i] == 0 && nums[i+1] != 0)
            {
                nums[i] = nums[i+1];
                nums[i+1] = 0;
                isOK=false;
            }
        }
    }
    return;
}
