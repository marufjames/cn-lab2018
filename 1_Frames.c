//displaying frames from sender & reciever

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void rcv(char * msg)
{
	printf("Frames: %s\n",msg );
}

void snd(int n)
{
	int i,len;
	char str[234]=" ",msg[123],temp[123];
	for(i=0;i<n;i++)
	{
		printf("Enter frame %d data: ",i+1 );
		scanf("%s",msg);
		len = strlen(msg);
		sprintf(temp,"%d %s\t",len,msg);
		strcat(str,temp);
	}
	printf("Sending to reciever.......\n" );
	rcv(str);
}

int main()
{
	int n;
	printf("Enter the number of frames: ");
	scanf("%d",&n);
	snd(n);
}
