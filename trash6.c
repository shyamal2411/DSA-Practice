/*Comments shows the number of error and the error in code*/
#include<stdio.h>
#include<conio.h>//1 conio
void main() //2  no ; in main
{
int a,b,c;
 // 3 clrscr();
printf("Enter the three numbers:\n"); //4 ; inserted
scanf("%d %d %d",&a, &b, &c);
if(a>b)
{
if(a>c)
{
printf("Max=%d",a);
}
else{     // 5 { inserted
printf("Max=%d",c);
}
}
else if(b>c) // 6 no { required
{
printf("Max=%d",b); //7 ;  inserted
}
else
{
printf("Max=%d",c);
}
}
//getch(); // 8 ; inserted
}
