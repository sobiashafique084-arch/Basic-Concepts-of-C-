#include <stdio.h>
#include <string.h>

struct carparking 
{
	int id;
	char ownername[20];
	char carname[20];
	char parkingslot[20];
};

// Function declarations
void addfunction(struct carparking [], int*);
void printfunction(struct carparking [], int);
void deletefunction(struct carparking [],int*);
void search(struct carparking [],int );
void sorting (struct carparking [],int );

int main()
{
	int size = 2;
	struct carparking car[20] = {
	    {1, "sobia", "gli", "a1"},
	    {2, "kinza", "gli", "b1"}
	};

	addfunction(car, &size);
	deletefunction(car,&size);
	printfunction(car, size);
	search(car,size);
	sorting (car,size);
	

	return 0;
}
void sorting (struct carparking car[],int size)
{
	struct carparking tem;
	for (int i=0;i<size;i++)
	{
		for(int j=0;j<size-i-1;j++)
		{
			if(strcmp(car[i].ownername ,car[i+1].ownername)>0)
		{
			tem=car[i];
			car[i]=car[i+1];
			car[i+1]=tem;
		}
		}
			
	}
	printfunction(car,size);
}
void search(struct carparking car[],int size)
{
	char name[10];
	printf("enter car name to search a car ");
	fflush(stdin);
	gets(name);
	for(int i=0;i<size;i++)
	{
		if(strcmp(car[i].carname,name)==0);
		{
			printf("owner name %s...parking slot%s",car[i].ownername,car[i].parkingslot);
		}
		
	}
	 
}
void deletefunction(struct carparking car[],int *size)

{
	char name[20];
	printf("Enter owner name to delete a car record: ");
	fflush(stdin);
	gets( name);
	  // Safe input

	int found = -1;

	for (int i = 0; i < *size; i++)
	{
		if (strcmp(car[i].ownername, name) == 0)
		{
			found = i;
			break;
		}
	}

	if (found == -1)
	{
		printf("Record not found.\n");
	}
	else
	{
		// Shift elements left to delete the matched record
		for (int i = found; i < *size - 1; i++)
		{
			car[i] = car[i + 1];
			car[i].id = i + 1;  // update IDs
		}

		(*size)--;

		printf("Record deleted successfully.\n");
	}
}


// Function to print car records
void printfunction(struct carparking car[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("\nCar ID: %d\n", car[i].id);
		printf("Owner Name: %s\n", car[i].ownername);
		printf("Car Name: %s\n", car[i].carname);
		printf("Parking Slot: %s\n", car[i].parkingslot);
	}
}

// Function to add a new car record
void addfunction(struct carparking car[], int *size)
{
	if (*size >= 20)
	{
		printf("Space is full\n");
		return;
	}

	int i = *size;
	car[i].id = i + 1;

	printf("Enter owner name: ");
	scanf(" %[^\n]", car[i].ownername);

	printf("Enter car name: ");
	scanf(" %[^\n]", car[i].carname);

	printf("Enter parking slot: ");
	scanf(" %[^\n]", car[i].parkingslot);

	(*size)++;
	printf("Record added successfully\n");
}
