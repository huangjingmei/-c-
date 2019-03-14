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
	FILE *fp,*wf; /*定义输出数据文件，输入数据文件*/
	fp = fopen("D:\\PromgarmFile(x86)\\Microsoft Visual Studio\\MyProjects\\66\\input.txt","r");
	while( fscanf(fp,"%d", &x ) ==1 )/*读取input.txt文件，获取数据*/
	{
		d=x;/*把input.txt文件中的数据赋值给变量b*/
	}
	fclose(fp);
	printf("input.txt中读取数据为：%d\n",d);
	printf("%d有%d中不同的分解模式\n",d,f(d));

	wf=fopen("D:\\PromgarmFile(x86)\\Microsoft Visual Studio\\MyProjects\\66\\output.txt","w");/*读取output.txt文件，并写入运行结果*/
	fprintf(wf,"%d",f(d));/*写入运行结果*/
	printf("output.txt中的数据为：%d\n",f(d));
	fclose(wf);
	return 0;
}
