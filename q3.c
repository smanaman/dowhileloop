#include<stdio.h>
int main(){
int a;
printf("Enter your number\n");
scanf("%d",&a);

do{
    if (a %2 ==0)
    {
        printf("%d\n",a);
     
    }
       a--;
}
while (a>=1);


 return 0;
}








