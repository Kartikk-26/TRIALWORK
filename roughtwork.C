#include<stdio.h>
int main(){
	int i,j;
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			if(i==j){
				continue;
			}
		
			
			printf("%d%d",i,j);
		}
	}
}
