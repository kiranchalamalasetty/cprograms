#include<stdio.h>
void main(){
    int a,b,c;
    printf("enter the three num:");
    scanf("%d %d %d",&a,&b,&c);
    printf("largest of the three num is %d",a>b?(a>c ? a:c):(b>c ? b:c));
}
