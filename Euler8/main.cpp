
#include <stdio.h>


unsigned int number[13];
unsigned int num;
FILE *infile;
int main(void){
	errno_t er;

	er = fopen_s(&infile,"Number.txt","r");
	for (int i = 0; i < 3; i++){
		fscanf_s(infile, "%s", &num);
		number[i] = num;
		printf("%s", number[i]);

	}
	fclose(infile);
	scanf_s("%i", number);
}