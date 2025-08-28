#include <stdio.h>

int main() 
{
    int x1,y1,x2,y2,x3,y3;
    scanf("%d %d",&x1, &y1);
    scanf("%d %d",&x2, &y2);
    scanf("%d %d",&x3, &y3);
    if ((x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2))==0)
    printf("collinear");
    else
    printf("not collinear");
    return 0;
}
    
    


