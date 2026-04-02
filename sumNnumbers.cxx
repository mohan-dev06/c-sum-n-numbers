#include <stdio.h>
#include <conio.h>
void main() 
{
    int i, n, num, sum = 0;
    printf("Enter how many numbers: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++) 
    {
        printf("\nEnter number %d: ", i);
        scanf("%d", &num);
        sum += num;
    }
    printf("Total Sum = %d", sum);
    getch();
}