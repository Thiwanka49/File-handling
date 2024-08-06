#include<stdio.h>
int main(void)
{
	
	if (file_read()==1){
		printf("Error: file read");
	}
	
	
	return 0;
}

int file_read(){
	int number;	
	FILE *nw;
	nw=fopen("nw.dat","r");
	if(nw==NULL)
	{				
		return 1;
	}
	fscanf(nw,"%d\n",&number);
	printf("Number=%d",number);
	fclose(nw);
	
	
	
	return 0;	
}