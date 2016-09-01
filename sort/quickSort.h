
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
