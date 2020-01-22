#include "main.h"
#pragma warning (disable:4996)

// DEFINE MENU FORM
// printf("\t\t===========================\n");
// printf("\t\t SEJONG TRAIN SYSTEM v.0.1\n");
// printf("\t\t===========================\n");
// printf("\t\t     1. MENU");

char username[30];
char file_name[100];

void main()
{
	PrintLoading(); // call printloading function.
	system("color f");  // change console color
	Login(); // call login function.
}//void main()

void PrintLoading() 
{
	int i;
	PrintLogo();
	printf("\t\t\t\t\t\t\tLoading Files... ");
	for (i = 0; i < 10; i++)
	{
		printf("��");
		Sleep(250);
	}
	printf("\n");
	Sleep(500);
	system("cls");
} //void printfLoading();

void PrintLogo()
{
	system("color b");
	system("title Sejong Train System v.1.0"); // change console title
	system("mode con:cols=150 lines=40"); // change console line size
	puts("                                  7777777777777777777777772  777777777777777777777777777777777777777727  777777777777777777777775724222287994988737");
	puts("                                 7669999999666666666666886  686666666666099999999999966666666666666887  569999990966666666666688273869668774888887");
	puts("                                7888666668888888888888888  68888888888888868666666666888888888888888   888666668888888888888888248888888748888387");
	puts("                               2886069006882                              9669090966887               3866969666887");
	puts("                              78866909008887                             7886909996886               7880690906886");
	puts("                             4880690906882                              4886909606887               8880099966887");
	puts("                            7886009996688                              7886690960886               5886009096889");
	puts("                           9886999096885                              9886099966887               8866909096887");
	puts("                          7886699999688                              7886009096886               2886099909882");
	puts("                         6886090909667                              9886999096887               7888099990969");
	puts("                        7888669696066675444949494444444444494088   7886690966886               4886660606066472494949494444444444499686");
	puts("                       7888888888888888888888888888888888888888   6886090966887               5888888888888888888888888888888888888882");
	puts("                      7884424222424242424444422776696069696688   7886909996886               3864424242224242424242423756606069606886");
	puts("                                                7890999096885   9886999096887                                          2890909006887");
	puts("                                               7880099960888   7886690906886                                          5889690966889");
	puts("                                              0880099966885   9880099966887                                          8880090966887");
	puts("                                             7886009096688   7886909096880                                          2886909096884");
	puts("                                            6886909996887   9886999606887                                          7886690960887");
	puts("                                           7886690900888   7886690960880                                          4886090966882");
	puts("                                          8886690966887   6880690966887                                          7888009096687");
	puts("                                         788690909688    7886669096889                                          4886969096883");
	puts("         2888888888888888888888888888888860606968878    6886669606887              2888888888888888888888888888886696060888");
	puts("        7088860999699909696909690999090994424244497    7889444244497              7886699909690909090909690909999444424447");
	printf("\n");
} //void PrintLogo();

void Login()
{
	system("mode con:cols=60 lines=20"); // change console size and lines.
	fflush(stdin);
	printf("\n\n");
	printf("\t\t===========================\n");
	printf("\t\t SEJONG TRAIN SYSTEM v.1.0\n");
	printf("\t\t===========================\n");
	printf("\t\t       �̸� : ");
	gets(username);
	fflush(stdin);
	sprintf(file_name, "data_%s.txt", username); // save data location.
	userdata = fopen(file_name, "a+"); // if data is saved. load previous data.
	if (userdata == NULL)
	{
		printf("\t\t===========================\n");
		printf("\t\t  No Saved Data... Making New Data!\n");
		userdata = fopen(file_name, "a+"); // make new data
		Sleep(1000);
	}
	fcloseall();
	system("cls");
	SelectMenu();
}//void Login();

