


#include <stdio.h>


int main()

{
    
      int i,work_time,over_time,overtime_pay=0;
  
      for(i=1;i<=10;i++)
    
      {
        
          printf("enter the work time");
        
          scanf("%d",&work_time);
       
          if(work_time>40)
        
          {
            
              over_time=work_time-40;
            
              overtime_pay=overtime_pay+(12*over_time);
      
          }
    
          printf("pay the total ammount=%d\n",overtime_pay);
    
      }


   
 return 0;

}

