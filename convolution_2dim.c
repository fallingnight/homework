// 卷积（Convolution）是当前神经网络的基础算法
// 卷积的原理不复杂，网上有大量资料和实现，包括C语言实现
// 大家自行设计一个卷积函数，输入一个向量和卷积核，输出卷积的结果
// 2021-11-21
#include<stdio.h>
#include<stdlib.h>

struct matrix{
long long m[100][100];
}A,B,C1,C2; 
void conv2(struct matrix A,struct matrix B,int n1,int m1,int n2,int m2)
{   int i,j,m,n;
for(i=0; i<n1+n2-1; i++){
        for(j=0;j<m1+m2-1;j++)
        {
            int temp = 0;
            for(m=0; m<n1; m++){
                for(n=0; n<m1; n++){
                    if((i-m)>=0&&(i-m)<n2&&(j-n)>=0&&(j-n)<m2){
                        temp+=A.m[m][n]*B.m[i-m][j-n];
                    }
 
        }
        }
            C1.m[i][j]=temp;
        }
    }
    for(i=0; i<n1; i++){
        for(j=0; j<m1; j++)
        {
            C2.m[i][j]=C1.m[i+(n2-1)/2][j+(n2-1)/2];
        }
    }
}

int main() {
	int n1,n2,m1,m2,i,j;
	char ress1[20];
	char ress2[20];
	printf("①请输入卷积数字个数（格式:NxM，N行M列）:\n");
    scanf("%s", ress1);
    sscanf(ress1,"%dx%d",&n1,&m1);
	printf("①请输入数值（N行M列）:\n");
	for (i=0;i<n1;i++){
		for(j=0;j<m1;j++){
		scanf("%lld",&A.m[i][j]);
	}
	}
	printf("②请输入卷积数字个数（格式:NxM，N行M列）:\n");
    scanf("%s", ress2);
    sscanf(ress2,"%dx%d",&n2,&m2);
	printf("②请输入数值（N行M列）:\n");
	for (i=0;i<n2;i++){
		for(j=0;j<m2;j++){
		scanf("%lld",&B.m[i][j]);
	}
	}
	conv2(A,B,n1,m1,n2,m2);
	printf("卷积结果:\n");
    for(i=0;i<n1;i++){
        for(j=0;j<m1;j++)
        {
            printf("%lld ",C2.m[i][j]);
        }
        	printf("\n");

    }

	return 0;
}
