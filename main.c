#include <stdio.h>

	float st_demand[4]={4,2,10,5};
	float st_weight[4]={5,8,1,2};
	float st_power[4] ={0,0,0,0};
	float cap=0;
	float n=0, br=0;
	float init_cap=0, remain_cap=0;
	
void p2sc()
{
	printf("\nResult: \n");
	for(int i=0;i<=3;i++)
	{
		printf("\nPower[%d]: %.3f",i,st_power[i]);		
	}
		printf("\n\nRemaining capacity: %.3f", remain_cap);
}
	
int main()
{
	printf("Available capacity:  "); scanf("%f",&cap);
	
	init_cap = cap;
	while(cap>0)
	{
		for(int i=0;i<=3;i++)
		{
			if(st_power[i]<st_demand[i])
			{
				n+=st_weight[i];
			}					
		}
		
		br=cap/n;
		cap=0;
		n=0;
		
		for(int i=0;i<=3;i++)
		{
			if(st_power[i]<st_demand[i])
			{
				st_power[i]+=st_weight[i]*br;
				if(st_power[i]>st_demand[i])
				{
					cap+=st_power[i]-st_demand[i];
					st_power[i]=st_demand[i];
				}
			}
		}
	}
	remain_cap = init_cap - (st_power[0] + st_power[1] + st_power[2] + st_power[3]);
	
	p2sc();
}
