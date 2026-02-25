#include<stdio.h>
#include<string.h>
// 宏定义：联系人存储限制与字段长度
#define MAX_SIZE 50   // 最大联系人数量
#define NAME_LEN 20   // 姓名最大长度（含'\0'）
#define PHONE_LEN 12  // 电话最大长度（11位手机号+'\0'）
#define EMAIL_LEN 31  // 邮箱最大长度（30字符+'\0'）

// 平行数组：通过索引关联同一联系人的信息（无结构体实现）
char names[MAX_SIZE][NAME_LEN];    // 姓名数组
char phones[MAX_SIZE][PHONE_LEN];  // 电话数组
char emails[MAX_SIZE][EMAIL_LEN];  // 邮箱数组
int count = 0;

// 函数声明：功能模块化封装
void showMenu();                  // 显示主菜单
int isNameExist(char name[]);     // 校验姓名是否已存在（返回索引，不存在返回-1）
int checkPhone(char phone[]);     // 校验手机号合法性（11位数字返回1，否则0）
int checkEmail(char email[]);     // 校验邮箱合法性（含@返回1，否则0）
void addContact();                // 添加联系人
void searchContact();             // 按姓名查询联系人
void modifyContact();             // 修改联系人信息
void deleteContact();             // 删除联系人
void showAllContacts();           // 显示所有联系人

int main() 
{
	int choice;
	// 主循环：持续显示菜单直到用户选择退出
	while (1) 
	{
		showMenu();
		printf("请输入您的选择（1-6）：");
		scanf("%d", &choice);

		// 功能选择分支
		switch (choice) 
		{
		case 1: addContact(); break;
		case 2: searchContact(); break;
		case 3: modifyContact(); break;
		case 4: deleteContact(); break;
		case 5: showAllContacts(); break;
		case 6:
			printf("\n感谢使用通信录管理系统，再见！\n");
			return 0;  // 退出程序
		default:
			printf("\n[错误] 输入无效，请选择1-6之间的数字！\n\n");
		}
	}
}
// 1. 显示主菜单
void showMenu()
{
	printf("==================== 通信录管理系统 ====================\n");
	printf("1. 添加联系人\n");
	printf("2. 查询联系人\n");
	printf("3. 修改联系人\n");
	printf("4. 删除联系人\n");
	printf("5. 显示所有联系人\n");
	printf("6. 退出系统\n");
	printf("======================================================\n");
}

// 2. 校验姓名是否已存在（核心辅助函数）
int isNameExist(char name[]) 
{
	for (int i = 0; i < count; i++) 
	{
		// strcmp返回0表示字符串相等
		if (strcmp(names[i], name) == 0) 
		{
			return i;  // 存在，返回联系人索引
		}
	}
	return -1;  // 不存在
}

// 3. 校验手机号合法性（11位数字）
int checkPhone(char phone[]) 
{
	if (strlen(phone) != 11) 
	{
		return 0;  // 长度不为11位，非法
	}
	for (int i = 0; i < 11; i++)
	{
		if (phone[i] > '9' || phone[i] < '0')
		{
			return 0;  // 包含非数字字符，非法
		}
	}
	return 1;  // 合法
}

// 4. 校验邮箱合法性（仅包含一个@符号且@前面有字符）
int checkEmail(char email[]) 
{
	int cnt = 0, index = -1;
	for (int i = 0; i < strlen(email); i++)
	{
		if (email[i] == '@')
		{
			cnt++;
			index = i;
		}
	}
	if (cnt == 0 || index == 0)
	{
		return 0;
	}
	return 1;
}

// 5. 添加联系人
void addContact()
{
	printf("\n--------------------- 添加联系人 ---------------------\n");
	// 检查通信录是否已满
	if (count >= MAX_SIZE) 
	{
		printf("[提示] 通信录已满，无法添加更多联系人！\n\n");
		return;
	}
	char name[NAME_LEN], phone[PHONE_LEN], email[EMAIL_LEN];
	// 输入并校验姓名
	printf("请输入联系人姓名：");
	scanf("\n%s", name);
	if (isNameExist(name) != -1) 
	{
		printf("[错误] 姓名已存在，请输入不同姓名！\n\n");
		return;
	}
	// 输入并校验手机号
	printf("请输入联系人电话（11位数字）：");
	scanf("\n%s", phone);
	if (!checkPhone(phone)) 
	{
		printf("[错误] 手机号格式非法，请输入11位数字！\n\n");
		return;
	}
	// 输入并校验邮箱
	printf("请输入联系人邮箱（含@）：");
	scanf("\n%s", email);
	if (!checkEmail(email)) 
	{
		printf("[错误] 邮箱格式非法，请包含@符号！\n\n");
		return;
	}
	// 存储联系人信息（字符串数组赋值必须用strcpy）
	strcpy(names[count], name);
	strcpy(phones[count], phone);
	strcpy(emails[count], email);
	count++;  // 联系人数量自增

	printf("[提示] 添加成功！当前共存储%d位联系人\n", count);
	// 询问是否继续添加
	char choice;
	printf("是否继续添加（1-是/0-否）：");
	scanf("\n%c", &choice);
	if (choice == '1') 
	{
		addContact();  // 递归调用，继续添加
	}
	else 
	{
		printf("-----------------------------------------------------\n\n");
	}
}

//6.查询联系人
void searchContact()
{
	char name[NAME_LEN];
	printf("输入要查询的姓名：");
	scanf("%s",&name);
	int idx = isNameExist(name);
	if(idx==-1){
	printf("[提示]未找到该联系人");}
	else {
		printf("姓名：%s\n电话：%s\n邮箱：%s\n",names[idx],phones[idx],emails[idx]);
	}
}

//7.编辑联系人信息 
void modifyContact(){
	char name[NAME_LEN];
	printf("输入要编辑的联系人姓名：");
	scanf("\n%s", name);
	int idx = isNameExist(name);
	if(idx==-1){
	printf("[提示]未找到该联系人");}
	else {
		printf("找到联系人\n姓名：%s\n电话：%s\n邮箱：%s\n",names[idx],phones[idx],emails[idx]);
	}
	printf("---------------------输入修改的信息---------------------");
	char phone[PHONE_LEN], email[EMAIL_LEN];
	printf("请输入新的电话：");
	scanf("%s",phone);
	if(!checkPhone(phone)){
		printf("[提示]手机号格式错误！");
		return;
	}
	
	printf("请输入新的邮箱：");
	scanf("%s",email);
	if(!checkEmail(email)){
		printf("[提示]邮箱格式错误！");
		return;
	}

	strcpy(phones[count], phone);
	strcpy(emails[count], email);		
}

//8.删除联系人信息 
void deleteContact(){
	
}
