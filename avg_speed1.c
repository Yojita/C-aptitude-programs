/* A motorist travels one hour at an average speed of 45 kmph and next hour at an average speed of 65 kmph . Then what is the average speed */

#include <stdio.h>
int main()
{
    int avg_speed_1 = 45, avg_speed_2 = 65, avg_speed; 

    avg_speed = (avg_speed_1 + avg_speed_2) / 2;
    printf("Total average speed of the trip is : %d kmph\n", avg_speed);

    return 0;
}