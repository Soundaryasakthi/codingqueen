#include<stdio.h>
int main()
{
int a,reverse=0,temp;
printf("Enter the number\n");
scanf("%d",&a);
temp=a;
while(temp!=0)
{
reverse=reverse*10;
reverse=reverse+temp%10;
temp=temp/10;
}
if(n==reverse)
{
printf("%d is palindrome\n",a);
}
else
{
printf("%d is not a palindrome\n",a);
}
return 0;
}
