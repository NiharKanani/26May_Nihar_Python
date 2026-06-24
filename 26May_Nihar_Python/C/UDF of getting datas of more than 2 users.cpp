//UDF of getting datas of more than 2 users:-
#include<stdio.h>
void getdata(int id, char name[30])
{
	printf("\nID:- %d",id);
	printf("\nName:- %s\n",name);
	printf("============================\n\n");
}
main()
{
	int i,n=5,id;
	char name[30];
	for(i=1;i<=n;i++)
	{
		printf("%d)\n",i);
		printf("Enter ID:- ");
		scanf("%d",&id);
		printf("Enter Name:- ");
		scanf("%s",&name);
		getdata(id,name);
	}
}
