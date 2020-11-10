#include<stdlib.h>
#include<stdio.h>

int main () {
	int input,n, count = 0;
	int *numbers = NULL, *more_numbers = NULL;

	do {

		printf ("Enter an integer value (0 to end): ");
		scanf ("%d", &input);

		count++;
		more_numbers = (int*) realloc (numbers, count * sizeof(int));

		if (more_numbers!=NULL) {
			numbers = more_numbers;
			numbers[count-1] = input;
		}
		else {
			free (numbers);
			puts ("Error (re)allocating memory");
			exit (1);
		}

	} while (input!=0);

	printf ("Numbers entered: ");

	for (n=0;n<count;n++)
		printf ("%d ",numbers[n]);

	free (numbers);

	return 0;
}
