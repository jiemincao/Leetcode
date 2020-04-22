char *char_process(const char *str)
{
    int lens = strlen(str);
    char *result= malloc((lens + 1) * sizeof(char));
    int j = 0;
    for(int i = 0 ; i < lens; i++)
    {
        if(str[i] == '#')
        {
            if(j > 0) j--;
        }
        else
        {
            result[j] = str[i];
            j++;
        }
    }
    result[j]='\0';
    return result;
}

bool backspaceCompare(char * S, char * T){
    char *s_result = char_process(S);
    char *t_result = char_process(T);
    bool ret = (strcmp(s_result,t_result)==0);
    free(s_result);
    free(t_result);
    return ret;
}
