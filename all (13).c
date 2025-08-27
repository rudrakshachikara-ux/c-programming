#include <stdio.h>

int main() {
	// your code goes here
     int inp,y,m,r;
     printf("Enter the total number of days ");
     scanf("%d", &inp);
     y=inp/360;
     m=(inp-(y*360))/30;
     r=(inp-(y*360+m*30));
     printf("years=%d, months=%d, days=%d , y,m,r");
     return 0;
}
     

