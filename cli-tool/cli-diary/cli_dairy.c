#include <stdio.h>

void write_diary() {
	FILE *file = fopen("diary.txt", "a");

	if (file == NULL) {
		printf("File is not found!\n");
		return;
	}
	
	char note[250];

	printf("Enter your note: ");
	getchar(); 

	fgets(note, sizeof(note), stdin);
	fprintf(file, "%s", note);

	fclose(file);
	printf("File Write Successfully\n");
}

void read_diary() {
	FILE *file = fopen("diary.txt", "r");
	char line[250];

	if (file == NULL) {
		printf("File is not found!\n");
		return;
	}

	printf("\n--- Your Diary Content ---\n");
	while (fgets(line, sizeof(line), file) != NULL) {
		printf("%s", line);
	}

	fclose(file);
}

int main() {
	int choice;

	printf("\n== CLI-Diary ==\n");

	printf("1. Write Diary\n");
	printf("2. Read Diary\n");
	printf("3. Exit\n");

	while (1) {

	printf("Choose (1-3): ");
	scanf("%d", &choice);

	if (choice == 1) {
		write_diary();
	} else if (choice == 2) {
		read_diary();
	} else if (choice == 3) {
		printf("Goodbye!\n");
	break;
	} else {
		printf("Invalid Choice!\n");
	}
	}
	return 0;
}