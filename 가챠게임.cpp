#include<stdio.h>
#include<stdlib.h>
#include<time.h> // 시간관련 혜더파일  
#include<conio.h> //키보드 입력에 관련한 혜더파일 
 
int main(){
	srand((unsigned int)time(NULL)); //시드값에 시간을 불러오는 명령어 (unsigned int)를 통해 음수값은 받지 않음.                                                //배열을 사용하려고하였으나 실패  
	printf("\n        ■■■■    ■■    ■■■■  ■    ■    ■■\n        ■        ■    ■  ■        ■    ■  ■    ■\n        ■  ■■  ■■■■  ■        ■■■■  ■■■■\n        ■    ■  ■    ■  ■        ■    ■  ■    ■\n        ■■■■  ■    ■  ■■■■  ■    ■  ■    ■\n\n\n");
	int base=0, one, ten, exit;
	do{
		printf("\n     1회 뽑기(space)   ");
		printf("   10회뽑기(enter)   ");
		printf("      종료(ESC)      ");
		printf("   확률확인하기(tab)   \n");
		base = getch();	//base에 키보드입력시 그 버튼의 아스키 코드를 입힘 
		if(base==32){ //아스키 코드가 32 즉 스페이스 바일때  
			one = rand()%10+50;
			//printf("%d",one); //테스트용  
			if(one%50==0){
				printf("\n SSR획득\n\n");
			}
			if(one%10==0&&one%50!=0){
				printf("\n SR획득\n\n");
			} 
			if(one%4==0&&one%10!=0){
				printf("\n R획득\n\n");
			}
			if(one%4!=0&&one%10!=0){
				printf("\n N획득\n\n");
			}
		} 
		if(base==13){ //아스키코드가 13 즉 엔터키일때 
			printf("\n");
			int ten[10]; //숫자값의 배열을 만들어줌 
			for(int i=1; i<=10; i++){
				ten[i] = rand()%100+1; //랜덤값을 100으로 나누어 0부터 99까지의 수를 구하고 +1로 1부터 100까지의 숫자범위를 잡아줌 
				//printf("%d ",ten[i]); //테스트용  
				if(ten[i]%50==0){
					printf(" SSR획득");
				}
				if(ten[i]%10==0&&ten[i]%50!=0){
					printf(" SR획득");
				} 
				if(ten[i]%4==0&&ten[i]%10!=0){
					printf(" R획득");
				}
				if(ten[i]%4!=0&&ten[i]%10!=0){
					printf(" N획득");
				}
			}
			printf("\n\n");
		}
		if(base==9){ //아스키코드가 9, 탭키일때 
			printf("\n확률표[ SSR : 2%%   SR : 8%%  R : 15%%  N : 75%%  ]\n\n");
		}
		
		//printf("%d",base); base값 테스트용  
	}while(base!=27); //ESC 키를 누르면 아스키 코드 값으로 27이 아닐때 반복이 중지됨 
	
}
