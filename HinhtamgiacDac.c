#include <stdio.h>
int g_size_1 = 0;


void BuildHR(unsigned int l_var_1)    /* BuildHR = Build horizontal row */
{
    int l_count_1 =0;
    static int l_count_2 = 1;
    while(l_var_1>0)                
    {
	    printf("%s"," "); 
	    l_var_1--;
    }
	
	for(; l_count_1<l_count_2; l_count_1++)
	{
		printf("%s","* ");
	}
	l_count_2++;
	printf("\n%s","");    
	

}

int main ()
{
	int i= 0;
	int l_size_1 =0;
	printf("%s"," Do dai canh cua tam giac :");
	scanf("%d",&g_size_1);
	printf("\n%s","");
	l_size_1 = g_size_1;
	for(;i<l_size_1;i++)
	{
		BuildHR(g_size_1);
		g_size_1 = g_size_1-1;	
	}
	return 0;
}
