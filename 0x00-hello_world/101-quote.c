#include <unistd.h>

int main(void)
	// This C program prints a specific message to the standard error.
	// The message is "and that piece of art is useful" - Dora Korpar, 2015-10-19,
	// followed by a new line character. 
	
	const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	ssize_t written = write(2, message, 59); // 59 is the length of the message

	if (written == -1) {
		return 1; 
	}
	return 0;
	}
