#include <stdio.h>
#include <string.h>
#define LEN 256

int main() {
	char str[LEN];	
	char temp;
	int i, j = 0;
	int key_len;
	short action;

	printf("\n1. Encrypt\n2. Decrypt\n");
	scanf("%d", &action);
	
	printf("Enter the string: ");  
	scanf("%c",&temp);
	scanf("%[^\n]", str);
	
	printf("Enter the key length: ");
	scanf("%d", &key_len);
	int key[key_len];

	printf("Enter the key: ");
	for (i = 0; i < key_len; i++) {
		scanf("%d", &key[i]);
	}

	printf("\nThe start string is: %s", str);
	
	for (int i = 0; i < LEN; i++) {
		if (j < key_len) {
			if (action == 1)
				str[i] += key[j++];
			else
				str[i] -= key[j++];
		} else {
			j = 0;
		}
	}
	
	printf("\nThe changed string is: %s", str);
	
	return 0;
}