void SelectMenu()
{
	//Ű���� ����(ȭ��ǥ)�� ���� �޴��� ����
	char ch1[2], ch2[2], ch3[2], ch4[2], ch5[2]; // menu numbers
	int input;
	int number=1;
	int e_flag = FALSE;
	fcloseall();
	strcpy(ch1, "��");
	strcpy(ch2, "��");
	strcpy(ch3, "��");
	strcpy(ch4, "��");
	strcpy(ch5, "��");
	// first. initialize all the chars.
	while (1)
	{
		system("mode con:cols=60 lines=40");
		printf("\n\n");
		printf("\t\t===========================\n");
		printf("\t\t         ���� �޴�  \n");
		printf("\t\t===========================\n");
		printf("\t\t    %s  1. ���� ����\n", ch1);
		printf("\t\t    %s  2. ���� Ȯ��\n", ch2);
		printf("\t\t    %s  3. ���� ���\n", ch3);
		printf("\t\t===========================\n");
		printf("\t\t    %s  4. CREDIT..\n", ch4);
		printf("\t\t    %s  0. ����\n", ch5);
		input = getch();
		switch (input) // get keyboard input.
		{
		case UP:
		{
				   if (number <= 1) // if menu number is 1. do not go up.
				   {
					   break;
				   }
				   else
				   {
					   number--;
					   break;
				   } 
		}
		case DOWN:
		{
					 if (number >= 5) // if menu number is 5. do not go down.
					 {
						 break;
					 }
					 else
					 {
						 number++;
						 break;
					 }
		}
		case ENTER:
		{
					  e_flag = TRUE; // if input is enter, escape switch loop.
					  break;
		}
		default:
			break;
		}
		if (number == 1)
		{
			strcpy(ch1, "��");
			strcpy(ch2, "��");
			strcpy(ch3, "��");
			strcpy(ch4, "��");
			strcpy(ch5, "��");
		}
		if (number == 2)
		{
			strcpy(ch1, "��");
			strcpy(ch2, "��");
			strcpy(ch3, "��");
			strcpy(ch4, "��");
			strcpy(ch5, "��");
		}
		if (number == 3)
		{
			strcpy(ch1, "��");
			strcpy(ch2, "��");
			strcpy(ch3, "��");
			strcpy(ch4, "��");
			strcpy(ch5, "��");
		}
		if (number == 4)
		{
			strcpy(ch1, "��");
			strcpy(ch2, "��");
			strcpy(ch3, "��");
			strcpy(ch4, "��");
			strcpy(ch5, "��");
		}
		if (number == 5)
		{
			strcpy(ch1, "��");
			strcpy(ch2, "��");
			strcpy(ch3, "��");
			strcpy(ch4, "��");
			strcpy(ch5, "��");
		}
		if (e_flag == TRUE)
		{
			break;
		}
	}
	switch (number)
	{
	case BOOKING:
		e_flag = FALSE;
		system("cls");
		Booking();
		break;
	case CHECK:
		e_flag = FALSE;
		system("cls");
		Check();
		break;
	case CANCEL:
		e_flag = FALSE;
		system("cls");
		Cancel();
		break;
	case CREDIT:
		e_flag = FALSE;
		system("cls");
		credit();
		break;
	case EXIT:
		e_flag = FALSE;
		system("cls");
		Exit();
		break;
	default:
		e_flag = FALSE;
		system("cls");
		printf("\t\t     �߸��� ���� �Է��ϼ̽��ϴ�.");
		SelectMenu();
	}
	
} //void SelectMenu();
void Exit()
{
	printf("\n\n");
	printf("\t\t THANK YOU FOR USING STS! \n");
	printf("\t\t     HAVE A NICE DAY!!\n\n");
	system("color E");
	printf("\t             7708888888077\n");
	printf("\t          1888888888888888882\n");
	printf("\t       7888847           7488887\n");
	printf("\t      78880                  78888\n");
	printf("\t    4888                       8882\n");
	printf("\t   8887                         7888\n");
	printf("\t  888       8888       8888      7880\n");
	printf("\t 2887      988885     088882      7887\n");
	printf("\t 880       888888     888888       888\n");
	printf("\t788        78888      78888         887\n");
	printf("\t088          52         55          885\n");
	printf("\t888                                 880\n");
	printf("\t088    287                   787    885\n");
	printf("\t788    888                   888   7887\n");
	printf("\t 888    888                 888    888\n");
	printf("\t 7887    8887             7888    7887\n");
	printf("\t  8887    288857       748882    7884\n");
	printf("\t   8887     288888888888887     2880\n");
	printf("\t    5888       728888827       8882\n");
	printf("\t      88887                 78888\n");
	printf("\t       7888807           7088887\n");
	printf("\t          2888888888888888887\n");
	printf("\t              74888888857\n\n");
	Sleep(3000);
	exit(1);
}//void Exit();

