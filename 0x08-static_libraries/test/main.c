#include <stdio.h>
int _isdigit(int c);

int main(int argc, char *argv[])
{
        if (_isdigit(*argv[1]))
		printf("It's a digit\n");
	else
		printf("Not a digit\n");

        return (0);
}
