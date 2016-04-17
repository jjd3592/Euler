
#include <stdio.h>
#include <math.h>


int answer;
bool continues=1;
int check=0;
int main(void){

	unsigned int i=100;

	while (continues){

		for (int j = 1; j <= 20; j++){
			if (i%j == 0){
				check++;
			}
			else{
				break;
			}
		}
		if (check == 20){
			continues = 0;
			answer = i;
		}
		else{
			i=i+20;
			//printf("%i\n", i);
			check = 0;
		}
	}
	
	printf("%i", answer);
	scanf_s("%i", &check);
	

}