void credit()
{
	printf("\n\n");
	printf("\t\t===========================\n");
	printf("\t\t    * SEJONG UNIVERSITY *  \n");
	printf("\t\t      ��� C ���α׷���      \n");
	printf("\t\tPROJECT Sejong Train System\n");
	printf("\t\t===========================\n");
	printf("\t\t        ����   ������ \n");
	Sleep(1200);
	system("color A");
	printf("\t\t        ����   ������ \n");
	Sleep(1200);
	system("color B");
	printf("\t\t        ����   ������ \n");
	Sleep(1200);
	system("color C");
	printf("\t\t        ����   ���ֿ� \n");
	Sleep(1200);
	system("color D");
	printf("\t\t        ����   ������ \n");
	Sleep(1200);
	printf("\t\t===========================\n");
	printf("\t\t       11.20 ~ 12.3\n");
	printf("\t\t  Return to Select Menu..\n");
	system("color f");
	Sleep(2500);
	SelectMenu();
	fflush(stdin); 
}//void credit();

void Booking()
{
	char yesorno; //�������� Ȯ���� ���Ѻ�������
	Calendar();
	Location_start();
	Location_end();
	fcloseall();
	system("cls");
	system("mode con:cols=60 lines=40");
	printf("\n\n");
	printf("\t\t===========================\n");
	printf("\t\t        �Է� ���� Ȯ��  \n");
	printf("\t\t===========================\n");
	printf("\t\t ��߳�¥ : %s\n", pData->Date);
	printf("\t\t ����� : %s\n", pData->Start);
	printf("\t\t ������ : %s\n", pData->End);
	printf("\t\t===========================\n");
	printf("\t\t �Է��Ͻ� ������ �½��ϱ�? (Y/N) \n");
	printf("\t\t >> ");
	scanf("%c", &yesorno);
	if (yesorno == 'y' || yesorno == 'Y')
	{
		PrintTrain_Info();
	}
	else
	{
		printf("\t\t ���� �ʱ�ȭ������ �ǵ��� ���ϴ�.\n");
		printf("\t\t �ƹ� ��ư�̳� ���� �ּ���..\n");
		fflush(stdin);
		getchar();
		SelectMenu();
	}

} //void Booking();

void Calendar()
{
	pData = (Train *)malloc(sizeof(Train)); // memory allocation.
	system("cls");
	printf("\n\n");
	printf("\t\t===========================\n");
	printf("\t\t         ����� �Է�  \n");
	printf("\t\t        (ex. 12.05)\n");
	printf("\t\t===========================\n");
	printf("\t\t       2015�� 12�� �޷�   \n");
	printf("\t\t===========================\n");
	printf("\t\t ��  ��  ȭ  ��  ��  ��  ��\n");
	printf("\t\t          1   2   3   4   5\n");
	printf("\t\t  6   7   8   9  10  11  12\n");
	printf("\t\t 13  14  15  16  17  18  19\n");
	printf("\t\t 20  21  22  23  24  25  26\n");
	printf("\t\t 27  28  29  30  31\n");
	printf("\t\t===========================\n");
	printf("\t\t  >> ");
	scanf("%s", pData->Date);
}//void Calendar();

void Location_start()
{
	system("mode con:cols=80 lines=60");
	printf("\t    ��������������������������\n");
	printf("\t          �����������������������\n");
	printf("\t           ���       ������������������\n");
	printf("\t           ���  ���� �������������������\n");
	printf("\t           ���       ����������       �����\n");
	printf("\t          ����������������  ��õ ��������\n");
	printf("\t          ����������������       ������\n");
	printf("\t      ��    �������������������������\n");
	printf("\t  ������������������������������\n");
	printf("\t���������       �������������������\n");
	printf("\t���������  ���� ��������������������\n");
	printf("\t���������       �������������������\n");
	printf("\t  ������������������������������\n");
	printf("\t  �������������������������������\n");
	printf("\t      �����������       ��������������\n");
	printf("\t      �����������  ���� ���������������\n");
	printf("\t      �����������       �������������\n");
	printf("\t      ����������������������������\n");
	printf("\t      ��������������������       �����\n");
	printf("\t      ��������������������  �뱸 ������\n");
	printf("\t      ��������������������       �����\n");
	printf("\t      �����������������������������\n");
	printf("\t      �����������������������������\n");
	printf("\t      �����������������������������\n");
	printf("\t     ���������������������       ����\n");
	printf("\t    ������       �������������  �λ� ���\n");
	printf("\t    ������  ���� �������������       ��\n");
	printf("\t  �������       ������������������\n");
	printf("\t  �����������������������������\n");
	printf("\t�����������������������    �����\n");
	printf("\t  ����������������������\n");
	printf("\t    �������������        ����\n");
	printf("\t    ���������\n");
	printf("\n");
	printf("\t\t===========================\n");
	printf("\t\t        ����� �Է�  \n");
	printf("\t\t===========================\n");
	printf("\t\t  >> ");
	scanf("%s", pData->Start); //����� �Է�

}//void Location_Start();

