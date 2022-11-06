// 1. Write a program which takes the month number as an input and display
// number of days in that month.
#include<stdio.h>
int main()
{
    int x;
    printf("Enter the number\n");
    scanf("%d",&x);
    switch(x)
     {
        case 12:
            {
                printf("31 days inDecember");
                break;

            }
        case 1:
            {
                printf("31 days in january");
                break;

            }
        case 2:
            {
                printf("28 days in Feburay");
                printf("29 days in case leap yera , Feburay");
                break;

            }
        case 3:
            {
                printf("31 days in march");
                break;
                


            }
        case 4:
            {
                printf("30 days in aprial");
                 break;

            }
        case 5:
            {
                printf("31 days in may");
                 break;

            }
        case 6:
            {
                printf("30 days in june");
                 break;

            }
        case 7:
            {
                printf("31 days in july");
                 break;

            }
        case 8:
            {
                printf("31 days in August");
                 break;

            }
        case 9:
            {
                printf("30 days in September");
                 break;

            }
        case 10:
            {
                printf("31 days in October");
                    break;
            }
        case 11:
            {

                printf("30 days in November");
                break;
            }
        default :
            {
                printf("invaild number");
                break;
            }

            
    

     }
}
