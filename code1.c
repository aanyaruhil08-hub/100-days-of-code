/* Write a program to input two numbers and display their sum.
Sample Test Cases:
Input 1:
3 4
Output 1:
Sum = 7

Input 2:
-1 20
Output 2:
Sum = 19

*/

#include <stdio.h>
int main()
{   int a, b, c;
    printf("enter two numbers:");
    scanf("%d %d",&a, &b);
    c=a+b;
    printf("sum=%d\n",c);
    return 0;
}