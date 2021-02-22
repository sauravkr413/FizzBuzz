//this is n player game where each player has to say
/*
Fiz: if no. is multiple of 3
Buz: if no. is multiple of 5
FizBuz: if no. is multiple of both 3 and 5
*/
#include<stdio.h>
int main(){
int t;
printf("Enter a number of turns:");
scanf("%d",&t);
for(int n=1;n<=t;n++){
	if(n%3==0 && n%5==0)
		printf("FizzBuzz\n");
	else if(n%3==0)
		printf("Fizz\n");
	else if(n%5==0)
		printf("Buzz\n");
	else
		printf("%d\n",n);
}
return 0;
}
