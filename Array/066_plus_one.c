

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize){
    *returnSize = digitsSize;
    int *arr = NULL;
    arr = (int *)calloc(digitsSize, sizeof(int));
    memcpy(arr,digits,digitsSize*sizeof(int));
    arr[digitsSize-1] = digits[digitsSize-1]+1;
    int i = digitsSize;
    while(i > 0)
    {
        --i;
        if(i == 0 && arr[i] >= 10)
        {
            int temp = arr[i];
            (*returnSize)++;
            arr = (int *)realloc(arr,(*returnSize)*sizeof(int));
            memset(arr,0,(*returnSize)*sizeof(int));
            arr[i+1]= temp % 10;
            arr[i] = temp / 10;            
        }
        if (arr[i] >= 10)
        {
            arr[i] = arr[i] % 10;
            arr[i-1] = arr[i-1] + 1;
        }
        else
        {
            break;
        }
        
    }
    return arr;
}

