#include<iostream>
using namespace std;

int main(){
	
	//���ͣ� short(2)  int(4)  long(4)  long long (8)
	//��������sizeof�����������ռ���ڴ��С 
	// �﷨: sizeof(��������/����)
	
	short num1 = 10;
	cout<<"shortռ���ڴ�ռ�Ϊ�� "<<sizeof(num1) << endl;
	int num2 = 10;
	cout<<"intռ���ڴ�ռ�Ϊ�� "<<sizeof(num2)<<endl;
	long num3 = 100;
	cout<<"longռ���ڴ�ռ�Ϊ�� "<<sizeof(num3)<<endl;
	long long num4 = 1000;
	cout<<"long longռ���ڴ�ռ�Ϊ�� "<<sizeof(num4)<<endl;
	
	system("pause");
	
	return(0);
}
