// This problem comes from https://adventofcode.com/2015/day/3
// It solves the second part of the problem
// It takes input from a file as the terminal input buffer has a hard limit which is samller than our input
// After compiling run it as $ ./08-09-25-AOC-2015-2 < input08-06-25.txt 

#include <stdio.h>
#include <stdlib.h>

void move(int *i, int *j, int arr[][1000], int c){
	if( c == '<' ){
			*j -= 1;
			arr[*i][*j] = 1;
		}
		else if( c == '>' ){
			*j += 1;
			arr[*i][*j] = 1;
		}
		else if( c == '^' ){
			*i -= 1;
			arr[*i][*j] = 1;
		}
		else if( c == 'v' ){
			*i += 1;
			arr[*i][*j] = 1;
		}
}

int main(){
	int arr[1000][1000] = {0};
	int roboi = 500 , roboj = 500;
	int santi = 500 , santj = 500;
	arr[500][500] = 1;
        int c, d = 1;
	while( (c = getchar()) != EOF && c != 'x'){
		if(d%2 == 0)
			move(&roboi, &roboj, arr, c);
		else
			move(&santi, &santj, arr, c);
		d++;
	}
	int pre = 0;
	int a = 0,b = 0;
	for(a=0;a<1000;a++){
		for(b=0;b<1000;b++){
			pre += arr[a][b];
		}
	}
	printf("no of presents deliverd = %d",pre);
}
