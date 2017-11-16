#include <stdio.h>
#include <stdlib.h>
# define LIST_INIT_SIZE  100              // ˳���(Ĭ�ϵ�)�ĳ�ʼ�����������
# define LISTINCREMENT  10                // (Ĭ�ϵ�)�����ռ���
typedef struct {
    int  *elem;                      // �洢����Ԫ�ص�һά����
    int length;                           // ���Ա�ĵ�ǰ����
    int listsize;                         // ��ǰ�����������������intΪ��λ��
    int incrementsize;                   // �����ռ�������intΪ��λ��
} SqList; 
void InitList_Sq( SqList &L, int maxsize=LIST_INIT_SIZE,
                                 int incresize=LISTINCREMENT ) 
{      // ����һ���������Ϊmaxsize��˳��� L
     L.elem=(int *)malloc(maxsize*sizeof(int));
                         // Ϊ˳������һ���������Ϊ maxsize ������ռ�
     if(!L.elem)  exit(1);           // �洢����ʧ��
      L.length=0;                    // ˳����е�ǰ����Ԫ�ظ���Ϊ 0
      L.listsize=maxsize;            // ��˳����������maxsize������Ԫ��
      L.incrementsize=incresize;     // ��Ҫʱ������incresize��Ԫ�ؿռ�
}// InitList_Sq

int ListLength_Sq(SqList L)
 { 
      return L.length;
}// ListLength_Sq

int LocateElem_Sq( SqList L, int e) 
{  
   for(int i=0;i<L. length;i++)
    if(L.elem[i]==e)  return i;   // �ҵ������ж�������Ԫ��Ϊ�� i ��Ԫ��
   return -1;                     // �����Ա��в����������ж�������Ԫ��
 }//LocateElem_Sq

bool ListInsert_Sq(SqList &L, int i, int e)
{   // ��˳���L�ĵ�i��Ԫ��֮ǰ�����µ�Ԫ��e��
// �����е�ǰ�������㣬��Ԥ�������������
int j;
      if(i<0||i>L.length)  return false;            // iֵ���Ϸ�
      if(L.length>=L.listsize)  {                   // ��ǰ�洢�ռ������������ռ�
    L.elem=(int *)realloc(L.elem,(L.listsize+L.incrementsize)*sizeof(int));
         if(!L.elem) exit(1);                   // �洢����ʧ��
         L.listsize+=L.incrementsize;           // ��ǰ�洢��������
        }
         for(j=L.length;j>i;j--)                // ������Ԫ��֮���Ԫ������
L.elem[j]=L.elem[j-1];
         L.elem[i]=e;                           // ����Ԫ��e
         L.length++;                            // ����1
        return true;   
}// ListInsert_Sq

int main(){
	int n,i,j=0;
	scanf("%d",&n);
	int num[n];
	SqList l;
	InitList_Sq(l);	           //��ʼ��һ��˳��� 
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);	//�����i+1����
		while(num[i]!=2){
			if(num[i]%2==0)
				num[i]/=2;
			else
				num[i]=(3*num[i]+1)/2;
			if(LocateElem_Sq(L, num[i])!=-1)
				 ListInsert_Sq(L, j++, num[i]);
		} 
	}
	
	for(i=0;i<sizeof(fugai(num[0]));i++){
		printf("%3d",*(fugai(num[0])+i));
	}
}
