#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main( void )
{
	int input_num;
	int random_num;
	srand(time(NULL));	
	random_num = rand() % 1000;

	printf("Input 3 digits number : ");
	scanf("%d", &input_num);
	
	printf("Your number is %d\n", input_num);
	printf("Random num is %d\n", random_num);
	
	return 0;
}
