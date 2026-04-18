#include <stdio.h>

  int main()
  {
      int mode = 0;

      for (int i = 0; i < 6; i++)
      {
          mode = mode + 1;

          if (mode > 2)
          {
              mode = 0;
          }

          printf("%d\n", mode);
      }

      return 0;
  }