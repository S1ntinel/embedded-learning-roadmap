#include <stdio.h>

int main() 
{
    int led_state = 0;     
    for (int led_state = 0; led_state < 5; led_state++) 
    {
        if (led_state > 2)
        {
            led_state = 0;
        }
        else
        {
            printf("LED = %d\n", led_state);
        }
    }
    return 0;

}    