#include<stdio.h>
int f(int n){
	int i;
	int count=0;
	if(n==1)
	return 1;
	else
	    for(i=2;i<=n;i++){
    		if(n%i==0)
    		   count+=f(n/i);
    	}
return count;
}



int main(){
	int d=0,x=0,n;
	FILE *fp,*wf; /*������������ļ������������ļ�*/
	fp = fopen("D:\\PromgarmFile(x86)\\Microsoft Visual Studio\\MyProjects\\66\\input.txt","r");
	while( fscanf(fp,"%d", &x ) ==1 )/*��ȡinput.txt�ļ�����ȡ����*/
	{
		d=x;/*��input.txt�ļ��е����ݸ�ֵ������b*/
	}
	fclose(fp);
	printf("input.txt�ж�ȡ����Ϊ��%d\n",d);
	printf("%d��%d�в�ͬ�ķֽ�ģʽ\n",d,f(d));

	wf=fopen("D:\\PromgarmFile(x86)\\Microsoft Visual Studio\\MyProjects\\66\\output.txt","w");/*��ȡoutput.txt�ļ�����д�����н��*/
	fprintf(wf,"%d",f(d));/*д�����н��*/
	printf("output.txt�е�����Ϊ��%d\n",f(d));
	fclose(wf);
	return 0;
}
