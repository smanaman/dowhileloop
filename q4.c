#include<stdio.h>
int main(){
int a,i;
int count=0;
printf("Enter any number i give you your number is prime or not prime\n\n");
scanf("%d",&a);
for(i=1;i<=a;i++){
    if(a % i ==0){
        count++;
    }
}if(count==2){
    printf("your number is prime");

}else{
    printf("your number is not prime");
}
}