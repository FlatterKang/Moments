#include"user.h"
#include<iostream>
#include<fstream>
using namespace std;

user::user(){
	cout<<"�������û�����(������20���ַ�)";
	cin>>userName;
	cout<<"�������û����루������20���ַ���";
	cin>>password;
}

bool userList::addUser(user newUser){

	ifstream inf;
	inf.open("users.txt",ios::app,0);
	inf>>newUser.getUserName()>>" ">>newUser.getPassword()>>"\n";
	inf.close();
	cout<<"�û���Ϣ¼��ɹ�";
}

char* user::getUserName(){
	return userName;
}
char* user::getPassword(){
	return password;
}

int* user::getPurchasedGoods(){
	int k;
	for(k = 0;k<data.userList.getSize();k++)
		if(userName == data.userList.arrayList[k])
			return int;
}







	userList::userList()            //���ļ���ʼ���û���Ϣ
	{

	}
	bool userList::addUser()        //��������д��һ���û���Ϣ
	{

	}
	bool userList::delUser()        //������ɾ��һ���û���Ϣ
	{

	}
	bool userList::displayUser()    //����չʾ�����û���Ϣ
	{

	}