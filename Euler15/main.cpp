
#include <stdio.h>
#include <math.h>

#define ROWPoints 2
#define COLPoints 2
char lattice[2][2];

int rowPos=0;
int colPos=0;
unsigned int solution= 0;

int main(void){
	for (int i = 0; i <= ROWPoints+1; i++){
		for (int j = 0; j <= COLPoints+1; j++){
			lattice[i][j] = 0;
		}
	}
	char continues=1;
	char check = 0;
	
	while (continues){

		rowPos = 0;
		colPos = 0;

		for (int i = 0; i <= (ROWPoints); i++){
			colPos++;

			
			if ((rowPos == ROWPoints) && (colPos == COLPoints)){
				solution += 1;
			}
			printf("%i %i %i\n%i %i %i\n%i %i %i\n\n%i %i %i\n\n", lattice[0][0], lattice[0][1], lattice[0][2],
				lattice[1][0], lattice[1][1], lattice[1][2],
				lattice[2][0], lattice[2][1], lattice[2][2], rowPos, colPos,solution);
			scanf_s("%i", &check);//*/
		}

		/*for (int i = 0; i <= ROWPoints; i++){
			for (int j = 0; j <= COLPoints; j++){
				if (lattice[i][j] == 1){
					check += 1;
					//printf("%i", colPos);
				}
			}
		}

		if (check == (ROWPoints+1)*(COLPoints+1)-1){
			//*/
	}
	
	printf("%i", solution);
	scanf_s("%i", rowPos);
}