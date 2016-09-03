void merge(int *a,int *b,int left,int right,int middle);
void MergeSort(int *a,int *b,int left,int right){
	int middle;
	if(left<right){
		middle=(left+right)/2;
		MergeSort(a,b,left,middle);
		MergeSort(a,b,middle+1,right);
		merge(a,b,left,right,middle);
	}
}
void merge(int *a,int *b,int left,int right,int middle){
		
	int li=middle-left+1;
	int lj=right-middle;
	int i,j;
	int pos=0;
	for(i=left,j=middle;i<=middle&&j<right;i++,j++){
		if(a[i]>a[j]){
			b[pos++]=a[i];
		}
		else{
			b[pos++]=a[j];
		}
	}

	if(i>middle && j<right){
		while(j<right){
			b[pos++]=a[j++];
		}
	}
	
	if(i<=middle&&j>=right){
		while(i<=middle){
			b[pos++]=a[i++];
		}
	}

	pos--;
//	print(b,10);
}