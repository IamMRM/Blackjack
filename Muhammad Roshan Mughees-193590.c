#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int i = 0;
	char turn[4];
	char turn2[4];
	int player = 0;
	int dealer = 0;
	int draw1 = 0;
	int draw2 = 0;
	int draw3 = 0;
	int draw4 = 0;
	int draw5 = 0;
	int draw6 = 0;
	srand(time(NULL)); // to give it any random value
	int sum = 0;
	int sum1 = 0;

	while (i != 1) {
		printf("Enter 1 to play. \n");
		scanf("%d", &i);
	}
	printf("Welcome to simple blackjack program!\n");
	draw1 = (rand() % 10) + 2;  // to assign it no.s between 2 and 11
	draw2 = (rand() % 10) + 2;
	draw3 = (rand() % 10) + 2;
	draw4 = (rand() % 10) + 2;
	draw5 = (rand() % 10) + 2;
	draw6 = (rand() % 10) + 2;

	printf("You drew %d and %d\n", draw1, draw2);
	sum1 = draw1 + draw2;
	printf("Your total is %d. \n\n", sum1);
	printf("The dealer has a %d showing, and a hidden card.\n", draw3);
	printf("His total is hidden,too.\n\n");
	turn[4] = 'hit';
	while (turn[4] = 'hit') {
		printf("Would you like to \"hit\" or \"stay\"?");
		scanf("%s", &turn2);
		if (strcmp(turn2, "hit") == 0) {

			printf("Your drew a %d.\n", draw5);
			sum1 = sum1 + draw5;
			printf("Your total is %d.\n\n", sum1);
			continue;
		}
		if (sum1 > 21) {
			printf("You are Busted as your total is %d!\nDEALER WINS!\n", sum1);
			getchar();
			return 0;     // so that it doesnt execute rest of the program
		}
		else if (strcmp(turn2, "stay") == 0) {
			break;
		}
	}

	sum = draw3 + draw4;
	printf("\n\nOkay, dealer's turn.\n");
	printf("His hidden card was %d. \n", draw4);
	printf("His total was %d.\n", sum);
	while (sum < 17) {    // as the condition was dealer to hit if sum is less than 17
		if (sum < 17) {
			printf("Dealer chooses to hit. \n");
			printf("He draws a %d. \n", draw6);
			sum = sum + draw6;
			printf("His total is %d.\n\n", sum);
		}
	}
	if (sum > 21) {
		printf("Dealer is busted as total is %d!\nYOU WIN!\n", sum);
		getchar();
		return 0;  // to not let it execute rest of the code
	}
	printf("Dealer stays.\n\n");
	printf("Dealer total is %d.\n", sum);
	printf("Your total is %d.\n\n", sum1);
	if (sum > sum1) {
		printf("DEALER WINS!\n");
	}
	else {
		printf("YOU WIN! \n");
	}
	getchar();
	return 0;
}
