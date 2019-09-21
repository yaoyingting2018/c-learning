#include <iostream>
//必须带有命名空间才能使用cout等
using namespace std;
//int main()
//{
//	cout << "Hello, world!" << endl;
//	getchar(); //程序停住
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
//	//使用命名空间
//	cout << NSP_A::a << endl;
//	
//	//使用命名空间中的结构体
//	using NSP_A::Student;
//	Student t;
//	t.age = 18;
//	cout << t.age << endl;
//	getchar(); //程序停住
//	//t.name = "浩南";
//
//}

//namespace NSP_B {
//	//命名空间嵌套
//	namespace NSP_C {
//		int c = 90;
//	}
//}
//
//void main() {
//	cout << NSP_B::NSP_C::c << endl;
//	getchar(); //程序停住
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdlib.h>
//#include <iostream>
//#include <stdarg.h>
//using namespace std;
//#define PI 3.14
//class MyCircle {
//	//属性（共用权限访问修饰符）
//private:
//	double r;
//	double s;
//public:
//	void setR(double r) {
//		this->r = r;
//	}
//	//获取面积
//	double getS() {
//		return PI * r * r;
//	}
//};
//
//void main() {
//	MyCircle c;
//	c.setR(4);
//
//	cout << "圆的面积：" << c.getS() << endl;
//	system("pause");
//}

//类的大小只计算普通属性的大小，其他都不包括在内
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
//		cout << "打印" << endl;
//	}
//};
//void main() {
//	//输出的结果都是12
//	cout << sizeof(A) << endl;
//	cout << sizeof(B) << endl;
//	system("pause");
//}

class Human {
public:
	void say() {
		cout << "说话" << endl;
	}
public:
	int age;
};
class Man : public Human {

};

void main() {
	//子类
	Man m1;
	m1.say();
	//将子类赋值给父类的引用或指针
	Human* h_p = &m1;
	h_p->say();
	Human &h1 = m1; //引用
	h1.say();
	//子类对象初始化父类类型的对象
	Human h2 = m1;
	h2.say();
	//子类对象调用父类的成员
	m1.Human::say();
	m1.Human::age = 10;
	m1.age = 12;
	cout << m1.age << endl;
	system("pause");
}
