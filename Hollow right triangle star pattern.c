#include <stdio.h>
#include <conio.h>
 
int main()
{
    int i, j, r;
    printf("Enter number of rows: ");
    scanf("%d", &r);
 
    for(i=1; i<=r; i++)
    {
        for(j=1; j<=r; j++)
        { 
            if(j==1 || j==i || i==r)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
} 