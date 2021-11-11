/* Write a code to find hcf and lcm of two numbers */

#include <stdio.h>
int main()
{
    int num1, num2, hcf, lcm;
    printf("Enter the first number : ");
    scanf("%d", &num1);
    printf("Enter the second number : ");
    scanf("%d", &num2);

    for(int i = 1; i <= num1 || i <= num2; i++)
    {
        if(num1 % i == 0 && num2 % i == 0)
        {
            hcf = i;
        }
    }
    lcm = (num1 * num2)/hcf;

    printf("HCF/GCD of given numbers %d and %d is : %d\n", num1, num2, hcf);
    printf("LCM of the given numbers %d and %d is : %d\n", num1, num2, lcm);
    return 0;
}