/* Suraj drives first 120 km in 2 hrs and next 180 km in 4 hrs. What is his average speed for the entire trip in km/hr */

#include <stdio.h>

int main()
{
    int first_distance = 120, next_distance = 180, time_1 = 2, time_2 = 4, avg_speed, total_time_taken, total_distance_travelled;

    total_distance_travelled = first_distance + next_distance;
    total_time_taken = time_1 + time_2;
    avg_speed = total_distance_travelled / total_time_taken;

    printf("Average speed for the entire trip : %d km/hr\n", avg_speed);
    return 0;
}