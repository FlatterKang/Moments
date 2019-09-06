#define MAXUSER 100
#define MAXGOODS 50

#include"goods.h"
#include"user.h"

#include<iostream>
using namespace std;

int orderTable[MAXUSER][MAXGOODS];
/* 
* 二维数组表单，100行用户，50列商品，每个位置数值表示购买量
* 启动程序时调用构造函数首先从文件读取一次
* 而后每次变更都调用update函数保存至文件中
*/
userList aUserList;  //用户列表
goodsList aGoodsList; //商品列表

bool push();  //由内存向硬盘更新三个文件中的信息
bool clone(); //由硬盘向内存更新三个文件中的信息
void initialMenu();  //初始菜单
void userMenu();     //用户视图菜单


int main(){
	initialMenu();

	return 0;
}

bool push(){

}

bool clone(){

}

void initialMenu(){
	int choice;            //功能选择
	printf("\n\n");
	printf("\t------------------------------------\n");
	printf("\t|     欢迎使用商品推荐管理系统     |\n");
	printf("\t------------------------------------\n");
	printf("\t-------------1.用户注册-------------\n");
	printf("\t-------------2.用户登录-------------\n");
	printf("\t-------------3.添加商品-------------\n");
	printf("\t-------------4.查找商品-------------\n");
	printf("\t-------------5.删除商品-------------\n");
	printf("\t-------------6.排序并显示所有商品---\n");
	printf("\t-------------0.退出系统-------------\n");
	printf("\t请选择功能 0-6 ：");
	scanf("%d",&choice);
	getchar();
	system("cls");       //用于清屏
	switch(choice){
	case 1:
		userList::addUser();
	}
}
void userMenu(){

}