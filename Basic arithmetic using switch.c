#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,choice;
    printf("enter 2 numbers ");
    scanf("%d%d",&x,&y);
    printf("Menu\n 1.Addition\n 2.subtraction\n 3.Multiplication\n 4.Division\n\n Enter your choice");
    scanf("%d",&choice);
    switch(choice){
    case 1: printf("sum is %d",x+y);
    break;
    case 2: printf("diff is %d" , x-y);
    break;
    case 3: printf("product is %d", x*y);
    break;
    case 4: printf("remainder is %d",x/y);
    break;
    default : printf("invalid choice");
    }

    return 0;
}
