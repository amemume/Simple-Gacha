#include<stdio.h>
#include<stdlib.h>
#include<time.h> // �ð����� ��������  
#include<conio.h> //Ű���� �Է¿� ������ �������� 
 
int main(){
	srand((unsigned int)time(NULL)); //�õ尪�� �ð��� �ҷ����� ��ɾ� (unsigned int)�� ���� �������� ���� ����.                                                //�迭�� ����Ϸ����Ͽ����� ����  
	printf("\n        �����    ���    �����  ��    ��    ���\n        ��        ��    ��  ��        ��    ��  ��    ��\n        ��  ���  �����  ��        �����  �����\n        ��    ��  ��    ��  ��        ��    ��  ��    ��\n        �����  ��    ��  �����  ��    ��  ��    ��\n\n\n");
	int base=0, one, ten, exit;
	do{
		printf("\n     1ȸ �̱�(space)   ");
		printf("   10ȸ�̱�(enter)   ");
		printf("      ����(ESC)      ");
		printf("   Ȯ��Ȯ���ϱ�(tab)   \n");
		base = getch();	//base�� Ű�����Է½� �� ��ư�� �ƽ�Ű �ڵ带 ���� 
		if(base==32){ //�ƽ�Ű �ڵ尡 32 �� �����̽� ���϶�  
			one = rand()%10+50;
			//printf("%d",one); //�׽�Ʈ��  
			if(one%50==0){
				printf("\n SSRȹ��\n\n");
			}
			if(one%10==0&&one%50!=0){
				printf("\n SRȹ��\n\n");
			} 
			if(one%4==0&&one%10!=0){
				printf("\n Rȹ��\n\n");
			}
			if(one%4!=0&&one%10!=0){
				printf("\n Nȹ��\n\n");
			}
		} 
		if(base==13){ //�ƽ�Ű�ڵ尡 13 �� ����Ű�϶� 
			printf("\n");
			int ten[10]; //���ڰ��� �迭�� ������� 
			for(int i=1; i<=10; i++){
				ten[i] = rand()%100+1; //�������� 100���� ������ 0���� 99������ ���� ���ϰ� +1�� 1���� 100������ ���ڹ����� ����� 
				//printf("%d ",ten[i]); //�׽�Ʈ��  
				if(ten[i]%50==0){
					printf(" SSRȹ��");
				}
				if(ten[i]%10==0&&ten[i]%50!=0){
					printf(" SRȹ��");
				} 
				if(ten[i]%4==0&&ten[i]%10!=0){
					printf(" Rȹ��");
				}
				if(ten[i]%4!=0&&ten[i]%10!=0){
					printf(" Nȹ��");
				}
			}
			printf("\n\n");
		}
		if(base==9){ //�ƽ�Ű�ڵ尡 9, ��Ű�϶� 
			printf("\nȮ��ǥ[ SSR : 2%%   SR : 8%%  R : 15%%  N : 75%%  ]\n\n");
		}
		
		//printf("%d",base); base�� �׽�Ʈ��  
	}while(base!=27); //ESC Ű�� ������ �ƽ�Ű �ڵ� ������ 27�� �ƴҶ� �ݺ��� ������ 
	
}
