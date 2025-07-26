#include<stdio.h>
 int main()
{
    int i;
    printf("Enter a number : ");
    scanf("%d",&i);
    if (i==2)
    {
        printf("%d is a even number",i);
    }
    else if (i%2==0)
    {
        printf("%d is a even number",i);
    }
    else
    {
        printf("%d is a odd number",i);
    }
    return 0;
}

