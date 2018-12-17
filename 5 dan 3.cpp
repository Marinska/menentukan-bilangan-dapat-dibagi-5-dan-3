#include <stdio.h>
int main()
{
	int a;
	printf("Masukan nilai bilangan : ");
	scanf("%d",&a);
	if(a%5==0)
	{
		if(a%3==0)
		{
			printf("Bilangan habis apabila dibagi 5 dan 3");
		}else{
			printf("Bilangan habis dibagi 5 namun tidak dengan 3");
		}
	}else{
		if(a%3==0)
		{
			printf("Bilangan tidak habis dibagi 5 namun habis dengan 3");
		}else{
			printf("Bilangan tidak habis dibagi 5 maupun 3");
		}
	}
}
