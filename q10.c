// 10. C program to find all roots of a quadratic equation using switch case
#include<stdio.h>
#include<math.h>
int main()
{
    float D,a,b,c;
    float root1,root2,imaginary;
    printf("ENter the number");
    scanf("%f%f%f",&a,&b,&c);
    D=b*b-4*a*c;
    switch(D>0)
    {
         case 1:
           {
              root1=(-b+sqrt(D))/(2*a);
               root2=(-b-sqrt(D))/(2*a);
            printf("Two distinct and real roots exists: %.2f and %.2f", 
                    root1, root2);
                    break;
           }
           case 0:
            {
                 switch(D<0)
                 {
                     case 1:
                     {
                         root1 = root2 = -b / (2 * a);
                         imaginary = sqrt(-D) / (2 * a);
                          printf("Two distinct complex roots exists: %.2f + i%.2f and %.2f - i%.2f", 
                            root1, imaginary, root2, imaginary);
                            break;
                     }
                     case 0:
                     {
                         root1 = root2 = -b / (2 * a);

                      printf("Two equal and real roots exists: %.2f and %.2f", root1, root2);
                      break;

                     }
                 }
            }
    }
    return 0;
}