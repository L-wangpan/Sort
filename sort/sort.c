#include"heap.h"
#include"shell.h"
#include"quickSort.h"

int main(){
	int a[10]={5,45,9,34,55,23,67,20,13,9};	
	//quikSort(a,0,9);
	//chooseSort(a,10);
//	chooseSortOptimization(a,10);
//	HeapSort(a,10);
	shellSort(a,10);
	return 0;
}
