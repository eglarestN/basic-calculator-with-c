#include<stdio.h>

int main()
{
	float number1, number2;
	char op;
	printf("please enter first number:");
	scanf("%f", &number1);
	printf("please enter a operator:");
	scanf("%s", &op);
	printf("please enter second number:");
	scanf("%f", &number2);

	
	if(op== '+'){
		printf("%f", number1 + number2);
	}
	else if(op == '-'){
		printf("%f", number1 - number2);
	}
	else if (op == '*'){
		printf("%f", number1 * number2);
	}
	else if(op == '/'){
		printf("%f", number1 / number2);
	}
	
	
	
	
	
	return 0;
}
