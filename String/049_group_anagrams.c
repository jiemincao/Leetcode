/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */

typedef struct
{
    char *original;
    char *sorted;
}pair_t;

int cmpChar(const void * a, const void * b)
{
    return ( *(const char*)a - *(const char*)b );
}

int cmpPairs(const void * a, const void * b)
{
    const pair_t* pa = (const pair_t*)a;
    const pair_t* pb = (const pair_t*)b;
    return strcmp(pa->sorted,pb->sorted);
}

char *** groupAnagrams(char ** strs, int strsSize, int* returnSize, int** returnColumnSizes){
    pair_t *pairs = malloc(sizeof(pair_t)*strsSize);
    
    for(int i = 0; i <strsSize ; i++)
    {
        char *temp_str = malloc(sizeof(char)*(strlen(strs[i])+1));
        strcpy(temp_str,strs[i]);
        qsort(temp_str,strlen(strs[i]),sizeof(char),cmpChar);
        pairs[i].original = strs[i];
        pairs[i].sorted   = temp_str;
    }
    qsort(pairs,strsSize,sizeof(pair_t),cmpPairs);
    *returnSize = 0;
    *returnColumnSizes    = NULL;
    char *** returnResult = NULL;
    
    for(int i= 0; i < strsSize; i++)
    {
        if(i == 0 || strcmp(pairs[i].sorted,pairs[i-1].sorted) != 0)
        {
            int lastgroupindex = *returnSize;
            returnResult = realloc(returnResult,sizeof(char**)*(*returnSize+1));
            returnResult[lastgroupindex] = malloc(sizeof(char*)*1);
            returnResult[lastgroupindex][0] = pairs[i].original;
            
            (*returnSize)++;
            *returnColumnSizes =
                realloc(*returnColumnSizes,sizeof(int)*(*returnSize));
            (*returnColumnSizes)[lastgroupindex]=1;            
        }
        else
        {
            int lastgroupindex = *returnSize - 1;
            int lastgroupsizes = (*returnColumnSizes)[lastgroupindex];
            returnResult[lastgroupindex]=
                realloc(returnResult[lastgroupindex],sizeof(char*)*(lastgroupsizes+1));
            returnResult[lastgroupindex][lastgroupsizes] = pairs[i].original;
            (*returnColumnSizes)[lastgroupindex]=lastgroupsizes+1;
        }
    }
    
    return returnResult;

}
