
#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *fp;
	fp-fopen("activity.txt","w");
	{
		printf("\n Allocated Resources
				{ 0, 1, 0 }, // P0 	
				{ 2, 0, 0 }, // P1
				{ 3, 0, 2 }, // P2
				{ 2, 1, 1 }, // P3
				{ 0, 0, 2 }" ); //P4");
		exit(1);
		}
	{
		printf("\n The Maximum Need
				{ 7, 5, 3 }, // P0	
				{ 3, 2, 2 }, // P1
				{ 9, 0, 2 }, // P2
				{ 2, 2, 2 }, // P3
				{ 4, 3, 3 }") ; //P4");
		exit(1);
	}
	fprintf(fp, "%c",'A');
	fclose(fp);
	return 0;
}
