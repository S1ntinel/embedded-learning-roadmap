 #include <stdio.h>                                                                        
                                                                                            
  int main()                                                                                
  {
      int temp = 30;                                                                        
                                                                                            
      if (temp >= 30)                                                                       
      {                                                                                     
          printf("温度偏高: %d\n", temp);                                                   
      }                                                                                     
      else
      {
          printf("温度正常: %d\n", temp);
      }

      return 0;
  }