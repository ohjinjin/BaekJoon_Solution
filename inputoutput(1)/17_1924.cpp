#include <stdio.h>

int main(void) {
	/* 변수 정의 */
	int m, d, dayOfTheWeek = 0, stride = 0;

	/* 입력 */
	scanf("%d %d", &m, &d);

	/* 처리 */
	for (int tmp_m = 1; tmp_m <= m; tmp_m++) {
		if (tmp_m == m) {	// 해당 달의 경우 일자 세기
			stride = d % 7;
		}
		else {
			if (tmp_m == 2) {	// 2월은 28일까지
				stride = 0;
			}
			else if (tmp_m < 8) {	// 2월 아니고 8월 미만
				if (tmp_m % 2 == 0) {	// 짝수 달의 경우 30일까지
					stride = 30 % 7;
				}
				else {	// 홀수 달의 경우 31일까지
					stride = 31 % 7;
				}
			}
			else {	// 8월 이상
				if (tmp_m % 2 == 0) {	// 짝수 달의 경우 31일까지
					stride = 31 % 7;
				}
				else {	// 홀수 달의 경우 30일까지
					stride = 30 % 7;
				}
			}

		}
		dayOfTheWeek += stride;	// 요일 더하기
		dayOfTheWeek = dayOfTheWeek % 7;	// 요일 정산
	}

	/* 출력 */
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