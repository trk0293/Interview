/* words can be started at new line or after a space character . watch out for continous - spaces and  new-lines. T(n) = o(n), s(n) - 2 */


#include<stdio.h>
#include<stdlib.h>


int main(int argc, const char *argv[]) {

	FILE *fptr;
	if(argc >=2){       	
	if((fptr=fopen(argv[1],"r")) == NULL){
		printf(" Unable to read the file. Exiting\n");
		return -1;
	}}
	else {
		printf("Input a txt file \n");
		return -2;
	}
	int ch;
	int previous_ch;
	int wc;
	int lc;
	int bc;
	wc=0;bc=0;lc=0;
	ch =fgetc(fptr);
	previous_ch = '\n';
	while(ch != EOF){
	bc++;
	if(ch == '\n')lc++;
	if(previous_ch == '\n'){
		if(ch!= ' ' && ch!= '\n')wc++;
	}
	if(previous_ch == ' '){
		if(ch!= ' ' && ch!= '\n')wc++;

	}
	previous_ch = ch;
	ch = getc(fptr);
	}
	printf("bc : %d , lc : %d , wc : %d\n",bc,lc,wc);
	return 0;
}
