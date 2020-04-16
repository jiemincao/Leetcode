int symbol_to_number(char symbol)
{
    switch(symbol){
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0;

    }
}

int romanToInt(char * s){
    int char_lens=strlen(s);
    int i=0;
    int result=0;
    for(i=0; i<char_lens;i++)
    {
        if(i>0 && (symbol_to_number(s[i]) > symbol_to_number(s[i-1])))
        {
            result+= symbol_to_number(s[i]) -(2*symbol_to_number(s[i-1]));
        }
        else
        {
            result+=symbol_to_number(s[i]);    
        }
    }
    return result;    
}
