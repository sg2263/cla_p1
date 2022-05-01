#include <stdio.h>
int main()
{
	int arr[20];
	int n,k;
	int max,pos,c=0;
	printf("enter the size of the array");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		
	}
	printf("enter the kth value");
	scanf("%d",&k);
	while (c<k)
	{
		max=0;
		pos=0;
	
		for(i=0;i<n-c;i++)
		{
			
			if (arr[i]>max])
			{
				max=arr[i];
				pos=i;
				
			}
		}
		
		arr[pos]=arr[n-1-c];
		arr[n-1-c]=max;
		
	
		
		c++;
	}
	printf("%d",arr[n-1-k]);
	}
	
	
	return 0;
}


