#include<stdio.h>
int main() 
{
    int n,rem,ori,result=0;
    printf("enter the value of n:");
    scanf("%d",&n);
    ori=n;
    while (n>0){
        rem=ori%10;
        result+=rem*rem*rem;
        ori/=10;
    }
    if(result==n)
    printf("%d is an armstrong num",n);
    else
    printf("%d is an notarmstrong num",n);
    return 0;
}
