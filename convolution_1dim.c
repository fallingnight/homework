// 卷积（Convolution）是当前神经网络的基础算法
// 卷积的原理不复杂，网上有大量资料和实现，包括C语言实现
// 大家自行设计一个卷积函数，输入一个向量和卷积核，输出卷积的结果
// 2021-11-21
#include<stdio.h>
#include<stdlib.h>

void conv(int* x, int* y, int* z, int m, int n)
{   int i,j;
int x1[m+n-1];
	for (i=0;i<m+n-1;i++)
	{
		x1[i]= 0;
}
	for (i=0;i<m;i++){
		for (j=0;j<n;j++){
			x1[i+j]+=x[i]*y[j];
		}
	}

	for (i=0;i<m+n-1;i++) {
		z[i]=x1[i];
	}
}

int main() {
	int m,n,i,j;
	printf("①请输入卷积数字个数:\n");
	scanf("%d", &m);
	int x1[m];
	int *x;
	x=x1;
	printf("①请输入数值:\n");
	for (i=0;i<m;i++){
		scanf("%d",&x1[i]);
	}
	printf("②请输入卷积数字个数：\n");
	scanf("%d", &n);
int y1[n];
int *y;
y=y1;
	printf("②请输入数值：\n");
	for (i=0;i<n;i++){
		scanf("%d", &y1[i]);
	}
int z1[m+n-1];
int *z;
z=z1;
	conv(x,y,z,m,n);
	printf("卷积结果:\n");
	for (i=0;i<m+n-1;i++)
	{
		printf("%d ",z1[i]);
	}
	printf("\n");

	return 0;
}
