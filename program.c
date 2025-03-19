#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int n;
    int no_of_guesses=0;
    srand(time(0));
    // Generate a random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;
    do{
        printf("Guess a number between 1 and 100:");
        scanf("%d",&n);
        no_of_guesses++;
        if(randomNumber>n){
            printf("Try a higher number\n");
        }
        else if(randomNumber<n){
            printf("Try a lower number\n");
        }
    }while(randomNumber !=n);
    printf("You guessed the number in %d guesses! Congratulations!!",no_of_guesses);
    return 0;
}