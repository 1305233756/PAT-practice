#include <stdio.h>
//#include <stdlib.h>
#include <string.h>
int main() {
	int numout=0; //��������Ľ�������ͣ�
	char str[100],strout[3];//���������10��10�η�һ����Ȼ�����ַ�����������Ľ�����ַ����� 
	int i;
	gets(str);//���̽����ַ���ֱ�����м� 
	for(i=0;i<strlen(str);i++){
		int a = str[i]-48;//ASCII��ת�� 
		numout += a;
	}//�ۼ�ÿһλ���� 
	sprintf(strout, "%ld", numout);//���ۼӺ�Ľ����Ϊ�ַ���strout 
//	printf("%s\n",strout);
	for(i=0;i<strlen(strout);i++){ //�����ַ����Ľ����ӡ����Ӧ��ƴ�� 
		int a=strout[i]-48;
		switch(a)	
		{
			case 0:
				printf("ling");
				break;
			case 1:
				printf("yi");
				break;
			case 2:
				printf("er");
				break; 
			case 3:
				printf("san");
				break; 
			case 4:
				printf("si");
				break; 
			case 5:
				printf("wu");
				break;
			case 6:
				printf("liu");
				break; 
			case 7:
				printf("qi");
				break; 
			case 8:
				printf("ba");
				break; 
			case 9:
				printf("jiu");
				break; 
		}
		if(i!=strlen(strout)-1)
			printf(" ");//�����һ�����ֶ��ӡһ���ո� 
	}	
} 
