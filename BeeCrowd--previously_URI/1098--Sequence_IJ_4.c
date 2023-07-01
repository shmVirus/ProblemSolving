#include<stdio.h>
int main(void)
{
    float I, J;
    for(I=0;I<=2.2;I+=0.2)
    {
        if (I==0.0)
        {
            J = 1;
            printf("I=%.0f J=%.0f\n",I,J++);
            printf("I=%.0f J=%.0f\n",I,J++);
            printf("I=%.0f J=%.0f\n",I,J++);
            J=0.2;
        }
        else if (I>0.0 && I<1.0)
        {
            printf("I=%.1f J=%.1f\n",I,J+1);
            printf("I=%.1f J=%.1f\n",I,J+2);
            printf("I=%.1f J=%.1f\n",I,J+3);
            J+=0.2;
        }
        else if (I==1.0)
        {
            J = 2;
            printf("I=%.0f J=%.0f\n",I,J++);
            printf("I=%.0f J=%.0f\n",I,J++);
            printf("I=%.0f J=%.0f\n",I,J++);
            J = 1.2;

        }
        else if (I>1.0 && I<2.0)
        {
            printf("I=%.1f J=%.1f\n",I,J+1);
            printf("I=%.1f J=%.1f\n",I,J+2);
            printf("I=%.1f J=%.1f\n",I,J+3);
            J+=0.2;
        }
        else
        {
            J = 3;
            printf("I=%.0f J=%.0f\n",I,J++);
            printf("I=%.0f J=%.0f\n",I,J++);
            printf("I=%.0f J=%.0f\n",I,J++);

        }
    }
    return 0;
}
