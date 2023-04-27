#include<stdio.h>
#include<stdlib.h>
struct student 
{
	char Name[39];
	int Phone_No;
		
};

main()
{
	char y[100];
	int z[100];
	
	int a;
	
	FILE *e;
	e=fopen("rrr.txt","w+");
while(true)
{

   printf("******* Add your contact select 1 ********\n");
   printf("******* See All contacts select 2 ********\n");
   printf("******* Search contact select   3 ********\n");
   printf("*******      Exit press         4 ********\n");
   printf("\nEnter your option ==> ");
    fflush(stdin);
   scanf("%d",&a);


   switch(a)
   {
   	case 1:
   		
	
	if(e==NULL)
	{
		printf("file will not exit");
		exit(0);
	}
	else
	{
	printf("this is case 1");
	struct student p[1];
	
	int i;
	for(i=0;i<1;i++)
	{
		printf("enter the Name  User_Name[%d]\n",i+1);
		scanf("%s",p[i].Name);
//		fflush(stdin);
		printf("enter the Phone_Number[%d]\n ",i+1);
		scanf("%d",&p[i].Phone_No);
	}
		for(i=0;i<1;i++)
	{
		printf(" the Nuber of contacts =%d\n",i+1);
		fprintf(e,"%s\n%d\n",p[i].Name,p[i].Phone_No);
		fprintf(e,"%s","maddd");
	}
	printf("file data successfully stored\n\n\n\n");
	
}
    break;
    case 2:
    	char x[4000];
    	e=fopen("bcd.txt","a+");
			while((fgets(x,4000,e))!=NULL)
			{
				printf("%s\n",x);
			}
		break;
    case 3:
    	char phone;
    	printf("enter your searching number\n");
    	scanf("%d",&phone);
    	if(e==NULL)
    	{
    		printf("No file found\n");
    		exit(0);	
		}
		else
		{
			int i=0;
			while(z[i]=(getw(e))!=EOF)
			{
			
//			if(y[i]==phone)
//			{
//				printf("success");
//			}
//			else
//			{
//				printf("not found\n");
//			}
			printf("%d",z[i]);
			i++;
			}
//		for(i=0;i<5;i++)
		{
			printf("%d",y[i]);
		}		
		}
		break;
    case 4:
    	system("exit");
    	return 0;
    	break;
 	
 	default:
 		printf("\nwrong option\n");
   }
}

}

