// 3. Write a program which takes the day number of a week and displays
//  a unique greeting message for the day
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int day;
    while(1)
   {
        printf("\n\n\nEnter the days\n");
        scanf("%d",&day);
         switch(day)
         {
              default:
                {
                   printf(" you chosse invaild number");
                   break;
                }
              case 1:
                  {
                    printf("today sunday");
                    break;
                  }

              case 2:
                  {
                    printf("today monday");
                    break;
                  }

              case 3:
                  {
                    printf("today tuesday");
                    break;
                  }

              case 4:
                  {
                    printf("today wednesday");
                    break;
                  }

              case 5:
                  {
                    printf("today thursday");
                    break;
                  }

             case 6:
                  {
                    printf("today friday");
                    break;
                  }

             case 7:
                  {
                    printf("today saturday");
                    break;
                  }

             case 8:
                  {
                    printf("you choose exit buttom");
                   exit(0);
                   break;
                  }
         }
         
    }
         return 0;
}