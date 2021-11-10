#include<stdio.h>
#define eps 1e-6     //给定一个精度epsilon 
#define ABS(VAL) (((VAL)>0)?(VAL):(-(VAL)))   //定义绝对值运算 

double mysqrt(double n){
	double  x0,x1;
	if(n==0){return 0;}
	if(n<0){return 0;} 
	x0=n/2;
	x1=(x0+n/x0)/2; //牛顿迭代法,x1=x0-f(x0)/f'(X0), x1=x0-(x0^2-n)/2x0=x0-x0/2+n/2x0=x0/2+n/2x0
	do{
		x0=x1;
		x1=(x0+n/x0)/2;
	}while(ABS(x1-x0)>eps);
return x1;
} 

int main () {
	double k,k2,k3;
	k3=mysqrt(2.0f);
printf("sqrt(2)=%lf",k3);
printf("\n请输入x:");
scanf("%lf",&k);
if(k<0) {
	
		printf("\nfalse");}
	else{
k2=mysqrt(k); 

printf("sqrt(%g)=%lf",k,k2); }


return 0;
}
