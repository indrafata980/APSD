#include <iostream>
#include <stdio.h>

using namespace std;
int main ()
{
    int a, b, c;
    for(a=0; a<5; puts(""),++a)
    {
        c=0;
        for(b=5; b>a; c+=2*(b--))
        {
            if(b>a+1) {
                printf("%d + ",2*b);
            }
            else {
                printf("%d ",2*b);
            }
        }
        for (int d = 0; d <= a; d++) printf("");
        printf("= %d",c);
    }
    printf("----------\n");
    printf("110\n");
    return(0);
}
