/*pattern29
1 
2 4 
3 6 9 
4 8 12 16 
5 10 15 20 25
*/

#include<stdio.h>

int main()
{
    int num, num1;
    printf("Enter number: ");
    scanf("%d", &num);
    for(int row = 1;row <= num;row++)
    {
        num1 = row;
        for(int col = 1;col <= row;col++)
        {
            printf("%d ", num1);
            num1 = num1 + row;
            
        }
        printf("\n");
    }
}
