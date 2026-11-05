#include <stdio.h>

void add_usrn_password() {
	char site[100];
	char username[100];
	char password[100];

	FILE *file = fopen("credentials.txt","a");

	if(file == NULL) {
		printf("file is not created!\n");

		return;
	}

	printf("enter your service name: ");
	fflush(stdout);
	fgets(site,sizeof(site),stdin);

	printf("enter your username: ");
	fflush(stdout);
	fgets(username,sizeof(username),stdin);

	printf("enter your password: ");
	fflush(stdout);
	fgets(password,sizeof(password),stdin);

	fputs("Site: ", file);
	fputs(site, file);
	fputs("Username: ", file);
	fputs(username, file);
	fputs("Password: ", file);
	fputs(password, file);

	fclose(file);

	printf("\n===credentials saved successfully===\n");

	return;
}

void show_usrn_password() {
	char line[100];

	FILE *file = fopen("credentials.txt","r");

	if(file == NULL) {
		printf("file is not found!\n");

		return;
	}

	while(fgets(line,sizeof(line),file) != NULL) {
		printf("%s",line);
	}
	fclose(file);

	return;
}

int main() {
	int usr_in;

while(1) {
	printf("\n1.Save New Credentials\n");
	printf("2.Read Username and Password\n");
	printf("3.Exit\n\n");

		printf("Choice 1-3: ");
		fflush(stdout);	

		scanf("%d", &usr_in);
		getchar();

		switch(usr_in) {
			case 1:
				add_usrn_password();
				break;
			case 2:
				show_usrn_password();
				break;
			case 3:
				return 0;
				break;
			default:
				printf("Invaild Choice!\n");
			break;
		}
		}
	return 0;
}