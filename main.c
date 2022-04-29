#include <stdio.h>

int main()
{
    int guess,randomNumber,noOfGuesses,final,count=1,initial;
    randomNumber=5;
    printf("You want to choose number between 1 and what?:");
    scanf("%d",&final);
    initial=final;
    
    while(final>1){
        final=final/2;
        count+=1;
    }
    printf("\nI have chosen a number between 1 and %d which you must guess.\nYou have %d tries to guess the number.",initial,count);
    for (noOfGuesses=0;noOfGuesses<count;++noOfGuesses)
    {
       printf("\nGuess the number:");
        scanf("%d",&guess);
         if (guess==randomNumber)
         {
         printf("\nCongratulations you guessed it");
         return 7;
             
         }
    
         if (guess<0 || guess>initial)
         printf("The number is not between 1 and %d",initial);
         else if (guess>randomNumber)
         printf("%d is wrong, My number is less than that",guess);
         else  if (guess<randomNumber)
         printf("%d is wrong, My number is greater than that",guess);
    }
         printf("\nYou have had %d tries and failed. The number was %d.",count,randomNumber);
   
    return 0;
}







