//IsPrimeNumber.c
/*
���� �̸�: IsPrimeNumber.c
��     ��: ���� �Է¹޾� �Ҽ����� �Ǻ��Ѵ�.
�� ��  ��: �� �� ��
�ۼ� ����: 2015�� 8�� 12��
*/
#include <stdio.h>// ��ó���� Preprocesser : ��ũ��
//type name(�ڷ��) ����
typedef unsigned long int ULong;
typedef enum boolean{ FALSE = 0, TRUE = 1 } Boolean;
//�Լ� ���� : �Լ� ����(Function Prototype)
int main(int argc, char *argv[]);
ULong Input();
Boolean IsPrimeNumber(ULong number);
void Output(ULong number, Boolean isPrimNumber);

int main(int argc, char *argv[]) {
	ULong number;
	Boolean isPrimeNumber;

	// �Լ� ȣ�� ����: ġȯ�� + ȣ���
	number = Input();
	isPrimeNumber = IsPrimeNumber(number);
	Output(number, isPrimeNumber);

	return 0; //0~256
}

/*
�Լ��̸�: Input
��    ��: Ű����� �Էµ� ���� ����Ѵ�.
��    ��: ����
��    ��: ��
*/
ULong Input() {
	ULong number;
	scanf("%d", &number);
	return number;
}

/*
�Լ��̸�: IsPrimeNumber
��    ��: �Էµ� ���� �Ҽ����� Ȯ���Ѵ�.
��    ��: ��
��    ��: �Ҽ�����
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
�Լ��̸�: Output
��    ��: ���� �Ҽ����θ� �Է¹޾� ����Ϳ� �޼����� ����Ѵ�.
��    ��: ��, �Ҽ�����
��    ��: ����
*/
void Output(ULong number, Boolean isPrimeNumber) {
	if (isPrimeNumber == TRUE) {
		printf("%d��(��) �Ҽ��Դϴ�!\n", number);
	}
	else {
		printf("%d��(��) �ռ����Դϴ�!\n", number);
	}
}