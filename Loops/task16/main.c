#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Atoi(char *);
int main()
{
	srand(time(NULL));	// every time genereates new number

	int secret_number = rand() % 100;
	
	char guess[10] = {'\0'};

	while(1){
		printf("Guess the secret number: (q to quit): ");
		scanf("%s", guess);
		if(guess[0] == 'q' || guess[0] == 'Q'){
			printf("You quit the game: \n");
			return 0;
		}
		int num = Atoi(guess);

		if(num == secret_number){
			printf("Congratulations! You won the game!\n\n");
			break;
		}
		else if(num > secret_number){
			printf("Too hight: The secret number is smaller: \n\n");
		}
		else if(num < secret_number){
			printf("Too low: The secret number is bigger: \n\n");
		}

	}
	return 0;
}
