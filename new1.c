#include<stdio.h>
int main(){
int x, a[3];
a[0]= 10;
a[1]= 20;
a[2]= 10;
x = a[0] + a[1];
printf("Fast value:%d\n",x);
a[0] =30;
x = a[0] + a[2];
printf("Secend value:%d\n",x);

    return 0;
}