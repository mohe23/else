#include<stdio.h>


void Prits(int Q[3][3],int Need[3][3],int Allocation[3][3],int length1,int length2)//��ӡ�����ѷ�����Դ������Ҫ��Դ���Լ�������Դ��ÿ�α仯��
 {
   int i,j;
   printf("�ѷ�����Դ\n");

    for(i=0;i<length1;i++)
    {
         for(j=0;j<length2;j++){
             printf("%d  ",Allocation[i][j]);
         }


        printf("\n");
    }


    printf("\n");


    printf("����Ҫ��Դ\n");
    for(i=0;i<length1;i++){
         for(j=0;j<length2;j++){
             printf("%d  ",Need[i][j]);
         }

        printf("\n");
    }

    printf("\n");


    printf("������Դ\n");
    for(i=0;i<length1;i++){
         for(j=0;j<length2;j++){
             printf("%d  ",Q[i][j]);
         }

        printf("\n");
    }



 }


int main()
{

   int a1[3][3]={3,5,4,4,2,3,7,3,2};
   int a2[3][3]={2,1,1,1,0,3,3,2,1};
   int a3[3][3]={0,0,0,0,0,0,0,0,0};

   Prits(a3,a2,a1,3,3);

   return 0;

}