void Location_end()
{
	printf("\n");
	printf("\t\t===========================\n");
	printf("\t\t        ������ �Է�  \n");
	printf("\t\t===========================\n");
	printf("\t\t  >> ");
	scanf("%s", pData->End); //������ �Է�
	fflush(stdin);
}//void Location_End();

void PrintTrain_Info()
{
	system("mode con:cols=70 lines=40");
	printf("\n\n");
	printf("\t\t=============================================\n");
	printf("\t\t   %s ���� ���� ��Ȳ   (%5s) -> (%5s) \n", (pData->Date), (pData->Start), (pData->End));
	printf("\t\t=============================================\n");

	Select_Time();

}// void PrintTrain_Info();

void Select_Time()
{
	char info_1[4][40], info_2[4][40], info_3[4][40], info_4[4][40], info_5[4][40]; // 5 kind of locations.
	char num[20]; // to use strcmp
	int i;
	char location[50];
	char yesorno;
	userdata = fopen(file_name, "a+");
	sprintf(location, "%s.txt", pData->Date); // load daily train information.
	TrainDB = fopen(location, "r"); // read data.
	if (TrainDB == NULL) // if reading is failed.
	{
		system("cls");
		printf("\n\n");
		printf("\t\t===========================\n");
		printf("\t\t SEJONG TRAIN SYSTEM v.1.0\n");
		printf("\t\t===========================\n");
		printf("\t\t ��¥�� �߸� ���̽��ϴ�. ���θ޴��� ���ư��ϴ�.\n");
		printf("\t\t �ƹ� ��ư�̳� �����ּ���..\n");
		fflush(stdin);
		getchar();
		SelectMenu();
	} //if
	for (i = 0; i < 4; i++)
	{
		fscanf(TrainDB, "%s", info_1[i]);
	}
	for (i = 0; i < 4; i++)
	{
		fscanf(TrainDB, "%s", info_2[i]);
	}
	for (i = 0; i < 4; i++)
	{
		fscanf(TrainDB, "%s", info_3[i]);
	}
	for (i = 0; i < 4; i++)
	{
		fscanf(TrainDB, "%s", info_4[i]);
	}
	for (i = 0; i < 4; i++)
	{
		fscanf(TrainDB, "%s", info_5[i]);
	}
	// info �� Data �Է�.
	printf("\t\t  ��ȣ   ��߽ð�  �����ð�    ����  \n");
	printf("\t\t");
	for (i = 0; i < 4; i++)
	{
		printf("    %s ", info_1[i]);
	}
	printf("\n");
	printf("\t\t");
	for (i = 0; i < 4; i++)
	{
		printf("    %s ", info_2[i]);
	}
	printf("\n");
	printf("\t\t");
	for (i = 0; i < 4; i++)
	{
		printf("    %s ", info_3[i]);
	}
	printf("\n");
	printf("\t\t");
	for (i = 0; i < 4; i++)
	{
		printf("    %s ", info_4[i]);
	}
	printf("\n");
	printf("\t\t");
	for (i = 0; i < 4; i++)
	{
		printf("    %s ", info_5[i]);
	}
	printf("\n");
	printf("\t\t=============================================\n");
	fflush(stdin);
	printf("\t\t  ��ȣ �Է� >> ");
	scanf("%s", num); // �ð�����
	/* 
	if-else check selected number and information number case by case.
	*/
	if (strcmp(num, info_1[0])==0)
	{
		system("cls"); //ȭ���� �ʱ�ȭ�Ѵ�.
		printf("\n\n");
		printf("\t\t=============================================\n");
		printf("\t\t    %s ���� ����  (%s) -> (%s) \n", (pData->Date), (pData->Start), (pData->End));
		printf("\t\t=============================================\n");
		printf("\t\t  ��ȣ   ��߽ð�  �����ð�    ����  \n");
		fseek(TrainDB, 0, SEEK_CUR);
		printf("\t\t");
		for (i = 0; i < 4; i++)
		{
			printf("    %s ", info_1[i]);
		}
		fflush(stdin);
		printf("\n\t\t  �� ���� �Ͻðڽ��ϱ� ? (Y/N) >> ");
		scanf("%c", &yesorno);
		if (yesorno == 'Y' || yesorno == 'y')
		{
			printf("\t\t  ���� �Ϸ�!\n");
			strcpy(pData->Fee, info_1[3]);
			strcpy(pData->Time_start, info_1[1]);
			strcpy(pData->Time_end, info_1[2]);
			fprintf(userdata, "%s %s %s %s %s %s\n", pData->Date, pData->Start, pData->End, pData->Time_start, pData->Time_end, pData->Fee); // ��¥ ����� ������ �ð� ���
			Sleep(1000);
			fflush(stdin);
			system("cls");
			SelectMenu();
		}
		else
		{
			printf("\n");
			printf("\t\t ���� �޴��� ���ư��ϴ�..\n");
			Sleep(1000);
			SelectMenu();
		}
	}
	else if (strcmp(num, info_2[0]) == 0)
	{
		system("cls");
		printf("\n\n");
		printf("\t\t=============================================\n");
		printf("\t\t    %s ���� ����  (%s) -> (%s) \n", (pData->Date), (pData->Start), (pData->End));
		printf("\t\t=============================================\n");
		printf("\t\t  ��ȣ   ��߽ð�  �����ð�    ����  \n");
		fseek(TrainDB, 0, SEEK_CUR);
		printf("\t\t");
		for (i = 0; i < 4; i++)
		{
			printf("    %s ", info_2[i]);
		}
		fflush(stdin);
		printf("\n\t\t  �� ���� �Ͻðڽ��ϱ� ? (Y/N) >> ");
		scanf("%c", &yesorno);
		if (yesorno == 'Y' || yesorno == 'y')
		{
			printf("\t\t  ���� �Ϸ�!\n");
			strcpy(pData->Fee, info_2[3]);
			strcpy(pData->Time_start, info_2[1]);
			strcpy(pData->Time_end, info_2[2]);
			fprintf(userdata, "%s %s %s %s %s %s\n", pData->Date, pData->Start, pData->End, pData->Time_start, pData->Time_end, pData->Fee); // ��¥ ����� ������ �ð� ���
			Sleep(1000);
			fflush(stdin);
			system("cls");
			SelectMenu();
		}
		else
		{
			printf("\n");
			printf("\t\t ���� �޴��� ���ư��ϴ�..\n");
			Sleep(1000);
			SelectMenu();
		}
	}
	else if (strcmp(num, info_3[0]) == 0)
	{
		system("cls");
		printf("\n\n");
		printf("\t\t=============================================\n");
		printf("\t\t    %s ���� ����  (%s) -> (%s) \n", (pData->Date), (pData->Start), (pData->End));
		printf("\t\t=============================================\n");
		printf("\t\t  ��ȣ   ��߽ð�  �����ð�    ����  \n");
		fseek(TrainDB, 0, SEEK_CUR);
		printf("\t\t");
		for (i = 0; i < 4; i++)
		{
			printf("    %s ", info_3[i]);
		}
		fflush(stdin);
		printf("\n\t\t  �� ���� �Ͻðڽ��ϱ� ? (Y/N) >> ");
		scanf("%c", &yesorno);
		if (yesorno == 'Y' || yesorno == 'y')
		{
			printf("\t\t  ���� �Ϸ�!\n");
			strcpy(pData->Fee, info_3[3]);
			strcpy(pData->Time_start, info_3[1]);
			strcpy(pData->Time_end, info_3[2]);
			fprintf(userdata, "%s %s %s %s %s %s\n", pData->Date, pData->Start, pData->End, pData->Time_start, pData->Time_end, pData->Fee); // ��¥ ����� ������ �ð� ���
			Sleep(1000);
			fflush(stdin);
			system("cls");
			SelectMenu();
		}
		else
		{
			printf("\n");
			printf("\t\t ���� �޴��� ���ư��ϴ�..\n");
			Sleep(1000);
			SelectMenu();
		}
	}
	else if (strcmp(num, info_4[0]) == 0)
	{
		system("cls");
		printf("\n\n");
		printf("\t\t=============================================\n");
		printf("\t\t    %s ���� ����  (%s) -> (%s) \n", (pData->Date), (pData->Start), (pData->End));
		printf("\t\t=============================================\n");
		printf("\t\t  ��ȣ   ��߽ð�  �����ð�    ����  \n");
		fseek(TrainDB, 0, SEEK_CUR);
		printf("\t\t");
		for (i = 0; i < 4; i++)
		{
			printf("    %s ", info_4[i]);
		}
		fflush(stdin);
		printf("\n\t\t  �� ���� �Ͻðڽ��ϱ� ? (Y/N) >> ");
		scanf("%c", &yesorno);
		if (yesorno == 'Y' || yesorno == 'y')
		{
			printf("\t\t  ���� �Ϸ�!\n");
			strcpy(pData->Fee, info_4[3]);
			strcpy(pData->Time_start, info_4[1]);
			strcpy(pData->Time_end, info_4[2]);
			fprintf(userdata, "%s %s %s %s %s %s\n", pData->Date, pData->Start, pData->End, pData->Time_start, pData->Time_end, pData->Fee); // ��¥ ����� ������ �ð� ���
			Sleep(1000);
			fflush(stdin);
			system("cls");
			SelectMenu();
		}
		else
		{
			printf("\n");
			printf("\t\t ���� �޴��� ���ư��ϴ�..\n");
			Sleep(1000);
			SelectMenu();
		}
	}
	else if (strcmp(num, info_5[0]) == 0)
	{
		system("cls");
		printf("\n\n");
		printf("\t\t=============================================\n");
		printf("\t\t    %s ���� ����  (%s) -> (%s) \n", (pData->Date), (pData->Start), (pData->End));
		printf("\t\t=============================================\n");
		printf("\t\t  ��ȣ   ��߽ð�  �����ð�    ����  \n");
		fseek(TrainDB, 0, SEEK_CUR);
		printf("\t\t");
		for (i = 0; i < 4; i++)
		{
			printf("    %s ", info_5[i]);
		}
		fflush(stdin);
		printf("\n\t\t  �� ���� �Ͻðڽ��ϱ� ? (Y/N) >> ");
		scanf("%c", &yesorno);
		if (yesorno == 'Y' || yesorno == 'y')
		{
			printf("\t\t  ���� �Ϸ�!\n");
			strcpy(pData->Fee, info_5[3]);
			strcpy(pData->Time_start, info_5[1]);
			strcpy(pData->Time_end, info_5[2]);
			fprintf(userdata, "%s %s %s %s %s %s\n", pData->Date, pData->Start, pData->End, pData->Time_start, pData->Time_end, pData->Fee); // ��¥ ����� ������ �ð� ���
			Sleep(1000);
			fflush(stdin);
			system("cls");
			SelectMenu();
		}
		else
		{
			printf("\n");
			printf("\t\t ���� �޴��� ���ư��ϴ�..\n");
			Sleep(1000);
			SelectMenu();
		}
	}
	else
	{
		printf("\t\t   �߸��� ���� �Է��ϼ̽��ϴ�...");
		printf("\t\t   ���� �޴��� ���ư��ϴ�.");
		Sleep(1000);
		SelectMenu();
		fflush(stdin);
	}

}//void Select_Time();

