// This problem comes from https://adventofcode.com/2015/day/1 
// It solves both the first and second part of the problem
// It takes input from a file as the terminal input buffer has a hard limit which is samller than our input
// Save the input as a input.txt
// After compiling run it as $ ./06-09-25-AOC-2015-1 < input.txt 

#include <stdio.h>

int main(){

	int cfloor = 0; //current floor
    int charpos = 0; //character position
    int grflag = 0; //ground floor flag
    char c; 
	while ((c = getchar()) != EOF){
		if ( c == '(' ){
			++cfloor;
            ++charpos;
        }
		else if ( c == ')' ){
			--cfloor;
            ++charpos;
        }
        
        if (cfloor < 0 && !grflag)
            grflag = charpos;
	}
    printf("position when entered the basement = %d\n", grflag);
    printf("current floor = %d\n", cfloor);
}
