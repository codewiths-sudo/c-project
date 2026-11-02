#include <stdio.h>

void add_password() {
	char site[100];
	char username[100];
	char password[100];

	FILE *file = fopen("password.txt","a");

	if(file == NULL) {
		printf("file is not created!\n");

		return;
	}

	printf("enter your service name: ");
	fgets(site,sizeof(site),stdin);

	printf("enter your username: ");
	fgets(username,sizeof(username),stdin);

	printf("enter your password: ");
	fgets(password,sizeof(password),stdin);

	fputs("Site: ", file);
	fputs(site, file);
	fputs("Username: ", file);
	fputs(username, file);
	fputs("Password: ", file);
	fputs(password, file);

	fclose(file);

	printf("password saved seccusfully: \n");

	return 1;
}

int main() {
	add_password();
}