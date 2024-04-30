#include<stdio.h>
int main(){
int first_number=0;
int second_number=1;
int next;
int n;
// printf("%d %d",first_number,second_number);
printf("Enter your numder");
scanf("%d",&n);

for(int x=1; x<=n;x++){
next=first_number+second_number;
first_number=second_number;
second_number=next;
printf("%d\n",next);

}


}