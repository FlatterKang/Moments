/* 
* �û����ԣ�
* �û������20���ַ�
* ���룺�20���ַ�
* ������Ʒ�����û����
*
* �û����ܣ�
a.�����û�����������ɵ�¼
b.ѡ�����е���Ʒ
b.��ȡ���Ƽ�����Ʒ
c.��Ʒ�Ĳ���������
d.�û������ѣ��Ĳ���������

*/

#include"goods.h"
#include <iostream>
using namespace std;

#ifndef USER
#define USER
class user{
private:
	char userName[20];
	char password[20];
	goodsList purchasedGoods;

public:
	user();
	char* getUserName(); 
	char* getPassword();
	int* getPurchasedGoods();

	


	bool purchase(goods goodsToBePurchased){

	}

	int getRecommendedGoods(){

	}

};
#endif

#ifndef USERLIST
#define USERLIST
class userList{
private:
	user arrayList[100];
	int size;

public:
	userList();  //���ļ���ʼ���û���Ϣ
	bool addUser(user newUser);        //��������д��һ���û���Ϣ
	bool delUser(char* delUserName);   //������ɾ��һ���û���Ϣ
	void displayUser();                //����չʾ�����û���Ϣ

	int getSize(){
		return size;
	}
};
#endif