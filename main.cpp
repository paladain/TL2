#include <cstdio>
#include <cstdlib>

int main(int argc, char* argv[]) {

	//printf("Hello,world!\n");

	// argcの数だけ繰り返す
	for (int i = 0; i < argc; i++) {
		// 文字列 argv の i 番を表示
		printf(argv[i]);
		// 改行
		printf("\n");
	}

	system("pause");

	return 0;
}