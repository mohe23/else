#include<iostream>
using namespace std;


void Pr(int *b,int le){

   int i;
   for(i=0;i<le;i++)
     b[i]++;

   //return a;
     //cout<<a[i]<<endl;
}


int main(){

  int i,a[4];
  a[0]=1;
  a[1]=2;
  a[2]=3;
  a[3]=4;
  Pr(a,4);

  for(i=0;i<4;i++)
    cout<<a[i]<<endl;
 return 0;
}
