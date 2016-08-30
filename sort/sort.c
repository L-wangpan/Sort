#include<stdio.h>
#include<stdlib.h>
void print(int *a,int n);
void swap(int *x,int *y);
int partition(int* a,int left,int right);
void print(int *a,int n){
	int i=0;
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");

}

void swap(int *x,int *y){
	int t=0;
	t=*x;
	*x=*y;
	*y=t;
}
int partition(int* a,int left,int right){
	int key = a[left];
	
	while(left<right){
		while(left<right && key>=a[right])
			--right;
		swap(&a[left],&a[right]);
		while(left<right && key<=a[left])
			++left;

		swap(&a[left],&a[right]);
	printf("%d %d\n",left,right);
		
	}
	print(a,10);
	return left;
}

void quikSort(int *a,int low,int high){
	int provt;
	if(low<high){
		provt = partition(a,low,high);
		quikSort(a,low,provt-1);
		quikSort(a,provt+1,high);
	
	}
}
int main(){
	int a[10]={20,45,2,34,55,23,67,2,13,9};	
	quikSort(a,0,9);
	return 0;
}
