// This problem comes from https://adventofcode.com/2015/day/1
// It takes input from a file as the terminal input buffer has a hard limit which is samller than our input
// Save the input as a input.txt
// After compiling run it as $ ./06-09-25-AOC-2015-1 < input.txt 

#include <stdio.h>

int main(){

	int cfloor = 0; //current floor
    char c; 
	while ((c = getchar()) != EOF){
		if ( c == '(' )
			++cfloor;
		else if ( c == ')' )
			--cfloor;
	}
    printf("current floor = %d\n", cfloor);
}
