#include<stdio.h>
#include<stdlib.h>
void sortArray_find_n(int* a,int l,int n){
	int i=0,j=l-1;
	int b[20],index=0;
	int count=0;
	for(i=0,j=l-1;i<j;){
		if(a[i]+a[j]==n){
			b[index++]=a[i];
			b[index++]=a[j];
			i++;
		}
		else if(a[i]+a[j]<n){
			i++;
		}
		else{
			j--;
		}
	}

	
	for(i=0;i<index;i++){
		count++;
		printf("%d ",b[i]);
		if(count%2==0){
			printf("\n");
		}
			
	}

}
int main(){
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	sortArray_find_n(a,10,10);
	return 0;
}