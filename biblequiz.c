#include <stdio.h>

int main()
{
	int i;
	int answer;
	int point;

	point = 0;

	printf("    Do you  really know your Bible? ;)\n\n");

	printf("*Press 1 to start a new game\n");
	printf("*Press 0 to exit\n");
	scanf("%d", &i);

	if (i == 0)
	{
		printf("Game Exited");
	}
	else if(i == 1)
	{
		printf("Let's Go!\n\n");
	}
	else
	{
		printf("Invalid option");
	}
	
	if(i == 1)
	{
		printf("What are the first 4 books of the old testament in chronological order?\n\n");
		printf("1. Genesis, Deuteronomy, Ruth, Judges\n");
		printf("2. Genesis, Exodus, Leviticus, Numbers\n");
		printf("3. Matthew, Mark, Luke, John\n");
		printf("4. Genesis, Exodus, Numbers, Leviticus\n");

		printf("Enter your answer: ");
		scanf("%d", &answer);
		if(answer == 2)
		{
			printf("That's correct!\n");
			point += 5;
			printf("You've scored 5 points\n");
		}
		else{
			printf("Unforunately wrong\n");
			printf("You've scored 0 points\n");
		}

		printf("What was Jesus' mother's name?\n\n");
		printf("1. Elizabeth\n");
		printf("2. Magdelene\n");
		printf("3. Mary\n");
		printf("4. Sarah\n");

		printf("Enter your answer: ");
		scanf("%d", &answer);
		if(answer == 3)
		{
			printf("That's correct!\n");
			point += 5;
			printf("You've scored 5 points\n");
		}
		else
		{
			printf("Unforunately wrong...\n");
			printf("You've scored 0 points\n");
		}

		printf("What was the name of he disciple tha betrayed Jesus?\n\n");
		printf("1. Judas\n");
		printf("2. Peter\n");
		printf("3. John\n");
		printf("4. Paul\n");

		printf("Enter your answer: ");
		scanf("%d", &answer);
		if(answer == 1)
		{
			printf("That's correct!\n");
			point += 5;
			printf("You've scored 5 points\n");
		}
		else
		{
			printf("Unforunately wrong...\n");
			printf("You've scored 0 points\n");
		}

		printf("How many chapters are there in Revelation?\n\n");
		printf("1. Twenty-four\n");
		printf("2. Twenty-two\n");
		printf("3. Twelve\n");
		printf("4. Thirty-one\n");

		printf("Enter your answer: ");
		scanf("%d", &answer);
		if(answer == 2)
		{
			printf("That's correct!\n");
			point += 5;
			printf("You've scored 5 points\n");
		}
		else
		{
			printf("Unforunately wrong...\n");
			printf("You've scored 0 points\n");
		}

		printf("Why was King Solomon known to be the wisest man alive?\n\n");
		printf("1. He read a lot of books\n");
		printf("2. He had the best consultors\n");
		printf("3. He asked God for wisdom\n");
		printf("4. He ate lots of veggies and fish (high in omega 3)\n");

		printf("Enter your answer: ");
		scanf("%d", &answer);
		if(answer == 3)
		{
			printf("That's correct!\n");
			point += 5;
			printf("You've scored 5 points\n");
		}
		else
		{
			printf("Unforunately wrong...\n");
			printf("You've scored 0 points\n");
		}

		printf("Total points scored:\t%d",point);
	}
	return 0;
}
