#include <stdio.h>
int main() 
{
    int n,sum,rem;
    sum=0;
    printf("enter the value of n:");
    scanf("%d",&n);
    while (n>0){
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    printf("The sum of the digits ofr a num is%d",sum);
    return 0;
}
