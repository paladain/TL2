#include <cstdio>
#include <cstdlib>

int main(int argc, char* argv[]) {

	//printf("Hello,world!\n");

	// argc�̐������J��Ԃ�
	for (int i = 0; i < argc; i++) {
		// ������ argv �� i �Ԃ�\��
		printf(argv[i]);
		// ���s
		printf("\n");
	}

	system("pause");

	return 0;
}