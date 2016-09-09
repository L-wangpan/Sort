#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int Ispalindrome(char *s,int n){
		int i=0,j=n-1;
		for(;i<j;i++,j--){
			if(s[i]==s[j]){
				continue;
			}
			else{
				break;
			}
		}
		if(i==j||i>j){
			return 1;
		}
		return  0;
}
int GuResult(int n){
	int i=0,sum=0,j=1,k=0;
	while(i<n){
		if(k<j){
			sum+=1;
			k++;
		}
		else{
			sum--;
			j++;
			k=0;
		}
		i++;
	}
	return sum;
}
int main(){
	char a[100];
	int n;
	printf("请输入字符串：");
	scanf("%s",a);
	n=strlen(a);
	if(Ispalindrome(a,n)){
		printf("回文数\n");
	}
	else{
		printf("不是回文数\n");
	}
	printf("%d\n",GuResult(8));
}