/* A car travels a distance of 500 km in 10 hours . what is the speed of the car in km/hr */

#include <stdio.h>

int main()
{
    int distance = 500, time = 10, speed;

    speed = (distance / time);
    printf("The speed of the car in km/hr is : %d\n", speed);
}