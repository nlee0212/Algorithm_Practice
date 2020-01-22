#include <stdio.h>

int main(void)
{
    int a,b;
    int dec;
    
    scanf("%d %d", &a, &b);
    
    if(a<0||b<0||a>10||b>10)
    {
        printf("error!\n");
        return 0;
    }
    
    dec=a-b;
    
    printf("%d\n", dec);
    
    return 0;
}
