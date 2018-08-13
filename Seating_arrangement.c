#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define randrange(N) rand() / (RAND_MAX/(N) + 1)
#define MAX 486        /* Values will be in the range (1 .. MAX) */
static int vektor[486];
int candidates[MAX];
int main (void)
{
	int i;
	srand(time(NULL));   /* Seed the random number generator. */
	for(i=0; i<MAX; i++)
		candidates[i] = i;
	for(i = 0; i < MAX-1; i++)
	{
	    int c = randrange(MAX-i);
	    int t = candidates[i];
	    candidates[i] = candidates[i+c];
	    candidates[i+c] = t;
	}
	for(i=0; i<486; i++)
		vektor[i] = candidates[i] + 1;
	int c=0;
	int z=MAX-1;
	printf("\t\t\t\tSCHOOL OF COMPUTER ENGINEERING\n\t\t\t\t\tKIIT UNIVERSITY\n\t\t\t\t\t  BHUBANESWAR\n");
	for(int k=0;k<18;k++)
	{
		printf("\t\t\t\t\tCLASS CS-%d\n",k+1);
	for(i=0;i<9;i++)
	{
	for(int j=0;j<6;j++)
	{
	if((i+j)%2==0)
	{
		if(c<MAX)
		{	if(vektor[c]<10)
				printf("140500%d\t",vektor[c]);
			if(vektor[c]>=10 && vektor[c]<100)
				printf("14050%d\t",vektor[c]);
			if(vektor[c]>=100)
				printf("1405%d\t",vektor[c]);
			c++;
		}
	}
	else
	{
		if(z>=0)
		{
			if(vektor[z]<10)
				printf("140600%d\t",vektor[z]);
			if(vektor[z]>=10 && vektor[z]<100)
				printf("14060%d\t",vektor[z]);
			if(vektor[z]>=100)
				printf("1406%d\t",vektor[z]);
			z--;
		}
	}
	printf("\t");
	}
	printf("\n");
	}
	printf("\n");
	}
	return 0;
}
