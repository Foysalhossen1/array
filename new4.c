#include<stdio.h>
int main(){
    float a[5];
    int i;
    for ( i = 0; i < 5; i++)
    {
        printf("Enter the float value:\n");
        scanf("%f",&a[i]);
    }
    for ( i = 0; i < 1; i++)
    {
        printf("This is fast value:%f\n",a[0]);
        printf("This is secend value:%f\n",a[1]);
         printf("This is three value:%f\n",a[2]);
          printf("This is four value:%f\n",a[3]);
           printf("This is fave value:%f\n",a[4]);

    }
    
    


    return 0;
}