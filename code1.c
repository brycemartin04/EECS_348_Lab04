#include <stdio.h>

void football_score(int score){      /*creates the function to do the work for the scores*/
    for (int touchdowns2 = 0; touchdowns2 * 8 <= score; touchdowns2++){     /*Goes through all possible amount of touchdowns and 2 points*/
        for (int touchdowns1 = 0; touchdowns1 * 7 <= score; touchdowns1++){     /*Goes through all possible amount of touchdowns and 1 point*/
            for (int touchdowns = 0; touchdowns * 6 <= score; touchdowns++){    /*Goes through all possible amount of touchdowns*/
                for (int fg = 0; fg * 3 <= score; fg++){            /*Goes through all possible amount of field goals*/
                    for (int safety = 0; safety * 2 <= score; safety++){        /*Goes through all possible amount of safetys*/
                        int running_score = touchdowns2*8 + touchdowns1*7 + touchdowns*6 + fg*3 + safety*2;    /*adds all the scoring plays together*/

                        if (running_score == score){    /*If the scoring plays add up to the actual score, print it to the screen*/
                            printf(" %i Touchdowns + 2PT, %i Touchdowns + PAT, %i Touchdowns, %i Field Goals, %i Safetys\n",touchdowns2,touchdowns1,touchdowns,fg,safety);
                            
                        }
                    }
                }
            }
        }
    }
}

int main(){      /*Creates the main function*/
    int score;    /*Initializes the score variable*/

    while (1){               /*the loop that keeps asking user until user wants to stop*/
        printf("Enter 0 or 1 to STOP\n");   
        printf("Enter the NFL score: ");
        if (scanf("%i", &score) != 1) {       /*Makes sure user enters a integer*/
            printf("Invalid Input! Please enter a valid integer.\n");
            while (getchar() != '\n');      /*clears the previous input*/
            }

        else if (score < 0){
            printf("invalid score");
        }
        else if (score <2 ){    /*If user enters 0 or 1, stop the program*/
            break;
        }
        else{
        football_score(score);    /*call the function to calculate the scores*/
        }
    }


}