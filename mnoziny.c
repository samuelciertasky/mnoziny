#include <stdio.h>
#include <stdlib.h>
#define n 3

typedef struct{
	int s1[n],s2[n];
}SET;

SET *prienik(SET*s){
	int i,j;
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(s->s1[i]==s->s2[j]){
				printf("%d\t",s->s1[i]);
			}
		}
	}
}

SET *zjednotenie(SET*s){
	int i,j;
	
	for(i=0;i<n;i++){
	    printf("%d\t",s->s1[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(s->s1[i]=!s->s2[j]){
				printf("%d",s->s2[i]);
			}
		}
	}
}


int main(){
	SET *a;
	
	a=malloc(sizeof(SET));
	puts("prienik:");
	prienik(a);
	puts("\nzjednotenie:");
	zjednotenie(a);
}
