#include <stdio.h>
#include <stdlib.h>

void sum(int ,int );
void sub(int ,int );
void mul(int ,int );
//void div(int ,int );

void sum(int x, int y)
{
int c=x+y;
printf("the sum is %d\n",c);
}
void sub(int x, int y)
{
int s=x-y;
printf("the sub is %d\n",s);
}
void mul(int x, int y)
{
int m=x*y;
printf("the mul is %d\n",m);
}
#if 0
void div(int x, int y)
{
int d=x/y;
printf("the sub is %d\n",d);
}
#endif
void swap(int x,int y)
{
printf("before swap %d %d\n",x,y);
int t;
t=x;
x=y;
y=t;
printf("after swap %d %d\n",x,y);
}
void mod(int x,int y)
{
int m=x%y;
printf("the mod is %d\n",m);
}
int main()
{
    int a,b,res,n;
    void (*f[6])(int,int);
  f[0] = sum;
  f[1] = sub;
  f[2] = mul;
  f[3] = div;
  f[4] = swap;
  f[5] = mod;
#if 0
  f[5] =;
  f[6] =;
  f[7] =;
  f[8] =;
  f[9] =;
#endif
      printf("1.ADDITION \n");
      printf("2.SUBTRACTION \n");
      printf("3.MULTIPLICATION \n");
      printf("4.DIVISION \n");
      printf("5.SWAP \n");
      printf("6.MOD \n");
#if 0
      printf("7. \n");
      printf("8.ADDITION \n");
      printf("9.ADDITION \n");
      printf("10.ADDITION \n");
#endif

    printf("Enter two integer numbers: ");
    scanf("%d %d", &a,&b);
    printf("enter how many u want to print\n");
    scanf("%d",&n);
for(int i=0;i<n;i++)
{
    f[i](a,b);
}

    return 0;
}

