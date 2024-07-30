// S = 1 + x + x2 + x3 + ......
#include<stdio.h>
main()
{
      int term=1,sum = 0, i = 1,x,n;
      clrscr();
      printf("Enter the values of x & n ");
      scanf("%d %d ",&x,&n);
      while(i<=n){
          sum = sum + term;
          term = term + x;
          i = i +1;
      }
      printf("Sum = %d",sum);
      getch();
}
