#include"user.h"
#include<iostream>
#include<fstream>
using namespace std;

user::user(){
	cout<<"请输入用户姓名(不大于20个字符)";
	cin>>userName;
	cout<<"请输入用户密码（不大于20个字符）";
	cin>>password;
}

bool userList::addUser(user newUser){

	ifstream inf;
	inf.open("users.txt",ios::app,0);
	inf>>newUser.getUserName()>>" ">>newUser.getPassword()>>"\n";
	inf.close();
	cout<<"用户信息录入成功";
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







	userList::userList()            //从文件初始化用户信息
	{

	}
	bool userList::addUser()        //向数组中写入一条用户信息
	{

	}
	bool userList::delUser()        //从数组删除一条用户信息
	{

	}
	bool userList::displayUser()    //排序并展示所有用户信息
	{

	}