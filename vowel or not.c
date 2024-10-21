#include<stdio.h>
void main(){
    char x;
    printf("enter the char:");
    scanf("%c",&x);
    if(x=='a'||x=='A'||x=='e'||x=='E'||x=='i'||x=='I'||x=='o'||x=='O'||x=='u'||x=='U')
    {
    printf("'%c' is VOWEL");
}
else
{
      printf("'%c' is NOT VOWEL");
}
}
