/*

This code uses continue inside a while loop.
What is this code doing. Predict the output.
Fix the code to make it work.
Requested files
buggy_continue.c

#include <stdio.h>

int main()
{
	int iter = 0;

	while(iter < 10)
	{
		if (iter == 5)
		{
			continue;
		}

        printf("%d\n", iter);
		iter++;
	}

	return 0;
}
*/

#include <stdio.h>

int main()
{
	int iter = 0;

	while(iter < 10)
	{
		
		if (iter == 5)
		{
		    iter++;
			continue;
		}
		
        printf("%d\n", iter);
		iter++;
	}

	return 0;
}
