/*
 * main.c
 *
 *  Created on: Mar 12, 2019
 *      Author: ebald
 */

#include <stdio.h>
int size; //size of the table
int value; //calculated value

void userInput(){
	printf("Please enter the multiplication table size: ");
				fflush(stdout); //ECLIPSE BUG
				scanf("%d", &size); //the user inputs their value

}

int displayTable(){
//print header row
	printf("   ");
	for (int x =0; x<size; x++){
		if(x<9){
			printf("   %d",x+1);
		}
		else{
			printf("  %d",x+1);
		}

	}
	printf("\n");
//print +--- row

	printf("  +---");
	for(int x = 0; x<size;x++){
		printf("----");
	}

	printf("\n");
//now we print across for the table
	for (int x=0; x<size; x++){
		if((x+1)<10){
			printf(" %d|", x+1);
		}
		else{
			printf("%d|", x+1);
		}

	for (int y=0; y<size;y++){
		value = (x+1)*(y+1);
		if(value<10){
		printf("   %d", value);
		}
		else if(value<100){
			printf("  %d", value);
		}
		else{
			printf(" %d", value);
		}

	}
	printf("\n");


	}



	return 0;

}




int main(){
	userInput();
	displayTable();

	return 0;
}




