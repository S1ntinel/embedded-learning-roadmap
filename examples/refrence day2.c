#include <stdio.h>

  int main()
  {
      int led_state = 0;

      for (int i = 0; i < 4; i++)
      {
          if (led_state == 0)
          {
              led_state = 1;
          }
          else
          {
              led_state = 0;
          }

          printf("LED = %d\n", led_state);
      }

      return 0;
  }