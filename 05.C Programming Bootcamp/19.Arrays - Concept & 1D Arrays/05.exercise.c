#include <stdio.h>
#include <stdlib.h>

//Weather Station 
//1.Average Temperature
//2.Hottest Temperature
//3.Coldest Temperature
#define SIZE 7


int main()
{
    float temperature[SIZE];
    int i;
    float sum = 0.0;
    float average_temp; 
    int hottest_day = 0;
    int coldest_day = 0;

    for(i = 0; i < SIZE; i++)
    {
        printf("Enter the temperature at day %d: ", i + 1);
        scanf("%f", &temperature[i]);
    }
    
    for(i = 0; i < SIZE; i++)
    {
        sum += temperature[i];

        if(temperature[hottest_day] < temperature[i])
        {
            hottest_day = i;
        }
        if(temperature[coldest_day] > temperature[i])
        {
            coldest_day = i;
        }
    }
    average_temp = sum / SIZE;
    
    printf("The average temp = %.2f \n", average_temp);
    printf("The hottest day of the week was at day %d \n", hottest_day + 1);
    printf("The coldest day of the week was at day %d \n", coldest_day + 1);

    return 0;
}
