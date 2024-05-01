#include<iostream>
#include<string>
using namespace std;


int Iscin(char ch, string str){//判断字符ch是否在字符串“str”中。，返回1，表示在字符串中。

   int i,length,flag = 0;
   length = str.length();
   if(length!=0){

     for(i=0;i<length;i++){

      if(str[i]==ch){
          flag = 1;
          break;
      }
     }
   }

 return flag;
}


int main(){

   int i;
   i = Iscin('a',"");
   cout<<i<<endl;

   string s = "w";
    sort(s.begin(),s.end());
    cout<<s<<endl;
   return 0;
}