void Check()
{
	system("mode con:cols=100 lines=40");
	int i;
	int buffer; //������ ������� Ȯ���ϴ� ����
	char user_data[5][20]; //����� ���� �ӽ� �����
	
	userdata = fopen(file_name, "r");
	
	buffer = fgetc(userdata); //������ ���������� üũ�Ѵ�.
	if (feof(userdata) != 0)
	{
		printf("\t\t=======================================================================\n");
		printf("\t\t                   %s ���� ���� ���� ��Ȳ\n", username);
		printf("\t\t=======================================================================\n");
		printf("\t\t         ��߳�¥   �����    ������   ��߽ð�  �����ð�   ���\n");
		printf("\n");
		printf("\t\t���ų����� �������� �ʽ��ϴ�.\n");
		printf("\t\t���θ޴��� ���ư��� ���ؼ� �ƹ� ��ư�̳� �����ּ���");
		fclose(userdata);
		fflush(stdin);
		getchar();
		SelectMenu();
	}
	fseek(userdata, -1, SEEK_CUR);//������ ���� �ƴҰ�� Ŀ���� ������ ó������ �̵���Ų��.

	printf("\n\n");
	printf("\t\t=======================================================================\n");
	printf("\t\t                           %s ���� ���� ���� ��Ȳ\n", username);
	printf("\t\t=======================================================================\n");
	printf("\t\t         ��߳�¥   �����    ������   ��߽ð�  �����ð�   ���\n");
	printf("\t\t     ");
	fflush(stdin);
	while (1)
	{
		for (i = 0; i < 6; i++)
		{
			fscanf(userdata, "%s", user_data[i]); //�Ѱ��� ������ ���� �Է¹޴´�.
			if (fgetc(userdata) == EOF) //������ ���� �����ϸ� Ż��
			{
				printf("\n\t\t���ư����� �ƹ� ��ư�̳� ���� �ּ���....");
				getchar();
				system("cls");
				SelectMenu();
			}
		}
		for (i = 0; i < 6; i++)
		{
			printf("%10s", user_data[i]);
		}
		printf("\n\t\t     ");
	}

} //void Check();


