/*
개발자 : 한재혁
개발일 : 2021.09.09
문의 : janho8013@naver.com
*/ 

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

void exit(int status);
void asd();
void scr();
void inv();
int sel1(int select);
int sel2(int select2);
int inveen(int inv);

int main(void)  //프로그램 실행:Ctrl+F5
{
 printf("\n\n\n          =============================================================\n\n\n\n\n");
 printf("\n                                     방탈출                     \n\n\n\n");           
 printf("\n\n          =============================================================\n\n\n\n\n");
 printf("\n1)게임 시작\n");
 printf("\n2)게임 종료\n");

 int a=1;
 int b=1;
 int c=1;

 /* 첫번째 스테이지 비밀번호 선언문 */
 int e[3] = {1,2,7};

 /* 두번째 스테이지 비밀번호 선언문 */
 int f[3] = {1,2,7};


 scanf("%d",&a);
 switch(a)
 {
 case 1:
  { 
   system("cls"); printf("게임 시작\n"); system("pause"); system("cls");
   printf("\n		나는 지금 홀로 산속에 들어왔다가 갑작스러운 비와 안개 때문에 길을 잃었다.		\n");
   sleep(2);
   printf("\n		지금은 안개가 사라졌지만 내가 지금까지온 길을 찾을수는 없다.		\n");    
	sleep(2);
   printf("\n		한참을 걸었을때 나는 산에 오를때는 보이지 않던 한 건물이 보였다.		\n");    
 	sleep(2);
   printf("\n		그 건물에 가까워 졌을때 호텔이라는 간판이 보였다.		\n"); sleep(2);   system("pause"); system("cls");
 
  
 printf("\n\n\n===============================================================================\n\n\n\n\n\n\n\n");
    printf("                               이 호텔에 들어가야 할까...?");
    printf("\n\n\n\n\n\n\n===============================================================================\n");
    printf("				1.yes  2.no\n");
    scanf("%d",&b);
  	switch(b)  
{   

    case 1:
    	
{
	system("cls");
		printf("\n	산속에 호텔이라...뭔가 수상해 보이지만	\n");
    	sleep(2);
		printf("\n	마땅히 머물곳도 없으니 들어가 보기로 한다	\n"); 
      	sleep(2);
    	printf("\n	문을 열고 들어가니 어두운 공간에 작은 불빛 하나만 보였다	\n");
      	sleep(2);
    	printf("\n	불빛을 향해 걸어가던 그때 쿵소리화 함깨 문이 잠기고 한 여인이 나타났다\n");
    	sleep(2);
    	printf("\n	그녀는 자신을 미네르바라고 소개했다.	\n");	
    	sleep(2);
    	printf("\n	미네르바는 아침이 되면 길이 보일것이니 하루밤 머무르게 해주겠다고 말했다.	\n	그대신 절대로 빛이 없이는 돌아다니지 말라고 했다.	\n");
		sleep(2);   system("pause"); system("cls");	
		printf("\n\n\n===============================================================================\n\n\n\n\n\n\n\n");
    	printf("                              그녀의 말을 듣는것이 좋을까...?");
    	printf("\n\n\n\n\n\n\n===============================================================================\n");	
    	printf("			1.yes 		2.no\n");
    	scanf("%d",&c);
    switch (c)
    	{

		
   		case(1):
    		system("cls");
			printf("\n	나는 미네르바의 말을 듣고 하루밤 머무르기로 했다.	\n");
			sleep(2);
			printf("\n	미네르바는 나를 307호로 안내해줬다.	\n");
			sleep(2);
			printf("\n	그녀가 다시 올때까지 할수 있는걸 찾아 보자	\n");
			sleep(2); system("pause"); system("cls"); 
				asd();
		

	if(c==2){
	 
    	case(2): 
			system("cls");
			printf("\n	나는 처음 보는 여자의 말을 듣지 않고 밖으로 걸어 나갔다.	\n");
			sleep(2);
			printf("\n	그리고 숲 밖으로 나갈수 없었다.... (Bed Ending)	\n"); 	break;
			}
		break;
		}//switch c
}//switch a case 1
	if(b==2)
	{
		case 2:
			system("cls");
			printf("\n	나는 수상한 건물에 들어가지 않고");
			sleep(1);
			printf("\n	길을 찾아 나가기로 했다.");
			sleep(2);
			printf("\n	하지만 길을 찾지 못하고 영원히 산속을 벗어날수 없었다.");
		break; 
	}

}

	if(a==2){

	case (2):
		printf("\n\n		게임 종료\n");	}
	}//스위치 a  
}
}

