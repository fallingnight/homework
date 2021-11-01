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

int main(){
int c,d,i,j;
long q;
c=0;
int a[10000],b[10000];
for(i=2;i<30;i++){
	for(j=2;j<30;j++){
		q=pow(i,j)+pow(j,i);
		if(q>2147483647){
		break; 
	}
	if(isPrime(q)==1){
		a[c]=i;
		b[c]=j;
		c++;
	} 
}}
for(i=0;i<c;i++){
printf("p=%d ,q=%d\n",a[i],b[i]);	
}
	//我觉得题目有点问题，p,q没给限制条件，但是如果p，q中的一个等于1，那样就得贴一张2^31-1内的所有素数-1的表了 ，输出没法看 ，， 
return 0;
}
