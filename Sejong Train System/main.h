// Sejong Train System v.0.1
// Code By : 15010955 임주영
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

//예매정보 저장을 위한 구조체
typedef struct Train_info
{
	char Fee[10];//요금
	char Date[10];//예매날짜
	char Start[10];//출발지
	char End[10]; //도착지
	char Time_start[10]; //출발시간
	char Time_end[10]; //도착시간
}Train;

//예매 취소를 위한 자기참조형 구조체
typedef struct User_info
{
	char Fee[10];//요금
	char Date[10];//예매날짜
	char Start[10];//출발지
	char End[10]; //도착지
	char Time_start[10]; //출발시간
	char Time_end[10]; //도착시간
	struct User_info *link; //자기참조형 구조체
}User;

//여러 함수에서 쓰이므로 전역변수로 선언
Train *pData;

// header pointer
User *User_Header= NULL;

//File Pointer
FILE * userdata; //사용자 정보
FILE * TrainDB; //기차정보

//*******초기화면******/////
//------------------------------------------------------------------
// func name : PrintLogo();
// pre condition : NONE
// post condition : NONE
// function : STS로고를 출력한다..
//------------------------------------------------------------------
void PrintLogo();

//------------------------------------------------------------------
// func name : PrintLoading();
// pre condition : NONE
// post condition : NONE
// function : 로딩바를 움직인다.
//------------------------------------------------------------------
void PrintLoading();

//------------------------------------------------------------------
// func name : Login();
// pre condition : NONE
// post condition : NONE
// function : 로그인 화면을 출력하고, 사용자 이름으로 파일을 생성한다.
//-----------------------------------------------------------------
void Login();

//------------------------------------------------------------------
// func name : Exit();
// pre condition : NONE
// post condition : NONE
// function : 종료화면을 출력하고 프로그램을 종료한다.
//------------------------------------------------------------------
void Exit();

//------------------------------------------------------------------
// func name :credit();
// pre condition : NONE
// post condition : NONE
// function : 제작자 정보를 표시한다.
//------------------------------------------------------------------
void credit();

/**********메뉴선택*************/
//------------------------------------------------------------------
// func name : SelectMenu();
// pre condition : NONE
// post condition : NONE
// function : 예매하기, 예매확인, 예매취소 메뉴를 선택받고 실행시킨다.
//------------------------------------------------------------------
void SelectMenu();

/*********예약하기************/
//------------------------------------------------------------------
// func name : Booking();
// pre condition : NONE
// post condition : NONE
// function : 예매하기위한 첫 함수
//------------------------------------------------------------------
void Booking();

//------------------------------------------------------------------
// func name : Calendar();
// pre condition : NONE
// post condition : NONE
// function : 달력을 출력하고 출발날짜를 입력받는다.
//------------------------------------------------------------------
void Calendar();

//------------------------------------------------------------------
// func name : Location_start();
// pre condition : NONE
// post condition : NONE
// function : 지도를 출력하고 출발지를 입력한다.
//------------------------------------------------------------------
void Location_start();

//------------------------------------------------------------------
// func name : Location_end();
// pre condition : NONE
// post condition : NONE
// function : 지도를 출력하고 도착지를 입력한다.
//------------------------------------------------------------------
void Location_end();

//------------------------------------------------------------------
// func name : PrintTrain_Info();
// pre condition : NONE
// post condition : NONE
// function : 지금까지 입력받은 정보를 바탕으로 선택가능한 기차정보를 출력한다.
//------------------------------------------------------------------
void PrintTrain_Info();

//------------------------------------------------------------------
// func name : Select_Time();
// pre condition : NONE
// post condition : NONE
// function : 출력된 기차정보 중 원하는 시간을 선택하고 입력받고 로그인화면에서 생성된 파일에 저장한다..
//------------------------------------------------------------------
void Select_Time();

//************예약확인**************//
//------------------------------------------------------------------
// func name : Check();
// pre condition : NONE
// post condition : NONE
// function : 파일에 저장된 예매정보를 프로그램에 프린트한다.
//------------------------------------------------------------------
void Check();

//****************예약취소***********//
//------------------------------------------------------------------
// func name : Cancel();
// pre condition : NONE
// post condition : NONE
// function : 파일에 저장된 예매정보를 구조체에 저장하고 삭제한뒤 다시 파일로 저장한다.
//------------------------------------------------------------------
void Cancel();