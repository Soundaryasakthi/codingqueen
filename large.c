#include<stdio.h>
int main()
{
int x,y,z,large;
printf("Enter 3 numbers:");
scanf("%d%d%d",&x,&y,&z);
large=(x>y && x>z ? x:y>z ? y:z);
printf("\n largest number:");
return 0;
}
