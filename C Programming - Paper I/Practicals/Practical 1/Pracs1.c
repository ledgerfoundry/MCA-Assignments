/*Write a program to enter any number between 1 to 7 and display corresponding day of week using switch case.*/
#include <stdio.h>

int main()
{
    /* Declare integer variable to store week number */
    int week;

    /* Input week number from user */
    printf("Enter week number (1-7): ");
    scanf("%d", &week);
    while (0>week && week>7)
    {
    printf("[ERROR] Number out of range : (1-7)");        
    scanf("%d", &week);
    }
    switch(week)
    {
        case 1:
            /* If week == 1 */
            printf("Monday.\n");
            break;
        case 2:
            /* If week == 2 */
            printf("Tuesday.\n");
            break;
        case 3:
            /* If week == 3 */
            printf("Wednesday.\n");
            break;
        case 4:
            /* If week == 4 */
            printf("Thursday.\n");
            break;
        case 5:
            /* If week == 5 */
            printf("Friday.\n");
            break;
        case 6:
            /* If week == 6 */
            printf("Saturday.\n");
            break;
        case 7:
            /* If week == 7 */
            printf("Sunday.\n");
            break;
        default:
            /* If week < 1 or week > 7 */
            printf("Jackpot! Your lucky to get here!!!");
    }
    return 0;
}

