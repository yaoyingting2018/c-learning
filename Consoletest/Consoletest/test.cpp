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

class Human {
public:
	void say() {
		cout << "˵��" << endl;
	}
public:
	int age;
};
class Man : public Human {

};

void main() {
	//����
	Man m1;
	m1.say();
	//�����ำֵ����������û�ָ��
	Human* h_p = &m1;
	h_p->say();
	Human &h1 = m1; //����
	h1.say();
	//��������ʼ���������͵Ķ���
	Human h2 = m1;
	h2.say();
	//���������ø���ĳ�Ա
	m1.Human::say();
	m1.Human::age = 10;
	m1.age = 12;
	cout << m1.age << endl;
	system("pause");
}
