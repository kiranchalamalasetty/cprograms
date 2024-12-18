#include <stdio.h>
int main() 
{
    int n,rem,ori,sum=0;
    printf("enter the value of n:");
    scanf("%d",&n);
    ori=n;
    while (n>0){
        rem=n%10;
        sum=(sum*10)+rem;
        n=n/10;
    }
    if(ori==sum)
    printf("given num is palindrome");
    else
    printf("given num is not palindrome");
    return 0;
}
