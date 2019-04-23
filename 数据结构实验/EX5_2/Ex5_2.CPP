#include <iostream>
#include "EX5_2.h"


using namespace std;
int main(){
	int i,j;
	SElemType e;
	LinkStack S;

	while (1){
	cout << "请选择使用功能：\n"
			"1.初始化栈S；\n"
			"2.判断栈S是否非空；\n"
			"3.压栈；\n"
			"4.出栈；\n"
			"5.遍历栈；\n"
			"6.取栈顶\n"
			"9.退出 \n";
	cout << "\n请输入选项：";
	cin >> i;
	switch (i){
	case 1:
		InitStack(S);
		cout << "S栈初始化成功\n";
		break;
	case 2:
		if (StackEmpty(S))
			cout << "S栈为空 \n";
		else
			cout << "S栈不为空 \n";
		break;
	case 3:
		cout << "请输入待压入S栈的5个数字：";
		for (j = 0; j < 5; j++){
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
		LinkStack p;
		p = S;
		cout << "栈中元素为：\n";
		while (p)
		{
			cout << p->data << endl;
			p = p->next;
		}
		break;
	case 6:
		cout << "栈顶为：" << GetTop(S);
		break;
	case 9:
		DestroyStack(S);
	}
	if (i==9) break;
	cout << "\n\n\n";
}
	return 0;
}