#define MAXUSER 100
#define MAXGOODS 50

#include"goods.h"
#include"user.h"

#include<iostream>
using namespace std;

int orderTable[MAXUSER][MAXGOODS];
/* 
* ��ά�������100���û���50����Ʒ��ÿ��λ����ֵ��ʾ������
* ��������ʱ���ù��캯�����ȴ��ļ���ȡһ��
* ����ÿ�α��������update�����������ļ���
*/
userList aUserList;  //�û��б�
goodsList aGoodsList; //��Ʒ�б�

bool push();  //���ڴ���Ӳ�̸��������ļ��е���Ϣ
bool clone(); //��Ӳ�����ڴ���������ļ��е���Ϣ
void initialMenu();  //��ʼ�˵�
void userMenu();     //�û���ͼ�˵�


int main(){
	initialMenu();

	return 0;
}

bool push(){

}

bool clone(){

}

void initialMenu(){
	int choice;            //����ѡ��
	printf("\n\n");
	printf("\t------------------------------------\n");
	printf("\t|     ��ӭʹ����Ʒ�Ƽ�����ϵͳ     |\n");
	printf("\t------------------------------------\n");
	printf("\t-------------1.�û�ע��-------------\n");
	printf("\t-------------2.�û���¼-------------\n");
	printf("\t-------------3.�����Ʒ-------------\n");
	printf("\t-------------4.������Ʒ-------------\n");
	printf("\t-------------5.ɾ����Ʒ-------------\n");
	printf("\t-------------6.������ʾ������Ʒ---\n");
	printf("\t-------------0.�˳�ϵͳ-------------\n");
	printf("\t��ѡ���� 0-6 ��");
	scanf("%d",&choice);
	getchar();
	system("cls");       //��������
	switch(choice){
	case 1:
		userList::addUser();
	}
}
void userMenu(){

}