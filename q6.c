// 6. Program to check whether a year is a leap year or not. Using switch
//  statement
#include<stdio.h>
int main()
{
    int x;
    printf("Enter the number");
    scanf("%d",&x);
//    switch(x%100==0)
//       {
//           case 1:
//               switch(x%400==0)
//                 { 
//                      case 1:printf("leap"); break;
//                     case 0:printf("non leap"); break;
//                 }
//             case 0:
//                    switch(x%4==0)
//                          {
//                             case 1:printf("leap"); break;
//                             case 0: printf("non leap"); break;
//                          }
               

//       }
//       return 0;



/*  SECOND METHOD                  */



    switch(x%100==0)    // x%100 ye  huaa to ye true hoga 
       {
          case 1:
             {
                switch(x%400==0)
                      {
                         case 1:
                            {
                                printf("leap year");
                                break;
                            }
                        case 0:
                            {
                                 printf("non leap year");
                                 break;
                            }
                      }
                      break;
                
             }

           case 0:
              {
                switch(x%4==0)
                      {
                        case 1:
                             {
                                printf("leap year");
                                break;
                             }

                         case 0:
                            {
                                printf("non leap year");
                                break;
                            }
                      }
                      break;
              }
       }

       return 0;
 }