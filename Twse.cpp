#include<iostream>
#include<string>
using namespace std;


int Iscin(char ch, string str){//�ж��ַ�ch�Ƿ����ַ�����str���С�������1����ʾ���ַ����С�

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
