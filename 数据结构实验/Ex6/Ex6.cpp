#include <iostream>
#include "EX6.h"


using namespace std;
int main() {
	int i, j;
	QElemType e;
	SqQueue S;

	while (1) {
		cout << "请选择使用功能：\n"
			"1.初始化队列S；\n"
			"2.判断队列S是否非空；\n"
			"3.入队；\n"
			"4.出队；\n"
			"5.遍历队列；\n"
			"6.取队头\n"
			"7.求队长\n"
			"8.交叉合并两个队列"
			"9.退出 \n";
		cout << "\n请输入选项：";
		cin >> i;
		switch (i) {
		case 1:
			InitQueue(S);
			cout << "S队列初始化成功\n";
			break;
		case 2:
			if (StackEmpty(S))
				cout << "S队列为空 \n";
			else
				cout << "S队列不为空 \n";
			break;
		case 3:
			cout << "请输入待入S队列的5个数字：";
			for (j = 0; j < 5; j++) {
				cin >> e;
				if (!EnQueue(S, e)) {
					cout << "队列已满\n";
					break;
				}
			}
			cout << "入队列操作结束\n";
			break;
		case 4:
			cout << "出队列元素为：";
			DeQueue(S, e);
			cout << e;
			break;
		case 5:
			cout << "队列中元素为：\n";
			QueueTraverse(S);
			break;
		case 6:
			cout << "队列顶为：" << GetHead(S);
			break;
		case 7:
			cout << "队长为：" << QueueLength(S);
		case 8:
			S = MergeSqQueue(S);
			break;
		case 9:
			DestroyStack(S);
			exit(0);
		}
		cout << "\n\n\n";
	}
	return 0;
}