#include"swap.h"
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
void chooseSort(int *a,int n,int gap){
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
