#include <stdio.h>
using namespace std;

int main()
{
	char name []="name";
	char address[]="adress";
	char gender[]="gender";
	int married;
	int age = 0;
	float hight = 0;

	printf("insert your name! \n");
	scanf("%s",name);

	printf("insert your age! \n");
	scanf("%d",&age);

	printf("insert your hight! \n");
	scanf("%f",&hight);


	printf("insert your addres! \n");
	scanf("%s", address);
	
	
	printf("insert your gender! \n");
	scanf("%s", gender);
	

	printf("are you married ? true or false? \n");
	scanf_s("%d", &married);

	printf("Name :%s.\n",name);

	printf("Age :%i.\n", age);

	printf("Hight :%f.\n", hight);

	printf("Address :%s.\n", address);

	printf("Gender :%s.\n", gender);
	


	if (married == 1)
		printf("Marreid : true\n");
	else
		printf("Marreid : false\n");
	
	return 0;

}
