/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    *returnSize = 2;
    int i = 0, j = 0;
    int* ret=calloc(2,sizeof(int));
    for(i = 0; i < numsSize; i++) 
    {
        for(j = i + 1; j < numsSize; j++) 
        {
           if(target == nums[i] + nums[j]) 
           {
               ret[0] = i;
               ret[1] = j;
               return ret;
           }
        }
    }
    return ret;
}
