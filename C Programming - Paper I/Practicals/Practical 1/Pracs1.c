/*Write a program to enter any number between 1 to 7 and display corresponding day of week using switch case.*/
#include <stdio.h>

int main()
{
    /* Declare integer variable to store week number */
    int week;

    /* Input week number from user */
    printf("Enter week number (1-7): ");
    scanf("%d", &week);

    switch(week)
    {
        case 1:
            /* If week == 1 */
            printf("Its Monday.\n");
            printf("Its a busy day.");
            break;
        case 2:
            /* If week == 2 */
            printf("Its Tuesday.");
            break;
        case 3:
            /* If week == 3 */
            printf("Its Wednesday.");
            break;
        case 4:
            /* If week == 4 */
            printf("Its Thursday.\n");
            printf("Feeling bit relaxed.");
            break;
        case 5:
            /* If week == 5 */
            printf("Its Friday.");
            break;
        case 6:
            /* If week == 6 */
            printf("Its Saturday.\n");
            printf("It is weekend.");
            break;
        case 7:
            /* If week == 7 */
            printf("Its Sunday.\n");
            printf("Hurray! Its holiday.");
            break;
        default:
            /* If week < 1 or week > 7 */
            printf("Um! Please enter week number between 1-7.");
    }
    return 0;
}

