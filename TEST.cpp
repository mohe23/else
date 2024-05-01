#include<iostream>
#include<string>
#include<algorithm>
using namespace std;


void func(int &m, int &n ){

    if(n > 1){

        m = m - 1;
    }
}


int main(){
   int a,b;
   string str="39023A4995";
  a = 5;
  b = 6;
  cout<<"Ç°£º"<<a<<endl;
  func(a, b);
  cout<<"hou: "<<a<<endl;
  string c = "1234555";
  cout<<c.length()<<endl;
  c = c.append(1, '3');
  cout<<c<<endl;
  sort(str.begin(), str.end());
  cout<<str<<endl;


  if("asd"=="asd")
    cout<<"asd"<<endl;

    cout<<"¦Å"<<endl;
   return 0;
}
