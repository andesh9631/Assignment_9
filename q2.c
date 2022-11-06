// 2. Write a menu driven program with the following options:
// a. Addition
// b. Subtraction
// c. Multiplication
// d. Division
// e. Exit
#include<stdio.h>
#include<stdlib.h>//exit function ka header file hai
int main()
{
    int n,a,b;

    while(1)
    {
        printf("\n 1.Addition");
        printf("\n 2.subtraction");
        printf("\n 3.multiplication");
        printf("\n 4.division");
        printf("\n 5.Exit\n");
      printf("**********************************");

        printf("\n\n\n Enter your choice");
        scanf("%d",&n);

        switch(n)
          {
              case 1:
                 {
                    printf("Enter two number\n");
                    scanf("%d%d",&a,&b);
                    int c=a+b;
                    printf(" %d ",c);
                    printf("\n");
                    break;
                 }
              case 2:
                 {
                    printf("Enter two number\n");
                    scanf("%d%d",&a,&b);
                    int c=a-b;
                    printf(" %d ",c);
                    printf("\n");
                    break;
                 }

                case 3:
                 {
                    printf("Enter two number\n");
                    scanf("%d%d",&a,&b);
                    int c=a*b;
                    printf(" %d ",c);
                    printf("\n");
                    break;
                 }

            case 4:
                 {
                    printf("Enter two number\n");
                    scanf("%d%d",&a,&b);
                    int c=a/b;
                    printf(" %d ",c);
                    printf("\n");
                    break;
                 }

            case 5:
                 {
                   exit(0);
                 }

            default :
                {
                    printf(" you choose invaild number \n");
                    break;
                }
          }
    }

      return 0;
}