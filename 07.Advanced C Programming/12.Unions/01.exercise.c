#include <stdio.h>

union car
{
    int i_value;
    float f_value;
    char c_value[40];
}car1, car2, *car3;

int main()
{
    union car car1;
    union car car2;
    union car *car3;
    printf("Memory size occupied by data: %zu\n", sizeof(car1));
    car1.f_value = 1.4;
    printf("%f",car1.f_value);
    
    return 0;
}