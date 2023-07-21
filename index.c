
#include <stdio.h>

#define TRUE_ANSWER 'c'

char name[100], email[100];
char choice;
int count = 0,ques=0;

int main() {
    printf("Enter your name:\n");
    scanf("%s", name);

    printf("Enter your mail-id:\n");
    scanf("%s", email);

    printf("General Knowledge Quiz:\n");

 
        printf("Q1. Which animal is known as the 'Ship of the Desert'?\n");
        printf("a. Horse\n");
        printf("b. Cow\n");
        printf("c. Camel\n");
        printf("d. Tortoise\n");
        printf("Enter your choice (a, b, c, d):\n");
        scanf(" %c", &choice);
        switch (choice) {
            case 'a':
            case 'b':
            case 'd':
                printf("It is not the true Answer.\n");
                printf("Ans=c.Camel\n\n");
                    ques++;
                break;

            case 'c':
                printf("It is the true answer.\n\n");
                count++;
                ques++;
                break;

            default:
                printf("You pressed the wrong button.\n");
                 printf("Ans=c.Camel\n\n");
                     ques++;
                break;
        }
    
    printf("Q2.How many days are there in a week?\n");
        printf("a. 1\n");
        printf("b. 5\n");
        printf("c. 9\n");
        printf("d. 7\n");
        printf("Enter your choice (a, b, c, d):\n");
        scanf(" %c", &choice);
        switch (choice) {
            case 'a':
            case 'b':
            case 'c':
                printf("It is not the true Answer.\n");
                printf("Ans=d.7\n\n");
                    ques++;
                break;

            case 'd':
                printf("It is the true answer.\n\n");
                count++;
                    ques++;
                break;

            default:
                printf("You pressed the wrong button.\n");
                 printf("Ans=d.7\n\n");
                     ques++;
                break;
        }
        
        printf("Q3.How many seconds make one hour?\n");
        printf("a. 1200\n");
        printf("b. 3600\n");
        printf("c. 2400\n");
        printf("d. 1000\n");
        printf("Enter your choice (a, b, c, d):\n");
        scanf(" %c", &choice);
        switch (choice) {
            case 'a':
            case 'c':
            case 'd':
                printf("It is not the true Answer.\n");
                printf("Ans=b.3600\n\n");
                    ques++;
                break;

            case 'b':
                printf("It is the true answer.\n\n");
                count++;
                    ques++;
                break;

            default:
                printf("You pressed the wrong button.\n");
                 printf("Ans=b.3600\n\n");
                    ques++;
                break;
        }


    printf("Your score: %d\n\n", count);
    if(ques==count)
    {
    	printf("Well Done.Keep It Bro\n");
	}
	else if(ques/2==count)
	{
		printf("Good but average\n");
	}
	else
	{
		printf("change Yourself");
	}
    return 0;
}
