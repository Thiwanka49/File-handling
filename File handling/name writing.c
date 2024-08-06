#include<stdio.h>
int main(void)
{
	int name;
	FILE*nw;
	nw=fopen("nw.dat","w");
	if(nw==NULL)
	{
		printf("Cannot create file\n");
	}
	printf("Enter the value:");
	scanf("%d",&name);
	fprintf(nw,"%d\n",name);
	fclose(nw);
	return 0;
}