
#include <stdio.h>
#include <math.h>

unsigned long long value=3;
int prime=1;
unsigned int remain; 
unsigned long long divisor=2; 
unsigned long long sum=0;


int main(void){

	while (value < 2000000){

		remain = value%divisor;
		divisor++;
		if (remain == 0){
			value += (unsigned long long)2;
			divisor = (unsigned long long)2;
		}
		if (divisor == value){
			sum = sum + value;
			divisor = 2;
			value += 2;
		}

	}
	sum = sum + (unsigned long long)2;
	printf("%llu", sum);
	scanf_s("%i", remain);
}