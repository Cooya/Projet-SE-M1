#include "syscall.h"

int main() {
	int i = 0;
	for(i; i < 26; ++i)
		PutChar('a' + i);
	PutChar('\n');
	return 0;
}
