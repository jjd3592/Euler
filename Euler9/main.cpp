

#include <stdio.h>
#include <math.h>


unsigned int a, b, c;
unsigned int sum;
unsigned int csquare;
unsigned int value;
unsigned int product;


int main(void){


	for (int i = 1; i <= 998; i++){
		for (int j = 1; j <= 998; j++){
			for (int k = 1; k <= 998; k++){

				sum = i + j + k;
				if ((i < j) && (j < k) && (sum == 1000)){

					value = i*i + j*j;
					csquare = k*k;
					if (csquare == value){
						product = i*j*k;
						a = i;
						b = j;
						c = k;
						int finsum = a + b + c;

					}
				}

			}
		}
	}
	printf("a= %i b= %i c= %i\nsum= %i\nproduct= %i", a, b, c, finsum, product);
	scanf_s("%i", value);
}