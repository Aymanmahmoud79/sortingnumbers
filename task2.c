#include <stdio.h>

int main(void)
{
	
	int Arr[10];
	int i,j,temp;
	printf("enter your array:\n");
	for(i=0;i<10;i++)
	{
		printf("please enter element %d :",i+1);
		scanf("%d",&Arr[i]);
	}
	for(i=0;i<9;i++)
	{
		for(j=0;j<9-i;j++)
		{
			if(Arr[j]>Arr[j+1]){
				temp = Arr[j];
				Arr[j] = Arr[j+1];
				Arr[j+1] = temp;
				
			}
				
		}
		
	}
	for(i=0;i<10;i++)
	{
		printf("elements after sorting:");
		printf("%d\n",Arr[i]);
	}
	
}