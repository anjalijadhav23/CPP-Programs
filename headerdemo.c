#include"marvellous.h"

int main()
{
    struct Demo obj;
    int no=11;
    float Radious=30.6f;
    float Area=PI*Radious*Radious;
    IPTR ptr=&no;
    printf("Area is:%f\n",Area);
    printf("Value of no is :%d\n",*ptr);

    return 0;
}