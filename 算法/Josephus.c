#include<stdlib.h>
int Josephus(int m,int n){
	int i=0,j;
	int num=m;
	int count=0;
	int a[100]={0,0};
	for(;i<m;i++){
		a[i]=i+1;
	}
	i=0;
	while(num!=1){
		if(a[i]!=0){
			count++;
		}
		if(count%n==0){
			printf("%d ",a[i]);
			a[i]=0;
			count=0;
			
			num--;
		}
		if(i==m){
			i=0;
			continue;
		}
		i++;
	}
	for(i=0;i<m;i++){
		if(a[i]!=0){
			return a[i];
		}
	}
	return -1;
}
int main(){
	printf("\n%d\n",Josephus(6,3));
}