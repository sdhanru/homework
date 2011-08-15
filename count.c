#include <stdio.h>

int count(int x);

int main(int argc, const char *argv[])
{
	int num = 0;	

	scanf("%d",&num);
	printf("%d\t%x\t%d\n",num,num,count(num));
	return 0;
}

int count(int x){
	int cou = 0;
	int i = 0;

	for ( ; x!=0; i++)
	{
		//if(x%2 == 1)
		if(x&1 == 1)
		cou++;
		x = x >> 1;
	}

	return cou;
}
