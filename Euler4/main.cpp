

#include <stdio.h>
#include <math.h>
int product;
int value[6];
int largest=0;

char maxval[6];


int main(void){

	char check = 0;
	int k=-1;
	unsigned int tempProduct;
	for (int i = 100; i <= 999; i++){
		for (int j = 100; j <= 999; j++){
			
			product = j*i;
			tempProduct = product;


			while(tempProduct != 0){
				k++;
				value[k] = tempProduct % 10;
				tempProduct = tempProduct / 10;
				
			}
			//printf("%i\n", product);
			//printf("%i%i%i%i%i%i\n\n", value[0], value[1], value[2], value[3], value[4], value[5]);

			int l = 0;
			int cap = floor((float)(k / 2));
			while(l <= cap){

				if (value[l] == value[k - l]){
					 check = check + 1;
				}
				else
				{
					check = 0;
				}
				l++;
			} 


			if (check == (l))
			{
				if (product > largest){
					largest = product;
					//printf("%i\n", k);
					maxval[0] = value[0];
					maxval[1] = value[1];
					maxval[2] = value[2];
					maxval[3] = value[3];
					maxval[4] = value[4];
					maxval[5] = value[5];
					//printf("%i\n", largest);
					//printf("%i%i%i%i%i%i\n\n", maxval[0], maxval[1], maxval[2], maxval[3], maxval[4], maxval[5]);
				}
			}


			check = 0;
			k = -1;
		}
	}
	printf("%i\n", largest);
	printf("%i%i%i%i%i%i", maxval[5], maxval[4], maxval[3], maxval[2], maxval[1], maxval[0]);
	scanf_s("%i", &k);
}