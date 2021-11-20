#include <stdio.h>
#include <stdlib.h>
int add(int A, int B)
{
    int S;
    S = A + B;
    return S;
}
int main()
{
    int x,y;

    printf("entrer le nombre x est : ");
    scanf("%d",&x);
    printf("entrer le nombre y est : ");
    scanf("%d",&y);

    add(x,y);
    printf("%d + %d = %d\n",x,y,add(x,y));
return 0;
}
