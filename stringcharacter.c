
// C Program to demonstrate character
// extraction from a string
#include <stdlib.h>
#include <stdio.h>
int main()
{
    char str[20];
    printf("Enter the string: ");
    gets(str);
    // alternative scanf("%s",str);
   
    // character extraction
    printf("Printing the characters:: \n");
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') { // not a white space
            printf("%c\n", str[i]); // printing each characters in a new line
        }
    }
    return 0;
}