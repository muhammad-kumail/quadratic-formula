#include<stdio.h>
#include<conio.h>
#include<math.h>
void roots(int,int,int,float *p1,float *p2);
main()
{
    int a,b,c; float r1,r2;
    printf("Enter a,b,c: ");
    scanf("%d %d %d",&a,&b,&c);
    roots(a,b,c,&r1,&r2);
    printf("Roots are: %.2f %.2f",r1,r2);
    getch();
}
void roots(int a,int b,int c,float *p1,float *p2)
{
    float d,x1,x2;
    d=(b*b)-4*(a*c);
    d=sqrt(d);
    x1= (-b+d)/(2*a);
    x2= (-b-d)/(2*a);
    *p1=x1;
    *p2=x2;
}
