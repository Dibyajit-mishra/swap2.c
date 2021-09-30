#include<stdio.h>
main()
{int a=0,b=0;
printf("enter value of a and b");
scanf("%d %d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("\n after swap a=%d b=%d",a,b);
return 0;
}
