#include<stdio.h>
int main()
{
	int arr[10];
	printf("Enter the elements in the array : ");/*Entering the array elements*/
	printf("\n");
	int i;
	for(i=0;i<10;i++)
	scanf("%d", &arr[i]);
	
	printf("List of the elements before removal = ");/*Index number of the element to be removed (Enter by considering array starts from 1 not 0)*/
	for(i=0;i<10;i++)
	printf("%d", arr[i]);
	
	int num;
	printf("Enter the index number of the element to be removed = ");
	scanf("%d", &num);
	
	for(i=0;i<9;i++)
	{
		if(i>=num-1)
		arr[i]=arr[i+1];
	}
	
	for(i=0;i<9;i++)
	printf("%d", arr[i]);

return 0;
}
