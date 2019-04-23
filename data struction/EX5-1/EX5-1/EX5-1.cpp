#include <iostream>
#include "EX5-1.h"
using namespace std;
int main(){
	int i, n;
	SElemType e;
	char a[100];
	SqStack S;

	while (1){
	cout << "请选择使用功能：\n"
			"1.初始化栈S；\n"
			"2.判断栈S是否非空；\n"
			"3.压栈；\n"
			"4.出栈；\n"
			"5.遍历栈；\n"
			"6.求栈的长度\n"
			"7.实现将十进制数转换为二进制数；\n"
			"8.判定给定的字符序列是否为回文；\n"
			"9.退出 \n";
	cout << "\n请输入选项：";
	cin >> i;
	switch (i){
	case 1:
		if (InitStack(S)) 
			cout << "S栈初始化成功\n";
		else 
			cout << "S栈初始化失败\n";
		break;
	case 2:
		if (StackEmpty(S))
			cout << "S栈为空 \n";
		else
			cout << "S栈不为空 \n";
		break;
	case 3:
		cout << "请输入待压入S栈的5个数字：";
		for (int j = 0; j < 5; j++){
			cin >> e;
			if (!Push(S, e)){
				cout << "栈已满\n";
				break;
			}
		}
		cout << "压栈操作结束\n";
		break;
	case 4:
		cout << "出栈元素为：";
		Pop(S, e);
		cout << e;
		break;
	case 5:
		SqStack p;
		p = S;
		cout << "栈中元素为：\n";
		while (Pop(p, e))
			cout << e << endl;
		break;
	case 6:
		cout << "栈的长度为：" << StackLength(S);
		break;
	case 7:
		cout << "请输入一个十进制数：";
		cin >> n;
		cout << "转换后的八进制数为：";
		conversion(n);
		break;
	case 8:
		cout << "请输入待检测的字符串：";
		cin >> a;
		if (huwen(a))
			cout << "该字符串是回文\n";
		else
			cout << "该字符串不是是回文\n";
		break;
	case 9:
		DestroyStack(S);
	}
	if (i==9) break;
	cout << "\n\n\n";
}
	return 0;
}