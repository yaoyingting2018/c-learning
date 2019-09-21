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





//#include "Plane.h"
//#include "Jet.h"
//
////业务函数
//void bizPlay(Plane& p) {
//	p.fly();
//	p.land();
//}
//void main() {
//	Plane p1;
//	bizPlay(p1);
//	//直升飞机
//	Jet p2;
//	bizPlay(p2);
//	system("pause");
//}
//
//void main() {
//	int a = 10;
//	//&是C++中的引用，引用：变量的另外一个别名，共用同个地址
//	int &b = a;
//	cout << b << endl;
//	system("pause");
//}

//2、引用与指针的区别
//
//
//不存在空引用，引用必须连接到一块合法的内存。
//一旦引用被初始化为一个对象，就不能被指向到另一个对象。指针可以在任何时候指向到另一个对象。
//引用必须在创建时被初始化。指针可以在任何时间被初始化。
//
//
//3、引用与指针写法上的差异
//struct Teacher {
//	char* name;
//	int age;
//};
////带有结构体指针的写法
//void myprint(Teacher *t) {
//	cout << t->name << "," << t->age << endl;
//	//(*t).name 
//}
////带有结构体引用的写法
//void myprint2(Teacher &t) {
//	cout << t.name << "," << t.age << endl;
//	t.age = 21;
//}
////指针值交换
//void swap_1(int *a, int *b) {
//	int c = 0;
//	c = *a;
//	*a = *b;
//	*b = c;
//}
////引用值交换
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
//	//指针的写法
//	myprint(&t);
//	//引用的写法
//	myprint2(t);
//
//	int x = 10;
//	int y = 20;
//	//指针的写法
//	swap_1(&x, &y);
//	cout << x << endl;
//	cout << y << endl;
//	//引用的写法(x,y不变)
//	swap_2(x, y);
//	cout << x << endl;
//	cout << y << endl;
//
//	system("pause");
//}

//把引用作为参数：C++支持把引用作为参数传给函数，这比传一般的参数更安全
//把引用作为返回值：可以从C++函数中返回引用，就像返回其他数据类型一样
struct Teacher {
	char* name;
	int age;
};
//引用的写法
void getTeacher(Teacher* &p) {
	p = (Teacher*)malloc(sizeof(Teacher));
	p->age = 20;
}
//二级指针的写法，原本应该这样写，但是已经被引用的写法代替了
void getTeacher(Teacher **p) {
	Teacher *tmp = (Teacher*)malloc(sizeof(Teacher));
	tmp->age = 20;
	*p = tmp;
}

void main() {
	Teacher *t = NULL;
	//传递引用的指针t，相当于二级指针
	getTeacher(&t);
	cout << t->age << endl;
	system("pause");
}