#include <stdio.h>

int main(void)
{
    
    int i = 0;
    int a;
    int b = 10;
    
    do {
        scanf("%d", &a);
        i++;
        
        if(a>b) {
            printf("%d>?\n", a);
        } else if(a<b){
            printf("%d<?\n", a);
        } else{
            printf("%d==?\n", a);
            printf("%d\n", i);
        }
    } while(a!=b);

    return 0;
}
