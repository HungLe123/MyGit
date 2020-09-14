#include <stdio.h>


int g_size_1 = 0;
int count =0;


void BuildHR(unsigned int l_var_1)
{
	
	static int count1 = 1;
 	while(l_var_1>0)
	{
		printf("%s"," "); 
		l_var_1--;
	}
	
	for(count =0; count<count1-1; count++)
	{
		if((count == 0)|(count == (count1-2)))
		{
			printf("%s","* ");
		}
		else
		{
			printf("%s","  ");
		}
	}
	

	count1++;
	printf("\n%s","");    //xuong dong
}

int main ()
{
	int i= 0;
	int l_size_1 = 0;
	printf("%s"," Do dai canh cua tam giac :");
	scanf("%d",&g_size_1);
	printf("\n%s","");
	l_size_1 = g_size_1;
	for(; i<l_size_1;i++)
	{
		BuildHR(g_size_1);
		g_size_1 = g_size_1-1;	
	}
	
	for(count =0; count<l_size_1;count++)
	{
		printf("%s","* ");
	}
	return 0;
}
