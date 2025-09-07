// This problem comes from https://adventofcode.com/2015/day/2
// It solves both the first and second part of the problem
// It takes input from a file as the terminal input buffer has a hard limit which is samller than our input
// After compiling run it as $ ./07-09-25-AOC-2015-2 < input07-06-25.txt 

#include <stdio.h>

int areaf(int a,int b,int c){
	int area = (2*a*b + 2*a*c + 2*c*b);
	int slack = a*b;
	if (slack > a*c)
		slack = a*c;
	if (slack > b*c)
		slack = b*c;
	return area + slack;
}

int rlenf(int a,int b,int c){
	int parl = 2*(a+b);
	if (parl > 2*(a+c))
		parl = 2*(a+c);
	if (parl > 2*(b+c))
		parl = 2*(b+c);
	int bowl = a*b*c;
	return parl + bowl;
}

int main(){

	int l, w, h;
	int area = 0;
	int rlen = 0;
	while ( scanf("%dx%dx%d", &l, &w, &h) != EOF ){
		area += areaf(l, w, h);
		rlen += rlenf(l, w, h);
	}
	printf("the total area of wrapping paper required = %d\n", area);
	printf("the total length of ribbon required = %d\n", rlen);
}
