//#include<iostream>
//using namespace std;
//
//int main()
//{
//	cout<<"hello world"<<endl;
//	return 0;
//}

//字符类型
//#include<iostream>
//using namespace std;
//#include<string>
//int main()
//{
//	//1.c风格
//	//注意 加[],等号后面要用双引号
//	char str[] = "hello world";
//	cout<<str<<endl;
//
//	//2.c++风格
//	string str2 = "hello world";
//	cout<<str<<endl;
//	return 0;
//}

//数据的输入
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	//1.整形
//	int a = 0;
//	cout<<"请给整型变量a赋值："<<endl;
//	cin>>a;
//	cout<<"整型变量 a = "<<a<<endl;
//
//	//浮点型
//	float f = 3.14f;
//	cout<<"请给浮点型变量f赋值："<<endl;
//	cin>>f;
//	cout<<"浮点型变量f = "<<f<<endl;
//
//
//}

//算术运算符
//#include<iostream>
//using namespace std;
//int main()
//{
//	//加减乘除
//	int a1 = 10;
//	int b1 = 3;
//
//	cout<<a1+b1<< endl;
//	cout<<a1-b1<<endl;
//	cout<<a1*b1<<endl;
//	cout<<a1/b1<<endl;
//	return 0;
//}
//
//#include<iostream>
//using namespace std;
//int main()
//{
//
//	//引用的基本语法
//	//数据类型 &别名 = 原名
//
//	int a= 10;
//	int &b = a;
//	cout<<"a = "<<a<<endl;
//	cout<<"b = "<<b<<endl;
//
//	b = 100;
//	
//	cout<<"a = "<<a<<endl;
//	cout<<"b = "<<b<<endl;
//	
//	system("pause");
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a = 10;
////1.引用必须要初始化
// //int &b;//err
//    int &b = a;
////2.引用一旦初始化就不可以发生改变
//    int c = 20;
//    b = c;//赋值操作而不是更改引用，引用也不可以更改
//
//    cout<<"a = "<<a<<endl;
//	cout<<"b = "<<b<<endl;
//	cout<<"c = "<<c<<endl;
//	system("pause");
//	return 0;
//}

//引用做函数参数
//#include <iostream>
//using namespace std;
////交换函数
////1.值传递
//void mySwap01(int a, int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//	/*cout<<"a ="<<a<<endl;
//	cout<<"b ="<<b<<endl;*/
//}
//
////2地址传递
//void mySwap02(int *a,int *b)
//{
//	int temp = *a;
//	*a=*b;
//	*b=temp;
//}
////3引用传递
//void mySwap03(int &a,int&b)
//{
//	int temp = a;
//	a= b;
//	b = temp;
//}
//
//int main()
//{
//	int a= 10;
//	int b =20;
//	//mySwap01(a,b);//值传递，形参并不会修饰实参
//	//mySwap02(&a,&b);//地址传递，可以修饰
//	mySwap03(a,b);//引用传递，可以修饰
//	cout<<"a ="<<a<<endl;
//	cout<<"b ="<<b<<endl;
//	system("pause");
//	return 0;
//}


//引用做函数的返回值
#include<iostream>
using namespace std;
	//1.不要返回局部变量的引用
int& test01()
{
	int a= 10;//局部变量存放在栈区
	return a;
}
	//2.函数的调用可以作为左值
int& test02()
{
	static int a = 10;//静态变量，存放在全局区，全局区的数据在程序结束后系统释放
	return a;
}
int main()
{
	//int &ref  = test01();
	//cout<<"ref= "<<ref<<endl;//第一次结果正确，因为编译器做了保留
	//cout<<"ref= "<<ref<<endl;//第二次结果错误，因为a的内存已经释放
	int &ref2 = test02();
	cout<<"ref2= "<<ref2<<endl;
	cout<<"ref2= "<<ref2<<endl;
	test02()=1000;//如果函数的返回值是引用，这个函数调用可作为左值
	cout<<"ref2= "<<ref2<<endl;
	system("pause");
	return 0;
}

