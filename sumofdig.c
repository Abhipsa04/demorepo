/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    
    int n, t, sum=0,rem;
    printf("Enter the number\n");
    scanf("%d",&n);
    t=n;
    while(t!=0)
     {
         rem=t%10;
         sum=sum+rem;
         t=t/10;
     }
    printf("Sum of the digits of %d is %d\n",n,sum);
    return 0;

}


