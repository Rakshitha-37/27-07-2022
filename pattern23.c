/*patterm10
1 
* * 
2 2 2 
* * * *
3 3 3 3 3 
*/

#include<stdio.h>

int main()
{
    int num, num1 = 1, flag;
    printf("Enter number: ");
    scanf("%d", &num);
    for(int row = 0;row < num;row++)
    {
        flag = 0;
        for(int col = 0;col <= row;col++)
        {
            if((row % 2) == 0)
            {
                printf("%d ", num1);
            }
            else
            {
                printf("* ");
            }
        }
        if((row % 2) == 0)
        {
            num1 = num1 + 1;
        }
        printf("\n");
    }
}
