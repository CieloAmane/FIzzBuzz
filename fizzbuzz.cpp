#include<stdio.h>

#define	  MAX_NUM		(100)				//終了数値
#define	  FIZZ			(3)				//Fizz判定値
#define	  BUZZ			(5)				//Buzz判定値

int main(void)
{
	int num = 0;
	for ( num = 1; num <= MAX_NUM; num++)
	{
		//3の倍数かの判定
		if ((num%FIZZ)==0)
		{
			printf("Fizz ");
		}
		//5の倍数かの判定
		if ((num%BUZZ)==0)
		{
			printf("Buzz ");
		}
		//3の倍数じゃない、かつ、5の倍数じゃない
		if (((num%FIZZ) != 0) && ((num%BUZZ) != 0))
		{
			printf("%d ", num);
		}
		printf("\n");
	}

	return 0;
}
