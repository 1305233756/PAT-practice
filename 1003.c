#include <stdio.h>
#include <string.h>
int if_only_PAT(char *str){
	int i,p=0,t=0,a=0;
	for(i=0;i<strlen(str);i++){
		if(str[i]!='P'&&str[i]!='A'&&str[i]!='T')
			return 0;
		if(str[i]=='P'&&t==0)
			p++;
		if(str[i]=='A')
			a++;
		if(str[i]=='T')
			t++;
	}
	if(p==1&&a>0&&t==1)
		return 1;
	else
		return 0;
}

int main(){
	int n;//ѭ���Ĵ���n 
	int l,r,m;//�����м��A������
	char str[9][100];//����n��������ַ��� 
	int i;//ѭ�������ļ����� 
	scanf("%d",&n);
	fflush(stdin);
	for(i=0;i<n;i++){
		gets(str[i]);
		fflush(stdin);
	}//����n���ַ��� 
	for(i=0;i<n;i++){
		if(!if_only_PAT(str[i])){
			printf("NO");
			if(i!=n-1)
				printf("\n");
			continue;
		}
		l=strchr(str[i],'P')-str[i];
		r=strlen(str[i])-(strchr(str[i],'T')-str[i]+1); 
		m= strchr(str[i],'T')-strchr(str[i],'P')-1;
		if(l==0&&r==0)
			printf("YES");
		else if(r%l==0&&r/l==m)
			printf("YES");
		else printf("NO");
		if(i!=n-1)
				printf("\n");
	}
} 
