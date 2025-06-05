#include <stdio.h>
//stdio.h에 선언

int main(void)
{
	int ch; //정수형에 주의, 아스키코드로 기억
	ch = getchar(); //첫 번째 1문자를 입력받는다.
	
	putchar(ch); //문자를 출력한다

	return 0;
}