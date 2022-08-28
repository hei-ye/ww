#include <stdio.h>
int check_sys(int a)
{
	 return *(char*)&a ;
}
int main()
{
	int a=1;
	if(check_sys(a))
	    printf("Ð¡¶Ë\n");
	else
		printf("´ó¶Ë\n");
	return 0;
}