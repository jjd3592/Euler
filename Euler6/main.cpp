
#include <stdio.h>
#include <math.h>

long long sumSquare=0;
long long squareSum=0;
long long difference;

int main(void){

	for (int i = 1; i <= 100; i++){

		sumSquare = sumSquare + i*i;
		squareSum = squareSum + i;
	}

	squareSum = squareSum*squareSum;
	difference = squareSum - sumSquare;

	printf("%d", difference);
	scanf_s("%i", squareSum);
	
}