void asd() {
	
	int sel;
	
	while(sel)
	{
 		printf("\n\n\n===============================================================================\n\n\n\n\n\n\n\n");
    	printf("			307호 방안 ");
    	printf("\n\n\n\n\n\n\n===============================================================================\n");
		printf("1.침대	2.옷장	3.샹들리에	4.미니냉장고	5.방 밖으로 나간다.\n");
		printf("0. 인벤토리\n");
		break;
	}
	scanf("%d",&sel);
	system("cls");

	sel1(sel);
}

int sel1(int select) {
	int d,e,f;
	
	switch(select) {
    		system("pause"); system("cls");
		case 1:
			printf("\n\n\n===============================================================================\n\n\n\n\n\n\n\n");
			printf("\n 			호텔이라는 이름답게 2명이 누울수 있는 크기의 침대다.\n");
    		printf("\n\n\n\n\n\n\n===============================================================================\n");
			system("pause"); system("cls");
			asd();
		break;
		
		case 2:
			printf("\n\n\n===============================================================================\n\n\n\n\n\n\n\n");
			printf("\n 			어두워서 옷장 안이 보이지 않는다.\n");
    		printf("\n\n\n\n\n\n\n===============================================================================\n");
			system("pause"); system("cls");
			asd();
		break;
		
		case 3:
			printf("\n\n\n===============================================================================\n\n\n\n\n\n\n\n");
			printf("\n			조금 타다 남은 촛불이 3개 남아 있다.\n");
			printf("\n			3개의 촛불은 가지고 다니며 빛을 밝힐수 있을것 같다.\n");
    		printf("\n\n\n\n\n\n\n===============================================================================\n");
			sleep(2); system("cls");
			
			printf("\n\n\n===============================================================================\n\n\n\n\n\n\n\n");
			printf("\n			촛불을 가져가겠습니까?.\n");
    		printf("\n\n\n\n\n\n\n===============================================================================\n");
    		printf("			1.yes	2.no\n");
    		scanf("%d",&d);
    		system("cls");
    		if(d==1)
    		{
    			printf("\n\n\n===============================================================================\n\n\n\n\n\n\n\n");
				printf("\n			촛불을 챙겼다.\n");
				printf("	(촛불은 4개의 방을 이동할시 더이상 사용할수 없습니다.)");
    			printf("\n\n\n\n\n\n\n===============================================================================\n");
    			system("pause"); system("cls"); scr(); 
			}
			else if(d==2)
			{
				printf("\n\n\n===============================================================================\n\n\n\n\n\n\n\n");
				printf("\n			더이상 무언가는 없는것 같다.\n");
    			printf("\n\n\n\n\n\n\n===============================================================================\n");
    			system("pause"); system("cls");
    			asd();
			}
			else	printf("선택 오류 입니다\n"); system("pause"); system("cls"); asd();
		
		case 4:	
			printf("\n\n\n===============================================================================\n\n\n\n\n\n\n\n");
			printf("\n		비어있는 냉당고다.\n");
   			printf("\n\n\n\n\n\n\n===============================================================================\n");
   			system("pause"); system("cls");
   			asd();
		case 5:
			printf("\n\n\n===============================================================================\n\n\n\n\n\n\n\n");
			printf("\n			미네르바의 말을 어기고 밖으로 나가겠습니까?.\n");
    		printf("\n\n\n\n\n\n\n===============================================================================\n");
    		printf("		1.yes	2.no\n");
			scanf("%d",&e);
    		system("cls");
    		
    		if(e==1)
    		{
    			sleep(2);
				printf("\n		나는 어두운 복도로 나와 빛을 밝힐 방법을 찾고 있었다.\n");
				sleep(2);
				printf("\n		하지만 미네르바의 경고가 중요하단 사실을 알기까지는 그리 오랜 시간이 걸리지 않았다.\n");
				sleep(2);
				printf("\n		Bed Ending : 괴물의 식사\n");
    			exit(0);
			}
			else if(e==2)
			{
			system("cls"); asd();
			}
			else
			{
				printf("선택 오류 입니다.");
				system("pause"); system("cls"); asd();
			}
		
		case 0:
			printf("아직 아무것도 가지고 있지 않다.\n");
			system("pause"); system("cls"); asd();
		default:
			printf("선택 오류 입니다.");
			system("pause"); system("cls"); asd();
		break; 
	}
}

