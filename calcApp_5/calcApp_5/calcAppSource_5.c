#include <stdio.h>

int main()
{
	//Declare variables
	printf("--------------\n");
	printf("CALCULATOR\n");
	printf("--------------\n");

	int a, b, choice;

	//Display an option for user to enter choice for either Addition, Subtraction, Multiplication and Division
	printf("Enter your choice\n");
	printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");

	//Scan for the choice entered by user
	scanf_s("%d", &choice);

	//If statement to prevent the user from entering more choices that arent available
	if (choice > 4)
	{
		printf("Select with in the range!\n");
	}
	else
	{
		printf("Enter two whole numbers\n");
		scanf_s("%d %d", &a, &b);
	}

	//Switch statement that will print the results of the selected operation
	switch (choice)
	{
	case 1: printf("\n%d + %d = %d\n", a, b, (a+b));
			break;

	//If statement that will not operate if a is less than b
	case 2: if (a < b)
			printf("The first number entered is not a whole number.");
			 else
			printf("%d - %d = %d\n", a, b, (a-b));
			break;

	case 3: printf("%d * %d = %d\n", a, b, (a*b));
			break;
	//If and else statement that if b is not zero the operation will continue. If b is zero operation will not work
	case 4: if (b != 0)
			printf("%d / %d = %d\n", a, b, (a/b));
			 else
			printf("Number can't be divided by 0\n");
			break;


	default: printf("You entered the wrong choice\n");
			break;


	}

	printf("\n");

	return 0;

}