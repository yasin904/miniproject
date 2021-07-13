#include<stdio.h>
#include "func.h"
int main()
{
    printf("\nEnter the operation:\n1.for kinetic energy\n2.for gravitational energy\n3.for mechanical energy");
    int choice;
    scanf("%d",&choice);
    printf("%d",choice);
    switch(choice)
    {
        case1:
           kinetic();
           break;
        case2:
            gravitational();
            break;
        case3:
            mechanical();
            break;
        default:
            printf("invalid choice\n");
            break;
                       
    }
}