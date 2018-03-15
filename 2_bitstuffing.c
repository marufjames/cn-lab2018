/*bit stuffing program
after consecutive 5 1's a 0 should be
stuffed with the frame*/

#include <stdio.h>
#include <string.h>

void main()
{
	int i,j, count = 0, len;
	char str[100];
	printf("Ener bit string: ");
	scanf("%s",str);
	for(i=0;i<strlen(str);i++)
	{
		count = 0;
		for(j=i;j<=i+5;j++)
			if(str[j]=='1')
				count++;
		if(count == 6)
		{
			len = strlen(str)+2;
			for(;len>=i+5;len--)
				str[len]=str[len-1];
			str[i+5]='0';
			i+=5;
		}
	}
	printf("\nAfter bit stuffing the string is: %s\n",str );
}
