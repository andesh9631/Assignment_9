// 4. Write a menu driven program with the following options:
// a. Check whether a given set of three numbers are lengths of an
// isosceles triangle or not
// b. Check whether a given set of three numbers are lengths of sides of
// a right angled triangle or not
// c. Check whether a given set of three numbers are equilateral triangle
// or not
// d. Exit
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,a,b,c;
    while(1)
     {
        printf("\n a. isosceles triangle or not\n");
        printf("\nb.  right angled triangle or not\n");
       printf("\n c.  equilateral triangle or not\n");
           printf("\n d. Exit\n");
           printf("***AAA***AAA***AAA***AAA\n");

           printf("\n\n\n Enter your chosie");
           scanf("%d",&n);
        switch(n)
           {
             case 1:
                 {
                   printf("\n Enter three number");
                   scanf("%d%d%d",&a,&b,&c);
                     if((a==b)||(b==c)||(c==a))
                        printf("tringle is isosceles\n");
                     else 
                         printf("tringle is not isosceles\n");
                         break;
                }

                  case 2:
                 {
                   printf("\n Enter three number");
                   scanf("%d%d%d",&a,&b,&c);
                     if((a*a+b*b==c*c)||(b*b+c*c==a*a)||(c*c+a*a==b*b))
                        printf("right angled tringle\n");
                     else 
                         printf(" not right angled tringle\n");
                         break;
                  }

                   case 3:
                 {
                   printf("\n Enter three number");
                   scanf("%d%d%d",&a,&b,&c);
                     if((a==b)&&(b==c)&&(c==a))
                        printf("equilateral triangle\n");
                     else 
                         printf("tringle is not isosceles\n");
                         break;
                  }

                   
                    case 4:
                      {
                        printf("exit the program");
                        exit(0);
                        break;
                   
                      }

                 
           }

     }

     return 0;

                


}