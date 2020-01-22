// Sejong Train System v.0.1
// Code By : 15010955 ���ֿ�
// Last Modified : 2015.11.13

#include <stdio.h>
#include <Windows.h>
#include <string.h>
#include <stdlib.h>
#include<conio.h>


#define TRUE   1
#define FALSE   0

// for keyboard menu control.

#define LEFT 75
#define RIGHT 77
#define UP 72
#define DOWN 80 
#define ENTER 13

#define BOOKING   1
#define CHECK   2
#define CANCEL   3
#define CREDIT 4
#define EXIT 5

//�������� ������ ���� ����ü
typedef struct Train_info
{
	char Fee[10];//���
	char Date[10];//���ų�¥
	char Start[10];//�����
	char End[10]; //������
	char Time_start[10]; //��߽ð�
	char Time_end[10]; //�����ð�
}Train;

//���� ��Ҹ� ���� �ڱ������� ����ü
typedef struct User_info
{
	char Fee[10];//���
	char Date[10];//���ų�¥
	char Start[10];//�����
	char End[10]; //������
	char Time_start[10]; //��߽ð�
	char Time_end[10]; //�����ð�
	struct User_info *link; //�ڱ������� ����ü
}User;

//���� �Լ����� ���̹Ƿ� ���������� ����
Train *pData;

// header pointer
User *User_Header= NULL;

//File Pointer
FILE * userdata; //����� ����
FILE * TrainDB; //��������

//*******�ʱ�ȭ��******/////
//------------------------------------------------------------------
// func name : PrintLogo();
// pre condition : NONE
// post condition : NONE
// function : STS�ΰ� ����Ѵ�..
//------------------------------------------------------------------
void PrintLogo();

//------------------------------------------------------------------
// func name : PrintLoading();
// pre condition : NONE
// post condition : NONE
// function : �ε��ٸ� �����δ�.
//------------------------------------------------------------------
void PrintLoading();

//------------------------------------------------------------------
// func name : Login();
// pre condition : NONE
// post condition : NONE
// function : �α��� ȭ���� ����ϰ�, ����� �̸����� ������ �����Ѵ�.
//-----------------------------------------------------------------
void Login();

//------------------------------------------------------------------
// func name : Exit();
// pre condition : NONE
// post condition : NONE
// function : ����ȭ���� ����ϰ� ���α׷��� �����Ѵ�.
//------------------------------------------------------------------
void Exit();

//------------------------------------------------------------------
// func name :credit();
// pre condition : NONE
// post condition : NONE
// function : ������ ������ ǥ���Ѵ�.
//------------------------------------------------------------------
void credit();

/**********�޴�����*************/
//------------------------------------------------------------------
// func name : SelectMenu();
// pre condition : NONE
// post condition : NONE
// function : �����ϱ�, ����Ȯ��, ������� �޴��� ���ùް� �����Ų��.
//------------------------------------------------------------------
void SelectMenu();

/*********�����ϱ�************/
//------------------------------------------------------------------
// func name : Booking();
// pre condition : NONE
// post condition : NONE
// function : �����ϱ����� ù �Լ�
//------------------------------------------------------------------
void Booking();

//------------------------------------------------------------------
// func name : Calendar();
// pre condition : NONE
// post condition : NONE
// function : �޷��� ����ϰ� ��߳�¥�� �Է¹޴´�.
//------------------------------------------------------------------
void Calendar();

//------------------------------------------------------------------
// func name : Location_start();
// pre condition : NONE
// post condition : NONE
// function : ������ ����ϰ� ������� �Է��Ѵ�.
//------------------------------------------------------------------
void Location_start();

//------------------------------------------------------------------
// func name : Location_end();
// pre condition : NONE
// post condition : NONE
// function : ������ ����ϰ� �������� �Է��Ѵ�.
//------------------------------------------------------------------
void Location_end();

//------------------------------------------------------------------
// func name : PrintTrain_Info();
// pre condition : NONE
// post condition : NONE
// function : ���ݱ��� �Է¹��� ������ �������� ���ð����� ���������� ����Ѵ�.
//------------------------------------------------------------------
void PrintTrain_Info();

//------------------------------------------------------------------
// func name : Select_Time();
// pre condition : NONE
// post condition : NONE
// function : ��µ� �������� �� ���ϴ� �ð��� �����ϰ� �Է¹ް� �α���ȭ�鿡�� ������ ���Ͽ� �����Ѵ�..
//------------------------------------------------------------------
void Select_Time();

//************����Ȯ��**************//
//------------------------------------------------------------------
// func name : Check();
// pre condition : NONE
// post condition : NONE
// function : ���Ͽ� ����� ���������� ���α׷��� ����Ʈ�Ѵ�.
//------------------------------------------------------------------
void Check();

//****************�������***********//
//------------------------------------------------------------------
// func name : Cancel();
// pre condition : NONE
// post condition : NONE
// function : ���Ͽ� ����� ���������� ����ü�� �����ϰ� �����ѵ� �ٽ� ���Ϸ� �����Ѵ�.
//------------------------------------------------------------------
void Cancel();