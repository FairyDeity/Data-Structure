//#include<iostream>
//using namespace std;
//
//int main()
//{
//	cout<<"hello world"<<endl;
//	return 0;
//}

//�ַ�����
//#include<iostream>
//using namespace std;
//#include<string>
//int main()
//{
//	//1.c���
//	//ע�� ��[],�Ⱥź���Ҫ��˫����
//	char str[] = "hello world";
//	cout<<str<<endl;
//
//	//2.c++���
//	string str2 = "hello world";
//	cout<<str<<endl;
//	return 0;
//}

//���ݵ�����
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	//1.����
//	int a = 0;
//	cout<<"������ͱ���a��ֵ��"<<endl;
//	cin>>a;
//	cout<<"���ͱ��� a = "<<a<<endl;
//
//	//������
//	float f = 3.14f;
//	cout<<"��������ͱ���f��ֵ��"<<endl;
//	cin>>f;
//	cout<<"�����ͱ���f = "<<f<<endl;
//
//
//}

//���������
//#include<iostream>
//using namespace std;
//int main()
//{
//	//�Ӽ��˳�
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
//	//���õĻ����﷨
//	//�������� &���� = ԭ��
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
////1.���ñ���Ҫ��ʼ��
// //int &b;//err
//    int &b = a;
////2.����һ����ʼ���Ͳ����Է����ı�
//    int c = 20;
//    b = c;//��ֵ���������Ǹ������ã�����Ҳ�����Ը���
//
//    cout<<"a = "<<a<<endl;
//	cout<<"b = "<<b<<endl;
//	cout<<"c = "<<c<<endl;
//	system("pause");
//	return 0;
//}

//��������������
//#include <iostream>
//using namespace std;
////��������
////1.ֵ����
//void mySwap01(int a, int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//	/*cout<<"a ="<<a<<endl;
//	cout<<"b ="<<b<<endl;*/
//}
//
////2��ַ����
//void mySwap02(int *a,int *b)
//{
//	int temp = *a;
//	*a=*b;
//	*b=temp;
//}
////3���ô���
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
//	//mySwap01(a,b);//ֵ���ݣ��ββ���������ʵ��
//	//mySwap02(&a,&b);//��ַ���ݣ���������
//	mySwap03(a,b);//���ô��ݣ���������
//	cout<<"a ="<<a<<endl;
//	cout<<"b ="<<b<<endl;
//	system("pause");
//	return 0;
//}


//�����������ķ���ֵ
#include<iostream>
using namespace std;
	//1.��Ҫ���ؾֲ�����������
int& test01()
{
	int a= 10;//�ֲ����������ջ��
	return a;
}
	//2.�����ĵ��ÿ�����Ϊ��ֵ
int& test02()
{
	static int a = 10;//��̬�����������ȫ������ȫ�����������ڳ��������ϵͳ�ͷ�
	return a;
}
int main()
{
	//int &ref  = test01();
	//cout<<"ref= "<<ref<<endl;//��һ�ν����ȷ����Ϊ���������˱���
	//cout<<"ref= "<<ref<<endl;//�ڶ��ν��������Ϊa���ڴ��Ѿ��ͷ�
	int &ref2 = test02();
	cout<<"ref2= "<<ref2<<endl;
	cout<<"ref2= "<<ref2<<endl;
	test02()=1000;//��������ķ���ֵ�����ã�����������ÿ���Ϊ��ֵ
	cout<<"ref2= "<<ref2<<endl;
	system("pause");
	return 0;
}

