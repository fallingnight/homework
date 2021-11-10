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
for(i=2;i<31;i++){
	for(j=2;j<31;j++){
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
		if((isPrime(a[i]))==1&&(isPrime(b[i]))==1) 
printf("p=%d ,q=%d\n",a[i],b[i]);	
} 
return 0;
}
