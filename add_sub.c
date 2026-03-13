#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b,iadd,isub;
    float c,d,fadd,fsub;
    scanf("%d %d",&a,&b);
    scanf("%f %f",&c,&d);
    iadd=a+b;
    isub=a-b;
    fadd=c+d;
    fsub=c-d;
    printf("%d %d\n",iadd,isub);
    printf("%.1f %.1f",fadd,fsub);
    
    
    return 0;
}
