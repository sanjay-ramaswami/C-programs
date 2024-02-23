#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
    char questions[][100] = {"1. Which one of the following river flows between Vindhyan and Satpura ranges?",
                             "2. The Central Rice Research Station is situated in?",
                             "3. The metal whose salts are sensitive to light is?"};

    char option[][100] = {"A. Narmada", "B.Mahanadi", "C.Son", "D.Netravati",
                          "A. Chennai", "B. Cuttack", "C.Bangalore", "D. Quilon",
                          "A.Zinc", "B.Silver", "C. Copper", "D.Aluminum"};

    char answer[3] = {'A','B','B'};

    int score = 0;
    char guess;
    int i;

    for (i =0; i < sizeof(questions) / sizeof(questions[0]); i++)
    {
        printf("*******************************************************************************\n");
        printf("%s \n", questions[i]);
        printf("******************************************************************************\n");

        for (int j = (i * 4); j < (i * 4) + 4; j++)
        {
            printf("%s \n", option[j]);
        }

        printf("guess : ");

        scanf("%c\n",&guess);
       // scanf("\n");

        guess = toupper(guess);

        if (guess == answer[i])
        {
            printf("CORRRECT \n ");
            score++;
        }
        else
        {
            printf("WRONG \n");
        }
    }

    printf("TOTAL SCORE : %d/%d \n", score, sizeof(questions) / sizeof(questions[0]));

    return 0;
}