void scr(){

	int scr2;
	
	while(scr2)
	{
 		printf("\n\n\n===============================================================================\n\n\n\n\n\n\n\n");
    	printf("			307호 방안 ");
    	printf("\n\n\n\n\n\n\n===============================================================================\n");
		printf("1.침대	2.옷장	3.샹들리에	4.미니냉장고	5.방 밖으로 나간다.\n");
		printf("0. 인벤토리\n");
		break;
	}
	scanf("%d",&scr2);
	system("cls");

	sel2(scr2);
}

int sel2(int select2) {
	int key1,post;
	int a; 
	
	switch(select2) {
    		system("pause"); system("cls");
		case 1:
			printf("\n\n\n===============================================================================\n\n\n\n\n\n\n\n");
			printf("\n 			호텔이라는 이름답게 2명이 누울수 있는 크기의 침대다.\n");
			printf("\n			침대 밑에 무언가 있는것 같다.\n");
    		printf("\n\n\n\n\n\n\n===============================================================================\n");
    
			sleep(2);
    		system("cls");	
			printf("\n\n\n===============================================================================\n\n\n\n\n\n\n\n");
    		printf("\n			확인해 보시겠습니까?	\n");
    		printf("\n\n\n\n\n\n\n===============================================================================\n");
    		printf("		1.yes	2.no\n");
    		scanf("%d",&post); 
			system("cls");
			
			if(post==1)
			{
				printf("\n\n\n===============================================================================\n\n\n\n\n\n\n\n");
				printf("\n		침대 밑에서 이전에 머물렀던 사람의 쪽지가 나왔다.\n");
				printf("\n		쪽지의 내용\n");
    			printf("\n\n\n\n\n\n\n===============================================================================\n");
    			system("pause"); system("cls");
    			printf("		이 호텔에 일주일을 머물렀다 하지만 밤마다 들리는 섬뜩한 소리에 잠을 잘수 없었다.\n\n");
				printf("		나는 탈출 하려고 했지만 섬뜩한 소리의 정체를 알수 있었고\n\n");
				printf("		급하게 이 쪽지를 남긴다 섬뜩한 소리의 정체는 ㄱ...\n\n");
				printf("		뒤에 내용은 피로 물들어 알아보기 힘들다.");
				system("pause"); system("cls");
				scr();
			}
			else if(post==2)
			{
				system("pause"); system("cls"); asd();
			}
		
		case 2:
			printf("\n\n\n===============================================================================\n\n\n\n\n\n\n\n");
			printf("\n 			가지고 있는 촛불로 밝혀보니 열쇠가 떨어져 있다.\n");
    		printf("\n\n\n\n\n\n\n===============================================================================\n");
			system("pause"); system("cls");
			scr();
		break;
		
		case 3:
				printf("\n\n\n===============================================================================\n\n\n\n\n\n\n\n");
				printf("\n			더이상 무언가는 없는것 같다.\n");
    			printf("\n\n\n\n\n\n\n===============================================================================\n");
    			system("pause"); system("cls");
    			scr();
			
		case 4:
			printf("\n\n\n===============================================================================\n\n\n\n\n\n\n\n");
			printf("\n		비어있는 냉당고다.\n");
   			printf("\n\n\n\n\n\n\n===============================================================================\n");
   			system("pause"); system("cls");
   			asd();
		case 0:
				
				if(post==1)
				{
					printf("\n\n\n===============================================================================\n\n\n\n\n\n\n\n");
					printf("\n			촛불 3개 , 침대 밑 쪽지 \n");
   					printf("\n\n\n\n\n\n\n===============================================================================\n");
   					printf("			1.침대 밑 쪽지 확인 하기	2.돌아가기\n");
   					scanf("%d",&a);
   					if(a==1)
   					{
   						printf("		이 호텔에 일주일을 머물렀다 하지만 밤마다 들리는 섬뜩한 소리에 잠을 잘수 없었다.\n\n");
						printf("		나는 탈출 하려고 했지만 섬뜩한 소리의 정체를 알수 있었고\n\n");
						printf("		급하게 이 쪽지를 남긴다 섬뜩한 소리의 정체는 ㄱ...");
						printf("		뒤에 내용은 피로 물들어 알아보기 힘들다.");
						system("pause"); system("cls");
						scr();
   						
					   }
					   else if(a==2)
					   {
					   	system("cls"); scr();
					   }
				}
				else
				{
					printf("\n\n\n===============================================================================\n\n\n\n\n\n\n\n");
					printf("\n			촛불 3개 \n");
   					printf("\n\n\n\n\n\n\n===============================================================================\n");
    				system("pause"); system("cls");
   					scr();
   				}
		
		default:
			printf("선택 오류 입니다.");	system("pause"); system("cls"); scr();
			break;
		
			 
	}
}
