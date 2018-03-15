//hamming code for error detection and correction program in class 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
	int data[7],rec[7],c,c1,c2,c3,i;
	printf("Enter the message bit one by one: ");
	scanf("%d%d%d%d",&data[0],&data[1],&data[2],&data[4]);
	data[6]=data[0]^data[4]^data[2];
	data[5]=data[0]^data[4]^data[1];
	data[3]=data[0]^data[2]^data[1];
	printf("The Encoded bit are given below\n");
	for (int i = 0; i < 7; i++)
		printf("%d",data[i]);
	printf("Enter the recieved data one by one: ");
	for (int i = 0; i < 7; i++)
		scanf("%d",&rec[i]);
	c1=rec[6]^rec[2]^rec[4]^rec[0];
	c2=rec[5]^rec[1]^rec[4]^rec[0];
	c3=rec[3]^rec[1]^rec[2]^rec[0];
	c=c3*4+c2*2+c1;
	if (c==0)
		printf("\nNo Error\n");
	else
	{
		printf("Error at position: %d",c);
		if(rec[7-c]==0)
			rec[7-c]=1;
		else
			rec[7-c]=0;
		printf("\nThe correct message is: ");
		for (int i = 0; i < 7; i++)
			printf("%d",rec[i]);
	}
	printf("\n");
}
