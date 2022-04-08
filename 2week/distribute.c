#include <stdio.h>

void main(){
	int run;
	scanf("%d",&run);
	printf("\n");
	
	int problemNum;
	int exponent;
	int problemArr[100];
	
	int arr1[1]={1};
	int arr2[4]={2,4,8,6};
	int arr3[4]={3,9,7,1};
	int arr4[2]={4,6};
	int arr5[1]={5};
	int arr6[1]={6};
	int arr7[4]={7,9,3,1};
	int arr8[4]={8,4,2,6};
	int arr9[2]={9,1};
	
	for(int i=0;i<run;i++)
	{
		scanf("%d %d",&problemNum,&exponent);
		problemArr[i]=problemNum%10;
		problemArr[i+1]=exponent;
		printf("\n");
		
	}
	int a=0;
	int h=0;
	for(int j=0;j<run;j++)
	{
		if(problemArr[a]=0)
		{
			printf("0");
		}
		else if(problemArr[a]=1)
		{
			printf("1");
		}
		else if(problemArr[a]=2)
		{
			if(problemArr[a+1]=0)
			{
				printf("0");
			}
			else
			{
				h=(problemArr[a+1])%4;
				printf("%d",arr2[h-1]);
			}
		}
		else if(problemArr[a]=3)
		{
			if(problemArr[a+1]=0)
			{
				printf("0");
			}
			else
			{
				h=(problemArr[a+1])%4;
				printf("%d",arr3[h-1]);
			}
		}
		else if(problemArr[a]=4)
		{
			if(problemArr[a+1]=0)
			{
				printf("0");
			}
			else
			{
				h=(problemArr[a+1])%2;
				printf("%d",arr4[h-1]);
			}
		}
		else if(problemArr[a]=5)
		{
			if(problemArr[a+1]=0)
			{
				printf("0");
			}
			else
			{
				printf("5");
			}
		}
		else if(problemArr[a]=6)
		{
			if(problemArr[a+1]=0)
			{
				printf("0");
			}
			else
			{
				printf("6");
			}
		}
		else if(problemArr[a]=7)
		{
			if(problemArr[a+1]=0)
			{
				printf("0");
			}
			else
			{
				h=(problemArr[a+1])%4;
				printf("%d",arr7[h-1]);
			}
		}
		else if(problemArr[a]=8)
		{
			if(problemArr[a+1]=0)
			{
				printf("0");
			}
			else
			{
				h=(problemArr[a+1])%4;
				printf("%d",arr8[h-1]);
			}
		}
		else
		{
			if(problemArr[a+1]=0)
			{
				printf("0");
			}
			else
			{
				h=(problemArr[a+1])%2;
				printf("%d",arr9[h-1]);
			}
		}
		a=a+2;
	}
}
