int new_n(int n)
{
    int result= 0;
    int temp;
    while(n != 0)
    {
        temp = n % 10;
        n /= 10;
        result += temp * temp;
    }
    return result;
}

bool isHappy(int n)
{
    int slow  = n;
    int fast = n;
    do
    {
        slow  = new_n(slow);
        fast = new_n(fast);
        fast = new_n(fast);
    }while(slow != fast);
        
    return fast == 1;
}
