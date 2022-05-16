// dynamic file access
#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	FILE *f;
	char data[20], val[20];
	int ch, found = 0;
	f = fopen("data.dat", "a+b");
	clrscr();

	do
	{
		clrscr();
		printf("\n1. Insert a record");
		printf("\n2. Update a record");
		printf("\n3. Delete a record");
		printf("\n4. See all records");
		printf("\n5. Exit");
		printf("\nEnter your choice: ");
		scanf("%d", &ch);
		scanf("%c");
		switch(ch)
		{
			case 1: printf("Enter a name: ");
					scanf("%[^\n]s", data);
					fwrite(data, sizeof(data), 1, f);
					printf("Record added.\n");
					break;
			case 2: found = 0;
					printf("Enter a record to update: ");
					scanf("%[^\n]s", data);
					rewind(f);
					while(fread(val, sizeof(val), 1, f))
					{
						if(strcmp(val, data) == 0)
						{
							found = 1;
							scanf("%c");
							printf("Enter new record: ");
							scanf("%[^\n]s", data);
							fseek(f, -sizeof(val), 1);
							fwrite(data,sizeof(data), 1, f);
							printf("Record updated.\n");
							break;
						}
					}
					if(found == 0)
						printf("Record not present in the file.\n");
					break;
			case 3: printf("Record deletion not implemented yet.\n");
					break;
			case 4:	printf("\nAll the records in file are: \n");
					rewind(f);
					while(fread(data, sizeof(data), 1, f))
					{
						printf("%s\n", data);
					}
			case 5: break;
			default: printf("Invalid choice. Enter again...\n");
		}
		getch();
	}while(ch != 5);

	fclose(f);
}