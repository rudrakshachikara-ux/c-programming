#include <stdio.h>

int main() 
{
	int s1,s2,s3;
	printf("Enter the value of s1");
	scanf("%d", &s1);
	printf("Enter the value of s2");
	scanf("%d", &s2);
	printf("Enter the value of s3");
	scanf("%d", &s3);
	if ((s1+s2>s3)&&(s2+s3>s1)&&(s1+s3>s2))
{	 
    printf("valid traingle");
}
    else
{
    printf("not valid traingle");
}
return 0;
}


