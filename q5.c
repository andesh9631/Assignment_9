// 5. Convert the following if-else-if construct into switch case:                        
// if(var == 1)
// printf("good");
// else if(var == 2)
// printf("better");          // question me kuch mistake print huaa hai assignment
// else if(var == 3
// printf("best");
// else
// printf("invalid");
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    while(1)

   {  
     printf("Enter the number\n");
    scanf("%d",&n);
    switch(n)
      {
        case 1:
            {
                printf("good");
                printf("\n");
                break;
            }
        case 2:
             {
                printf("Better");
                printf("\n");
                  break;
             }
        case 3:
            {
                printf("best");
                printf("\n");
                break;
            }
        default :
            {
                printf("Invalid");
                printf("\n");
                break;
            }
            case 4:
            printf("exit progrm");
            printf("\n");
            exit(0);
              
      }}
        return 0;
        
}