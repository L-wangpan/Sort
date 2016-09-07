#include<stdio.h>
#include<stdlib.h>
int Exisitstr(char *s,char *str,int l1,int l2){
	int i=0,j=0;
	for(i=0;i<l1;i++){
		if(s[i+j]==str[j]){
			j++;
			if(j==l2-1){
				return i;
			}
		}
		else{
			j=0;
		}
	}
	return -1;

}
int main(){
	char string[10]="abcddcherw";
	char str[3]="dch";
	printf("%d\n",Exisitstr(string,str,10,3));
	return 0;
}
