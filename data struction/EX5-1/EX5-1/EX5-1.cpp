#include <iostream>
#include "EX5-1.h"
using namespace std;
int main(){
	int i, n;
	SElemType e;
	char a[100];
	SqStack S;

	while (1){
	cout << "��ѡ��ʹ�ù��ܣ�\n"
			"1.��ʼ��ջS��\n"
			"2.�ж�ջS�Ƿ�ǿգ�\n"
			"3.ѹջ��\n"
			"4.��ջ��\n"
			"5.����ջ��\n"
			"6.��ջ�ĳ���\n"
			"7.ʵ�ֽ�ʮ������ת��Ϊ����������\n"
			"8.�ж��������ַ������Ƿ�Ϊ���ģ�\n"
			"9.�˳� \n";
	cout << "\n������ѡ�";
	cin >> i;
	switch (i){
	case 1:
		if (InitStack(S)) 
			cout << "Sջ��ʼ���ɹ�\n";
		else 
			cout << "Sջ��ʼ��ʧ��\n";
		break;
	case 2:
		if (StackEmpty(S))
			cout << "SջΪ�� \n";
		else
			cout << "Sջ��Ϊ�� \n";
		break;
	case 3:
		cout << "�������ѹ��Sջ��5�����֣�";
		for (int j = 0; j < 5; j++){
			cin >> e;
			if (!Push(S, e)){
				cout << "ջ����\n";
				break;
			}
		}
		cout << "ѹջ��������\n";
		break;
	case 4:
		cout << "��ջԪ��Ϊ��";
		Pop(S, e);
		cout << e;
		break;
	case 5:
		SqStack p;
		p = S;
		cout << "ջ��Ԫ��Ϊ��\n";
		while (Pop(p, e))
			cout << e << endl;
		break;
	case 6:
		cout << "ջ�ĳ���Ϊ��" << StackLength(S);
		break;
	case 7:
		cout << "������һ��ʮ��������";
		cin >> n;
		cout << "ת����İ˽�����Ϊ��";
		conversion(n);
		break;
	case 8:
		cout << "������������ַ�����";
		cin >> a;
		if (huwen(a))
			cout << "���ַ����ǻ���\n";
		else
			cout << "���ַ��������ǻ���\n";
		break;
	case 9:
		DestroyStack(S);
	}
	if (i==9) break;
	cout << "\n\n\n";
}
	return 0;
}