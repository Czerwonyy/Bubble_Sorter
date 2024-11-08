#include <stdio.h>
#include <string.h>


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

	for (i = 1; i < n; i++){
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

   printf("Done :D\nSorted Numbers Are:\n");

   for (i = 0; i < n; i++)
      printf("%d ", BSA[i]);

   printf("\n\nDO you want to write the output into a TXT file?\n(Y/N)\n");
   int OUT, fptr;
   char fname[25];

   scanf("%s", &OUT);
	if (OUT == 'y' || 'Y') {
		printf("Enter the name of file to print:\n");
		scanf("%s", &fname);
		strcat(fname, ".txt");


		FILE *fptr;
		fptr = fopen(fname, "w");
		
			fprintf(fptr, "Sorted numbers are:\n");
		for (i = 0; i < n; i++)
			fprintf(fptr, "%d ", BSA[i]);
		
		fclose(fptr);

	}
	



   return 0;
}

//Made by Olaf Jarczynski
