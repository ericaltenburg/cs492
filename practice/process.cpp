#include <iomanip>
#include <unistd.h>

int main() {
	int x = 1, y=2;
	x = fork();
	y = fork();

	if (x!=0) printf("Type 1\n");
	if (y!=0) printf("Type 2\n");

	if (x>0 || y>0) printf("Type 3\n");
	if (x==0 && y==0) printf("Type 4\n");
	if (x!=0 && y!=0) printf("Type 5\n");
	return 0;
}