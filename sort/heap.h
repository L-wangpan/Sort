#include<stdio.h>
#include<stdlib.h>
void heapAdust(int *heap,int s,int l);
void HeapBuild(int* heap,int l);
void HeapSort(int *heap,int l);
void swap(int *x,int *y){
	int t=0;
	t=*x;
	*x=*y;
	*y=t;
}
void print(int *a,int n){
	int i=0;
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
	
}
void heapAdust(int *heap,int s,int l){
	int temp=heap[s];
	int lchild = 2*s+1;
	int rchild=lchild+1;
	int max=s;
	printf("%d %d\n",lchild,rchild);
	if(lchild<l){
		if(lchild<l && heap[lchild]>heap[max]){

			max=lchild;
			
			printf("leftmax = %d \n",max);
		}
		if(heap[rchild] > heap[max] && rchild<l){
			
			max=rchild;

			printf("rightmax = %d \n",max);

		}
		if(max!=s){

			printf("heap[s] = %d heap[max]=%d\n",heap[s],heap[max]);
			swap(&heap[s],&heap[max]);
			heapAdust(heap,max,l);		
		
		}

	}
	
}
void HeapSort(int *heap,int l){
	int i,temp;
	HeapBuild(heap,l);
	for(i=l-1;i>0;--i){
		
		temp = heap[i];
		heap[i]=heap[0];
		heap[0]=temp;
		heapAdust(heap,0,i);
		
	}
	print(heap,10);
}
void HeapBuild(int* heap,int l){
	int i=0;
	for(i=(l-1)/2;i>=0;--i){

		heapAdust(heap,i,l);	
	//	print(heap,10);
	}

}
