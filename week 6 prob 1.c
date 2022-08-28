//Write a c program that creates a menu. Consider the following layout
//Write a message while selecting the option i.e., if you are selecting save file, then print the option as “Saving
//File”.

#include <stdio.h>
main() {
	int digit,mn;  // menunumber
	printf("File\nEdit\nSearch\nExecute");
	printf("\nEnter digits only:\n1.File\n2.Edit\n3.Search\n4.Execute\n");
	scanf("%d",&digit);
	switch (digit) {
		case 1:
			printf(" 1.New\n2.Open\n3.Save\n4.Save as\n5.Save project as\n6.Save all\n7.Close\nEnter digit only: \n");
			scanf("%d", &mn);

			switch(mn) {
				case 1:
					printf("Creating new file");
					break;
				case 2:
					printf("Opening file");
					break;
				case 3:
					printf("Saving file");
					break;
				case 4:
					printf("Choose the name for the file to be saved as");
					break;
				case 5:
					printf("Saving project");
					break;
				case 6:
					printf("Saving all");
					break;
				case 7:
					printf("Closing file");
					break;
				default:
					printf("Enter a valid option");
					break;
			}
			break;

		case 2: {
			printf(" 1. Undo\n 2. Redo\n 3. Cut \n 4. Copy\n 5. Paste\n 6. Select all\nEnter digit only: \n");
			scanf("%d", &mn);

			switch(mn) {
				case 1:
					printf("Undoing work");
					break;
				case 2:
					printf("Redoing");
					break;
				case 3:
					printf("File cut");
					break;
				case 4:
					printf("Copied");
					break;
				case 5:
					printf("File pasted");
					break;
				case 6:
					printf("Selected all text");
					break;
				default:
					printf("Digit pressed is not in the menu");
					break;
			}
			break;
		}

		case 3: {
			printf(" 1. Find\n 2. Find in files\n 3. Replace \n 4. Replace in files\nEnter digit only: \n");
			scanf("%d", &mn);

			switch(mn) {
				case 1:
					printf("Which file location should be checked for the file?");
					break;
				case 2:
					printf("File found");
					break;
				case 3:
					printf("Replacing file");
					break;
				case 4:
					printf("Replacing all text in files");
					break;
				default:
					printf("Digit entered is not in the menu");
					break;
			}
			break;
		}
		case 4: {
			printf(" 1. Compile\n 2. Run\n 3.  Compile and run\n 4. Rebuild all\nEnter digit only: \n");
			scanf("%d", &mn);

			switch(mn) {
				case 1:
					printf("Program compiled");
					break;
				case 2:
					printf("Running program...");
					break;
				case 3:
					printf("Compiling and running program");
					break;
				case 4:
					printf("Rebuilding all programs");
					break;
				default:
					printf("Digit entered is not in menu");
					break;
			}
			break;
			default:
				printf("Invalid digit entered");
			}
	}
}
