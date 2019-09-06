/* 
* 用户属性：
* 用户名：最长20个字符
* 密码：最长20个字符
* 所购商品：待用户添加
*
* 用户功能：
a.输入用户名和密码完成登录
b.选购已有的商品
b.获取被推荐的商品
c.商品的查找与排序
d.用户（好友）的查找与排序

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
	userList();  //从文件初始化用户信息
	bool addUser(user newUser);        //向数组中写入一条用户信息
	bool delUser(char* delUserName);   //从数组删除一条用户信息
	void displayUser();                //排序并展示所有用户信息

	int getSize(){
		return size;
	}
};
#endif