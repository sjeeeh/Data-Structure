#include<stdio.h>
void main(){
	int arr[10]={101,23,645,28,39,293,0,56,89,423};
	int i,l,s;
	if(arr[0]>arr[1]){
		l=arr[0];
		s=arr[1];
	}		
	else{
		s=arr[0];
		l=arr[1];
	}
	for(i=2;i<10;i++){
		if(l<arr[i]){
			s=l;
			l=arr[i];
		}
		else if(s<arr[i])
			s=arr[i];
	}
	printf("Largest: %d\nSecond largest: %d",l,s);
}

