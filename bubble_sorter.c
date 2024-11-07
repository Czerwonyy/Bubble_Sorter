#include <stdio.h>

int main()
{
	int BSA[100], i, j, n;			//Bubble Sort Array
	int SWP;				//SWAP (1 = true, 0 = false)

	printf("Enter ammont of numbers to sort\n");
	scanf("%d", &n);
	
	printf("Enter %d numbers to sort\n", n);

	for (i = 0; i < n; i++)
		scanf("%d", &BSA[i]);


	printf("\n\nStarting Sorting\n\n");

	for (i = 0; i < n - 1; i++){
		SWP = 0;
		for (j = 0; j < n - i; j++){
			if (BSA[j] > BSA[j + 1]) {

			int temp = BSA[j];
			BSA[j] = BSA[j + 1];
			BSA[j + 1] = temp;
			SWP = 1;
			}
		}
	}

   printf("Done :D\n");
   printf("Sorted Numbers Are:\n");

   for (i = 0; i < n; i++)
      printf("%d ", BSA[i]);
   printf("\n");
	return 0;
}
