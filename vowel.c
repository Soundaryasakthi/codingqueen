#include<stdio.h>
int main()
{
char ch;
printf("character\n");
scanf("%c",&ch);
switch(ch)
{
case 'a':
case 'A':
case 'e':
case 'E':
case 'i':
case 'I':
case 'o':
case 'O':
case 'u':
case 'U':
printf("%c is vowel.\n",ch);
break;
default:
printf("%C is consonant.\n",ch);
}
return 0;
}
