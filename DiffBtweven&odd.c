#include <stdio.h>
#include<stdlib.h>
int main() {
    int i,n,sumeven,sumodd;
    sumeven=0,sumodd=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;++i){
        if(i%2==0)
        {
        sumeven=sumeven+i;
    } 
        else
        {
            sumodd=sumodd+i;
        }
    }
printf("The difference between even and odd numbers is %d",abs(sumeven-sumodd));
return 0;
}
