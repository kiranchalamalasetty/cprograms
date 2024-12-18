#include <stdio.h>
int main() 
{
    int n,rev,rem;
    rev=0;
    printf("enter the value of n:");
    scanf("%d",&n);
    while (n>0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    printf("The sum of the digits ofr a num is%d",rev);
    return 0;
}
