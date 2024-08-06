#include<stdio.h>
int main(void)
{
	
	
	if(read_values()==-1)
	{
		printf("Error file");
	}
	  
	return 0;
}

int write_values()
{
	int number;
	FILE *wv;
	wv=fopen("wv.dat","w");
	if(wv==NULL)
	{		
		return -1;
	}
	printf("Enter the values :");
	for(int i=0;i<=4;i++)
	{
		scanf("%d",&number);
		fprintf(wv,"%d\n",number);
	}
	
	fclose(wv);
	return 0;
}

int read_values()
{
	int i;
	int readValue;
	FILE *wv;
	wv=fopen("wv.dat","r");
	if(wv==NULL)
	{
		return -1;
	}
	/*for(int i=0;i<=4;i++)
	{
		
		fscanf(wv,"%d\n",&readValue);
		printf("%d\n",readValue);
	}*/
	
	/*
	while(feof(wv)) => while(feof(wv)==1)
	
	while(!feof(wv)) => while(feof(wv)==0)
	
	*/
	
	
	//while (!feof(wv))
	while(feof(wv)==0){
		i++;
		
		fscanf(wv,"%d\n",&readValue);
		printf("%d\n",readValue);	
	}
	
	
	fclose(wv);
	return 0;
}