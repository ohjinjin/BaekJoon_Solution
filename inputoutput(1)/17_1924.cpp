#include <stdio.h>

int main(void) {
	/* ���� ���� */
	int m, d, dayOfTheWeek = 0, stride = 0;

	/* �Է� */
	scanf("%d %d", &m, &d);

	/* ó�� */
	for (int tmp_m = 1; tmp_m <= m; tmp_m++) {
		if (tmp_m == m) {	// �ش� ���� ��� ���� ����
			stride = d % 7;
		}
		else {
			if (tmp_m == 2) {	// 2���� 28�ϱ���
				stride = 0;
			}
			else if (tmp_m < 8) {	// 2�� �ƴϰ� 8�� �̸�
				if (tmp_m % 2 == 0) {	// ¦�� ���� ��� 30�ϱ���
					stride = 30 % 7;
				}
				else {	// Ȧ�� ���� ��� 31�ϱ���
					stride = 31 % 7;
				}
			}
			else {	// 8�� �̻�
				if (tmp_m % 2 == 0) {	// ¦�� ���� ��� 31�ϱ���
					stride = 31 % 7;
				}
				else {	// Ȧ�� ���� ��� 30�ϱ���
					stride = 30 % 7;
				}
			}

		}
		dayOfTheWeek += stride;	// ���� ���ϱ�
		dayOfTheWeek = dayOfTheWeek % 7;	// ���� ����
	}

	/* ��� */
	if (dayOfTheWeek == 0) {
		printf("SUN");
	}
	else if (dayOfTheWeek == 1) {
		printf("MON");
	}
	else if (dayOfTheWeek == 2) {
		printf("TUE");
	}
	else if (dayOfTheWeek == 3) {
		printf("WED");
	}
	else if (dayOfTheWeek == 4) {
		printf("THU");
	}
	else if (dayOfTheWeek == 5) {
		printf("FRI");
	}
	else if (dayOfTheWeek == 6) {
		printf("SAT");
	}

	return 0;
}