#include <iostream>
//������������ռ����ʹ��cout��
using namespace std;
//int main()
//{
//	cout << "Hello, world!" << endl;
//	getchar(); //����ͣס
//	return 0;
//}


//namespace NSP_A {
//	int a = 9;
//	struct Student {
//		char name[20];
//		int age;
//	};
//}
//
//void main() {
//	//ʹ�������ռ�
//	cout << NSP_A::a << endl;
//	
//	//ʹ�������ռ��еĽṹ��
//	using NSP_A::Student;
//	Student t;
//	t.age = 18;
//	cout << t.age << endl;
//	getchar(); //����ͣס
//	//t.name = "����";
//
//}

//namespace NSP_B {
//	//�����ռ�Ƕ��
//	namespace NSP_C {
//		int c = 90;
//	}
//}
//
//void main() {
//	cout << NSP_B::NSP_C::c << endl;
//	getchar(); //����ͣס
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdlib.h>
//#include <iostream>
//#include <stdarg.h>
//using namespace std;
//#define PI 3.14
//class MyCircle {
//	//���ԣ�����Ȩ�޷������η���
//private:
//	double r;
//	double s;
//public:
//	void setR(double r) {
//		this->r = r;
//	}
//	//��ȡ���
//	double getS() {
//		return PI * r * r;
//	}
//};
//
//void main() {
//	MyCircle c;
//	c.setR(4);
//
//	cout << "Բ�������" << c.getS() << endl;
//	system("pause");
//}

//��Ĵ�Сֻ������ͨ���ԵĴ�С������������������
//class A {
//public:
//	int i;
//	int j;
//	int k;
//	static int m;
//};
//class B {
//public:
//	int i;
//	int j;
//	int k;
//	void myprintf() {
//		cout << "��ӡ" << endl;
//	}
//};
//void main() {
//	//����Ľ������12
//	cout << sizeof(A) << endl;
//	cout << sizeof(B) << endl;
//	system("pause");
//}

//

//������        �̳з�ʽ        ������
//public     �� public�̳� = > public
//public     �� protected�̳� = > protected
//public     �� private�̳� = > private
//
//protected  �� public�̳� = > protected
//protected  �� protected�̳� = > protected
//protected  �� private�̳� = > private
//
//private    �� public�̳� = > ������Ȩ����
//private    �� protected�̳� = > ������Ȩ����
//private    �� private�̳� = > ������Ȩ����





//#include "Plane.h"
//#include "Jet.h"
//
////ҵ����
//void bizPlay(Plane& p) {
//	p.fly();
//	p.land();
//}
//void main() {
//	Plane p1;
//	bizPlay(p1);
//	//ֱ���ɻ�
//	Jet p2;
//	bizPlay(p2);
//	system("pause");
//}
//
//void main() {
//	int a = 10;
//	//&��C++�е����ã����ã�����������һ������������ͬ����ַ
//	int &b = a;
//	cout << b << endl;
//	system("pause");
//}

//2��������ָ�������
//
//
//�����ڿ����ã����ñ������ӵ�һ��Ϸ����ڴ档
//һ�����ñ���ʼ��Ϊһ�����󣬾Ͳ��ܱ�ָ����һ������ָ��������κ�ʱ��ָ����һ������
//���ñ����ڴ���ʱ����ʼ����ָ��������κ�ʱ�䱻��ʼ����
//
//
//3��������ָ��д���ϵĲ���
//struct Teacher {
//	char* name;
//	int age;
//};
////���нṹ��ָ���д��
//void myprint(Teacher *t) {
//	cout << t->name << "," << t->age << endl;
//	//(*t).name 
//}
////���нṹ�����õ�д��
//void myprint2(Teacher &t) {
//	cout << t.name << "," << t.age << endl;
//	t.age = 21;
//}
////ָ��ֵ����
//void swap_1(int *a, int *b) {
//	int c = 0;
//	c = *a;
//	*a = *b;
//	*b = c;
//}
////����ֵ����
//void swap_2(int &a, int &b) {
//	int c = 0;
//	c = a;
//	a = b;
//	b = c;
//}
//
//void main() {
//	Teacher t;
//	t.name = "Hensen";
//	t.age = 20;
//	//ָ���д��
//	myprint(&t);
//	//���õ�д��
//	myprint2(t);
//
//	int x = 10;
//	int y = 20;
//	//ָ���д��
//	swap_1(&x, &y);
//	cout << x << endl;
//	cout << y << endl;
//	//���õ�д��(x,y����)
//	swap_2(x, y);
//	cout << x << endl;
//	cout << y << endl;
//
//	system("pause");
//}

//��������Ϊ������C++֧�ְ�������Ϊ����������������ȴ�һ��Ĳ�������ȫ
//��������Ϊ����ֵ�����Դ�C++�����з������ã����񷵻�������������һ��
struct Teacher {
	char* name;
	int age;
};
//���õ�д��
void getTeacher(Teacher* &p) {
	p = (Teacher*)malloc(sizeof(Teacher));
	p->age = 20;
}
//����ָ���д����ԭ��Ӧ������д�������Ѿ������õ�д��������
void getTeacher(Teacher **p) {
	Teacher *tmp = (Teacher*)malloc(sizeof(Teacher));
	tmp->age = 20;
	*p = tmp;
}

void main() {
	Teacher *t = NULL;
	//�������õ�ָ��t���൱�ڶ���ָ��
	getTeacher(&t);
	cout << t->age << endl;
	system("pause");
}