void Cancel()
{
	system("mode con:cols=100 lines=40");
	User *User_Visited, *p_User_Data, User_Data; //�����͸� �ڱ������� ����ü�� �����ϱ����� ������ ����
	User *Delete_Visited, *Delete_Prev;//�����͸� �����ϱ����� ����
	int nPosition, nIndex = 1; //�����ϰ���� ��ġ�� �Է¹ޱ����� ������ ������ġ�� �˱����� ����
	FILE *readfp, *writefp;//������ �а� �������� ���� ������ ����
	int buffer,DeleteFlag=FALSE; //������ ������� Ȯ���ϱ� ���� ������ ������ �Ϸ�Ǿ����� Ȯ���ϴ� ����

	readfp = fopen(file_name, "r+"); //���������� ����� ������ ����.
	buffer = fgetc(readfp); //������ ���������� üũ�Ѵ�.
	if (feof(readfp)!=0)
		{
			printf("\t\t=======================================================================\n");
			printf("\t\t                   %s ���� ���� ���� ��Ȳ\n", username);
			printf("\t\t=======================================================================\n");
			printf("\t\t         ��߳�¥   �����    ������   ��߽ð�  �����ð�   ���\n");
			printf("\n");
			printf("\t\t���ų����� �������� �ʽ��ϴ�.\n");
			printf("\t\t���θ޴��� ���ư��� ���ؼ� �ƹ� ��ư�̳� �����ּ���");
			fclose(readfp);
			fflush(stdin);
			getchar();
			SelectMenu();
		}

	fseek(readfp, -1, SEEK_CUR);//Ŀ���� ������ ó������ �̵���Ų��.
	printf("\t\t=======================================================================\n");
	printf("\t\t                   %s ���� ���� ���� ��Ȳ\n", username);
	printf("\t\t=======================================================================\n");
	printf("\t\t         ��߳�¥   �����    ������   ��߽ð�  �����ð�   ���\n");
	
	//linking data
	while (fscanf(readfp, "%s %s %s %s %s %s\n", User_Data.Date, User_Data.Start, User_Data.End, User_Data.Time_start, User_Data.Time_end, User_Data.Fee) != EOF) //������ ���ÿ� ������ ���� �����ϸ� ���Ϲ��� Ż���Ѵ�.
	{
		
		printf("\t\t     %10s%10s%10s%10s%10s%10s\n", User_Data.Date, User_Data.Start, User_Data.End, User_Data.Time_start, User_Data.Time_end, User_Data.Fee); //�ӽ�����ҿ� ����� ������ ����Ѵ�.
		p_User_Data = (User *)malloc(sizeof(User));

		//strcpy�� �̿��� �迭�� ����Ǿ� �ִ� ���ڿ��� ����ü �����Ϳ� �����Ѵ�.
		strcpy(p_User_Data->Date, User_Data.Date);
		strcpy(p_User_Data->Start, User_Data.Start);
		strcpy(p_User_Data->End, User_Data.End);
		strcpy(p_User_Data->Time_start, User_Data.Time_start);
		strcpy(p_User_Data->Time_end, User_Data.Time_end);
		strcpy(p_User_Data->Fee, User_Data.Fee);

		p_User_Data->link = NULL; 
		User_Visited = User_Header; //��ȸ�������� ������ ��������ͷ� �����Ѵ�.

		if (User_Visited == NULL) //ù��° ����϶�
		{
			User_Header = p_User_Data; //��������͸� ù �����ͷ� �����Ѵ�. 
			continue;
		}
		while (User_Visited != NULL) //������ ���� �̵��Ѵ�
		{
			if (User_Visited->link == NULL)
				break; //��������忡 �����ϸ� Ż��
			User_Visited = User_Visited->link;
		}
		User_Visited->link = p_User_Data; //������ ����� ��ũ�� ���� �����Ͱ��� �����Ѵ�.
	}
	fclose(readfp); //�б���� �� ������ �ݴ´�.

	//delete data
	printf("\n\n");
	printf("\t\t================================================\n");
	printf("\t                      �������\n");
	printf("\t\t================================================\n");
	printf("\t\t���° ���Ÿ� ����Ͻðڽ��ϱ�? >> ");
	scanf("%d", &nPosition); //������ ����� ��ġ �Է�
	
	Delete_Visited = User_Header;

	if(nPosition < 1) // nPosition�� 1���� ���� ��� ������ ����ϸ� �Լ��� �����Ѵ�.
	{ 
		printf("\t  Invalid postion!!\n");
		return;
	}
	else if (nPosition == 1) // nPosition�� 1�� ��� ���� ��带 ����� ������ �Ǵ��Ͽ� ���� ó���Ѵ�.
	{
		User_Header = User_Header->link; // ���� ��带 �� ���� ���� �������ְ� ���� ��忴�� �����͸� free ���ش�.
		free(Delete_Visited);
	}
	
	else
	{
		Delete_Prev = NULL; // ���� ��带 �����ϴ� �����͸� NULL�� �ʱ�ȭ�Ѵ�.
		while (Delete_Visited != NULL)// ��ȸ�����Ͱ� NULL�� �ƴ� ������ �ݺ��Ѵ�.
		{ 
			if (nIndex == nPosition)
			{
				DeleteFlag = TRUE;
				// ������ ����� ��ũ�� ���� ����� ��ũ�� �������ش�.
				Delete_Prev->link = Delete_Visited->link; // ������ ����� ��ũ�� ���� ����� ��ũ�� �������ش�.
				// �����带 �޸� ������Ų��.
				free(Delete_Visited);	// �����带 �޸� ������Ų��.
				break;
			}
			// ���� ��� �����͸� ���� ���� �������ش�.
			Delete_Prev = Delete_Visited; // ���� ��� �����͸� ���� ���� �������ش�.
			// ���� ��带 ���� ���� �������ش�.
			Delete_Visited = Delete_Visited->link; // ���� ��带 ���� ���� �������ش�.
			// ��� ° ������� üũ�ϴ� nIndex ������ ������Ų��.
			nIndex++; // ��� ° ������� üũ�ϴ� nIndex ������ ������Ų��.
		}

		//�ڷ� ������ �ʰ��ϴ� ���ڸ� �Է¹޾� ��� ������ �����ʰ� ���θ޴��� ���ư�
		if (!DeleteFlag)
		{
			//�޸��ʱ�ȭ
			while (User_Header != NULL)
			{
				User_Visited = User_Header;
				User_Header = User_Header->link;
				free(User_Visited);
			}
			printf("\n\n");
			printf("\t\t�߸��� ��ȣ�� �Է��ϼ̽��ϴ�. \n");
			printf("\t\t���θ޴��� ���ư��� ���ؼ� �ƹ� ��ư�̳� �����ּ���");
			fflush(stdin);
			getchar();
			SelectMenu();
		}
	}
	fflush(stdin);
	//write data
	User_Visited = User_Header; //��ȸ�������� ������ ��������ͷ� �����Ѵ�.
	writefp= fopen(file_name, "w");
	if (User_Visited == NULL) //���ų����� ���� �������� ��� ���Ͽ� �������� �޸𸮿� ������ ��� ������ ����Ƿ� ������ �����Ѵ�.
	{
		fclose(writefp); //������� �� ������ �ݴ´�.
		printf("\n\n");
		printf("\t\t������� �Ϸ�!!\n");
		printf("\t\t���θ޴��� ���ư��� ���ؼ� �ƹ� ��ư�̳� �����ּ���");
		getchar();
		SelectMenu();
	}
	else
	{
		while (1)
		{
			fprintf(writefp, "%s %s %s %s %s %s\n", User_Visited->Date, User_Visited->Start, User_Visited->End, User_Visited->Time_start, User_Visited->Time_end, User_Visited->Fee); //���� ���Ͽ� ����.
		
			if (User_Visited->link == NULL) //��尡 �������� �����ϸ� Ż���Ѵ�.
				break;
			User_Visited = User_Visited->link; //�������� �̵��Ѵ�.
		}
		fclose(writefp); //������� �� ������ �ݴ´�.
		printf("\n\n");
		printf("\t\t������� �Ϸ�!!\n");
		printf("\t\t���θ޴��� ���ư��� ���ؼ� �ƹ� ��ư�̳� �����ּ���");
		
		//�޸� �ʱ�ȭ
		while (User_Header!= NULL)
		{	
			User_Visited = User_Header;
			User_Header = User_Header->link;
			free(User_Visited);
		}

		getchar();
		SelectMenu();
	}
	
} //Cancel();