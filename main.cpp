#include <cstdio>
#include <cstdlib>

int main(int argc, char* argv[]) {

	//printf("Hello,world!\n");

	// argc‚Ì”‚¾‚¯ŒJ‚è•Ô‚·
	for (int i = 0; i < argc; i++) {
		// •¶š—ñ argv ‚Ì i ”Ô‚ğ•\¦
		printf(argv[i]);
		// ‰üs
		printf("\n");
	}

	system("pause");

	return 0;
}