void InsertSort(int *a,int gap,int n){
	int i=0,j;
	int x;
	for(i=gap;i<n;i++){
		  if(a[i] < a[i-gap]){          
              j = i-gap;     
              x = a[i];            
             a[i] = a[i-gap];           
             while(x < a[j]){      
                 a[j+gap] = a[j];  
                 j -= gap;              
             }  
             a[j+gap] = x;            
        } 

	}
	print(a,10);
}

void shellSort(int *a,int n){
	int gap;
	gap=n/2;
	for(;gap>0;gap=gap/2){
		InsertSort(a,gap,n);
	}
	print(a,10);
}
