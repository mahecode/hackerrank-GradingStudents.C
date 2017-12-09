#include<stdio.h>
#include<stdlib.h>
int main(){
	int *grades;
	int *x;
	int i,n;
	printf("Enter size of array: ");
	scanf("%d",&n);
	printf("Enter elements:\n");
	grades = malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
		scanf("%d",&grades[i]);
	x = malloc(sizeof(int)*n);

	for(i=0;i<n;i++){
		if(grades[i]%5!=0){
			if(grades[i]>=38){
				x[i] = (grades[i]/5)*5 + 5;
			}
			else
				x[i] = grades[i];
		}
		else
			x[i] = grades[i];
	}
	for(i=0;i<n;i++){
		if(x[i]-grades[i]<3){
			printf("%d\n",x[i]);
		}
		else{
			printf("%d\n",grades[i]);
		}
	}
	return 0;
}