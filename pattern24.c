/*patterm18
a 
b c 
d e f 
g h i j 
k l m n o 
*/

#include<stdio.h>

int main()
{
    int num;
    char ch = 'a';
    printf("Enter number: ");
    scanf("%d", &num);
    for(int row = 0;row < num;row++)
    {
        for(int col = 0;col <= row;col++)
        {
            printf("%c ", ch);
            ch = ch + 1;
        }
        printf("\n");
    }
}