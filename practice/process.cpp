#include <iomanip>
#include <unistd.h>

int main() {
	int x = 512, y=513;
	x = fork();
	
	if (x ==0) {
		printf("x = %d\n", x);
		printf("y = %d\n", y);
		int pid = getpid();
		printf("I am process: %d\n", pid);
	}

	y = fork();
	if (y ==0) {
		printf("x = %d\n", x);
		printf("y = %d\n", y);
		int pid = getpid();
		printf("I am process: %d\n", pid);
	}
	return 0;
}