#include<stdio.h>

int getSmall(int a,int b,int c)//返回3个数中的最小值。
{
    int small;
      small=a;

      if(small>b)
        small=b;
      else
        small=small;

        if(small>c)
          small=c;
        else
          small=small;

 return small;
}


int main(){

   int a,b,c;
   a=getSmall(5,9,21);
   b=getSmall(23,8,21);
   c=getSmall(43,32,12);

   printf("%d %d %d\n",a,b,c);
}


