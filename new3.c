#include<stdio.h>
int main(){
    int i, a[5];
    for ( i = 0; i < 5; i++)
    {
        printf("Enter the intger value:\n");
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < 1; i++)
    {
        printf("This is fast value:%d\n",a[0]);
        printf("This is secend value:%d\n",a[1]);
         printf("This is three value:%d\n",a[2]);
          printf("This is four value:%d\n",a[3]);
           printf("This is fave value:%d\n",a[4]);

    }
    
    


    return 0;
}