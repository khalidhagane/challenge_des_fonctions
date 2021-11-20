#include <stdio.h>
#include <stdlib.h>
void add(int a,int b){
       int c;
       c=a;
       a=b;
       b=c;

       printf("voila la nouveau valeur de A est : %d\n",a);
       printf("voila la nouveau valeur de B est : %d",b);
    }
int main()
{
    int a,b;
    printf("ntrer la valeur A : ");
   scanf("%d",&a);

   printf("ntrer la valeur B : ");
   scanf("%d",&b);

     add(a,b);

    return (0);
}
