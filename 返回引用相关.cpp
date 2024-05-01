#include<iostream>
using namespace std;

int* add(int a[],int n){
    int i;
    for(i=0;i<n;i++)
            a[i]++;

return a;
}


int main(){
     int w[5]={1,2,3,4,5};
     cout<<"w: "<<w<<endl;
     int j;
     w = add(w,5);
     for(j=0;j<5;j++)
        cout<<w[j]<<" ";
     cout<<endl;

return 0;
}
