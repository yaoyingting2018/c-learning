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

//

//基类中        继承方式        子类中
//public     ＆ public继承 = > public
//public     ＆ protected继承 = > protected
//public     ＆ private继承 = > private
//
//protected  ＆ public继承 = > protected
//protected  ＆ protected继承 = > protected
//protected  ＆ private继承 = > private
//
//private    ＆ public继承 = > 子类无权访问
//private    ＆ protected继承 = > 子类无权访问
//private    ＆ private继承 = > 子类无权访问


class A {
public:
	char* name;
};
//这里面加了virtual关键字
class A1 : virtual public A {

};
//这里面加了virtual关键字
class A2 : virtual public A {

};
class B : public A1, public A2 {

};

void main() {
	B b;
	//如果程序不加virtual关键字就会导致二义性，系统无法辨识哪个类的name属性，会报错
	b.name = "Hensen";
	cout << b.name << endl;
	//这里通过指定父类显示调用是可以的
	b.A1::name = "Hens";
	cout << b.name << endl;
	b.A2::name = "Hense";
	cout << b.name << endl;
	system("pause");

}

