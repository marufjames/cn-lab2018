//Byte Stuffing Program in C

#include <stdio.h>

void main()
{
	int a[15];
	int i,j,k,n, c = 0, pos = 0;
	printf("Enter the number of bytes: ");
	scanf("%d",&n);
	printf("Enter % d bytes: ",n );
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		if(a[i]==1)
		{
			c++;
			if(c==5)
			{
				pos = i+1;
				c = 0;
				for (j = n; i >= pos; j--)
				{
					k=j+1;
					a[k] = a[j];
				}
				a[pos] = 0;
				n+=1;
			}
		}
		else
			c = 0;
	}
	printf("\nData after byte Stuffing: \n");
	printf("0111100");
	for (int i = 0; i <n; i++)
		printf("%d",a[i] );
	printf("011110");
}
