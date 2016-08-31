#include"heap.h"
void print(int *a,int n);
void swap(int *x,int *y);
int partition(int* a,int left,int right);

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
void chooseSortOptimization(int * a,int n){
	int i ,j , min ,max;  
	for (i=0 ;i <= n/2;i++) {    
		// ��������n/2��ѡ������   
		min = i; max = i ; //�ֱ��¼������С�ؼ��ּ�¼λ��  
		for (j= i+1; j<=n-i-1 ; j++) {  
			if (a[j] > a[max]) {   
				max = j ; continue ;   
			}    
			if (a[j]< a[min]) {   
				min = j ;   
			}     
		}    
		print(a,10);
		printf("i=%d %d %d\n",i,max,min);
		
		//�ý����������ɷ�������������Ч��
		if(max+min==n-1)
			swap(&a[n-i-1],&a[min]);
		
		else if(max==min&&i==max)
			;
		else{
			swap(&a[n-i-1],&a[min]);
			swap(&a[i],&a[max]);
		}
		print(a,10);
		printf("\n");
	}
	print(a,10);
}
void chooseSort(int *a,int n){
	int i=0,j=0;
	int max=0;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++)
		{
			if(a[j]>a[max]){
				max=j;
			}
		}
		swap(&a[max],&a[i]);
		print(a,10);
	}
}


int main(){
	int a[10]={5,45,9,34,55,23,67,20,13,9};	
	//quikSort(a,0,9);
	//chooseSort(a,10);
//	chooseSortOptimization(a,10);
	HeapSort(a,10);
	return 0;
}
