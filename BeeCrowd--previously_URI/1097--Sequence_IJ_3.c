#include<stdio.h>
int main(void)
{
    int I=1, J=7;
    for(I;I<=9;I+=2)
    {
        printf("I=%d J=%d\n",I,J--);
        printf("I=%d J=%d\n",I,J--);
        printf("I=%d J=%d\n",I,J--);
        J+=5;
    }
    return 0;
}

/*
another solution:
#include<stdio.h>
int main()
{
    int i,j,a=1,b=7,c=5,x;
    for(x=1;x<=5;x++)
    {
        for(i=1,j=b;i<=3,j>=c;i++,j--)
    {
        printf("I=%d J=%d\n",a,j);

    }
    a+=2;
    b+=2;
    c+=2;
    }

   return 0;

}

*/
