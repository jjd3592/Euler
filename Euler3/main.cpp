
#include <stdio.h>
#include <math.h>
unsigned long long value = 34;
unsigned int i = 2;
unsigned long long x;
unsigned int check = 0;

char continues=1;
int main(void){

	while (continues == 1){
		       
				if (value%i == 0){
						i++;
						check = 1;
						printf("%i", i);
					}
	
				if (i == value && check == 1){
					continues = 0;
				}
			
			}

		

	    printf("%i", i);
		scanf_s("%i", &value);
}
