#include<stdio.h>
#include<string.h>

int digitalRoot(char num[])
{

	if (strcmp(num,"0") == 0)
		return 0;

	int ans = 0;
	for (int i=0; i<strlen(num); i++)
		ans = (ans + num[i]-'0') % 9;

	return (ans == 0)? 9 : ans % 9;
}

int main()
{
  char num[10];
	scanf("%s",num);

	printf("%d",digitalRoot(num));

	return 0;
}
