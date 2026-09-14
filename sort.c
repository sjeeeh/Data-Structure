#include<stdio.h>
void main(){
	int i,j,a,n,nums[30];
	printf("Enter the size of array : ");
	scanf("%d",&n);
	printf("Enter the numbers : ");
	for(i=0;i<n;i++)
		scanf("%d",&nums[i]);
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
			if(nums[i]>nums[j]){
				a=nums[i];
				nums[i]=nums[j];
				nums[j]=a;}
	printf("Array after sort...\n");
	for(i=0;i<n;i++)
		printf("%d  ",nums[i]);
}
