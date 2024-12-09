#include <stdio.h>
int main() {
    int i,n,sum;
    sum=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;++i){
        if(i%2==0)
        {
        sum=sum+i;
    } }
printf("The sum of all even numbers is %d",sum);
return 0;
}
