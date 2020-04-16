bool isPalindrome(int x){
    if(x == INT_MAX || x == INT_MIN)
    {
        return 0;
    }
    if(x < 0) return 0;
    int temp = x % 10;
    int original_x = x;
    int rerverse_x = 0;
    while(x)
    {
        if(rerverse_x > INT_MAX / 10 || 
           rerverse_x < INT_MIN / 10)
        {
            return 0;
        }
        rerverse_x = (rerverse_x * 10) + temp;
        x    =  x / 10;
        temp =  x % 10;            
    }
    
    if(original_x == rerverse_x)
    {
        return 1;   
    }
    else
    {
        return 0;    
    }
    
}
