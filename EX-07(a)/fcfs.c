#include<stdio.h>
#include<string.h>
int main()
{
	int n,i;
	printf("how many processes?:");
	scanf("%d",&n);
	char name[n][20];
	int btime[n];
	for(i=0;i<n;i++)
	{
		printf("enter name:");
		scanf(" %s",name[i]);
		printf("enter burst time");
		scanf("%d",&btime[i]);
	}
	int ct[n],cta=0;
	for(i=0;i<n;i++)
	{
		cta+=btime[i];
		ct[i]=cta;
	}
	int bt=0;
	int bta=0;
	printf(" process\t waiting time\t turn around time\n");
	for(i=0;i<n;i++)
	{
		printf(" %s\t\t    %d\t\t      %d\n",name[i],bt,ct[i]);
		bt+=btime[i];
		bta+=bt;
	}
	printf("The Average Waiting time:%d\n", bta/n);
}
