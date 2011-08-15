#include <stdio.h>

int ror(int arg,int n);

int main(int argc, const char *argv[])
{
	int argument = 0;
	int i;
	
	//printf("%d\n",0x8000);
	scanf("%d,%d",&argument,&i);
	printf("%d ror %d is %d.\n",argument,i, ror(argument, i) );
	return 0;
}

int ror(int arg,int n){
	int tmp = 1;
	int i = 0;

	for (; i < n; i++)
	{
		tmp = arg & 1;
		//printf("%d\n",tmp);
		//arg = arg>>1;
		arg = ( tmp*0x8000+(arg>>1)); 
		//printf("%d\n",arg);
		//arg = arg>>1;
	}
	
	return arg;
}
