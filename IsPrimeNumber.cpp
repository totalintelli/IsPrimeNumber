//IsPrimeNumber.c
/*
파일 이름: IsPrimeNumber.c
기     능: 수를 입력받아 소수인지 판별한다.
작 성  자: 송 용 단
작성 일자: 2015년 8월 12일
*/
#include <stdio.h>// 전처리기 Preprocesser : 매크로
//type name(자료명) 선언
typedef unsigned long int ULong;
typedef enum boolean{ FALSE = 0, TRUE = 1 } Boolean;
//함수 선언 : 함수 원형(Function Prototype)
int main(int argc, char *argv[]);
ULong Input();
Boolean IsPrimeNumber(ULong number);
void Output(ULong number, Boolean isPrimNumber);

int main(int argc, char *argv[]) {
	ULong number;
	Boolean isPrimeNumber;

	// 함수 호출 문자: 치환식 + 호출식
	number = Input();
	isPrimeNumber = IsPrimeNumber(number);
	Output(number, isPrimeNumber);

	return 0; //0~256
}

/*
함수이름: Input
기    능: 키보드로 입력된 수를 출력한다.
입    력: 없음
출    력: 수
*/
ULong Input() {
	ULong number;
	scanf("%d", &number);
	return number;
}

/*
함수이름: IsPrimeNumber
기    능: 입력된 수가 소수인지 확인한다.
입    력: 수
출    력: 소수여부
*/
Boolean IsPrimeNumber(ULong number)
{
	Boolean isPrimeNumber;
	ULong factor = 0;
	ULong count = 0;
	ULong i = 1;
	ULong remainder;

	while (i <= number) {
		factor = factor + 1; // factor += 1; factor++; ++factor;
		remainder = number - number / factor * factor; // remainder = number % factor;
		if (remainder == 0) {
			count = count + 1;// count++;
		}
		i = i + 1; // i++;
	}
	if (count == 2) {
		isPrimeNumber = TRUE;
	}
	else {
		isPrimeNumber = FALSE;
	}
	// (count == 2) ? (isPrimeNumber = TRUE) : (isPrimeNumber = FALSE);
	return isPrimeNumber;
}

/*
함수이름: Output
기    능: 수와 소수여부를 입력받아 모니터에 메세지를 출력한다.
입    력: 수, 소수여부
출    력: 없음
*/
void Output(ULong number, Boolean isPrimeNumber) {
	if (isPrimeNumber == TRUE) {
		printf("%d는(은) 소수입니다!\n", number);
	}
	else {
		printf("%d는(은) 합성수입니다!\n", number);
	}
}