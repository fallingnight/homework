//超级素数：它本身，各位数字的和，各位数字的平方和，都是素数。
//求 100~10000 内的所有超级素数，及它们的平均数。
// 2021-10-29

#include<stdio.h>
#include<math.h>
 
int isPrime(int x)
{int t;
t=(int)sqrt(x);
if(x<2){
	return 0;
} 
int i;
for(i=2;i<t+1;i++){
if(x%i==0){
return 0;
	
}	
}
	return 1;
	
}
int splitNumSum(int x){
	int b,c,d,e;
	c=x;
	d=0;
	int a[10];
	while(c>0){
		a[d++]=c%10;
		c/=10;
		
	}
	b=0;
	for(e=0;e<d;e++){
		b+=a[e];
	}
	return b;
}
int splitNumSum2(int x){
	int b,c,d,e;
	c=x;
	d=0;
	int a[10];
	while(c>0){
		a[d++]=c%10;
		c/=10;
		
	}
	b=0;
	for(e=0;e<d;e++){
		b+=a[e]*a[e];
	}
	return b;
}

int main()
{ int x,y,z,sum,i;
float average;
x,y,z=0;
int num[10000];
for(i=100;i<=10000;i++){
	if(isPrime(i)==1){
		num[x]=i;
		x++;
	}
}
int num2[x];
for(i=0; i<x;i++){
	if (isPrime(splitNumSum(num[i]))==1){
		num2[y]=num[i];
		y++;
	}
} 
int num3[y];
for(i=0; i<y;i++){
	if(isPrime(splitNumSum2(num2[i]))==1){
		num3[z]=num2[i];
		z++;
	}
	
}
sum=0;
for(i=0;i<z;i++){
	sum+=num3[i];
printf("%d ",num3[i]);
}
average=sum/z;
printf("\naverage=%g",average);
	
	
    return 0;
}
