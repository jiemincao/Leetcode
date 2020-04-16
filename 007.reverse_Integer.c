int reverse(int x){
    if(x == INT_MAX || x == INT_MIN)
    {
        return 0;
    }
    int result =0;    
    int temp=x %10;
    while(x)
    {
        if(result > (INT_MAX/10) || 
           result < (INT_MIN/10))
        {
            return 0;
        }
        result = (result*10)+temp;
        x    = x / 10;
        temp = x % 10;
    } 
    return result;
}
