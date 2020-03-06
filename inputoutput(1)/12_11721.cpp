#include <stdio.h>
#include <string.h>
#define MAXNUM 100

int main(void) {
	char arr[MAXNUM];
	scanf("%s", arr);
	
	int length = strlen(arr);

	for (int i = 0; i < length; i++) {
		printf("%c",arr[i]);
		if ((i + 1) % 10 == 0){
			printf("\n");
		}
	}

	return 0;
}