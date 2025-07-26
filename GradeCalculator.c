#include<stdio.h>
int main()
{
    int mark;
    printf("Enter mark(0-100): ");
    scanf("%d", &mark);
    switch(1)
    {
    case 1:
        if(mark<=100 && mark>=80) printf("A+\n");
        else if(mark<80 && mark>=70) printf("A\n");
        else if(mark<=70 && mark>=60) printf("A-\n");
        else if(mark<60 && mark>=50) printf("B\n");
        else if(mark<50 && mark>=40) printf("C\n");
        else if(mark<40 && mark>=33) printf("D\n");
        else printf("F\n");
        break;
    default :
        printf("Invalid Number\n");
    }
    return 0;
}
