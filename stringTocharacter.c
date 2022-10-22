#include <stdio.h>

int main()
{
    char str[100],ch;
    int i,pos=0;
    scanf ("%s",str);
    scanf ("%c",&ch);
    for(i=0;str[i]!='NULL';i++)
    {
        if(str[i]==ch)
        {
            pos++;
        }
    }
    if(pos==0)
    {
        printf("not present %c",ch);
    }  
    else
    {
        printf("%c is at %d",ch,pos);
    } 
    return 0;
}
