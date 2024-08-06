#include<stdio.h>
int main(void)
{
	FILE *fw;
	fw=fopen("example.dat","a");
	
	if (fw==NULL){
		
		printf("Loading failed\n");
	}
	
	fprintf(fw,"Thiwanka Lochana Jayalath\n");
	
	//fprintf(fw,"Lahiru Karunathilaka\n");
	fclose(fw);
	
	return 0;
}