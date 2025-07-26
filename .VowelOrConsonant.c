#include<stdio.h>
int main()

{
    char ch;
    scanf("%c",&ch);
    switch(ch)
    {
    case 'a' :
    case 'i' :
    case 'e' :
    case 'o' :
    case 'u' :
    case 'A' :
    case 'I' :
    case 'E' :
    case 'O' :
    case 'U' :
        printf("Vowel\n");
        break;
    default :
    {
        printf("Consonant\n");
    }
    }
    return 0;
}
