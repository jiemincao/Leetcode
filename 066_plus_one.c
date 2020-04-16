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
            digitsSize++;
            arr = (int *)realloc(arr,(*returnSize)*sizeof(int));
            for(int j = (*returnSize) -1 ; j >0 ; j--)
            {
                arr[j]= temp % 10;
                arr[j-1] = temp / 10;    
            }
            
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
