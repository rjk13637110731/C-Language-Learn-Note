#include <iostream>
using namespace std;

//继承方式
//公共继承
class Base1 {
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son1 : public Base1 {
public:
	void func() {
		m_A = 10;//父类中的公共权限成员到子类中依然是公共权限
		m_B = 10;//父类中的保护权限成员到子类中依然是保护权限
		//m_C = 10;//父类中的隐私权限成员到子类中依然是隐私权限
	}
};

void test01() {
	Son1 s1;
	s1.m_A = 100;//公共权限：类内可以访问，类外也可以访问
	//s1.m_B = 100;//到Son1中m_B是保护权限，在类外访问不到。
}

//保护继承
class Base2 {
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son2 : protected Base2 {
public:
	void func() {
		m_A = 100;//父类中公共权限成员，到子类中变成保护权限
		m_B = 100;//父类中保护权限成员，到子类中还是保护权限
		//m_C = 100;//子类访问不到父类中的私有成员
	}
};

void test02() {
	Son2 s1;
	//s1.m_A = 1000;//报错，在Son2中m_A变为保护权限，因此类外不能访问。
	//s1.m_B = 1000;//在Son2中m_B变为保护权限，因此类外不能访问。
}

//私有继承
class Base3 {
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son3 : private Base3 {
public:
	void func() {
		m_A = 100;//父类中公共权限成员到子类中变为私有成员
		m_B = 100;//父类中保护权限成员到子类中变为私有成员
		//m_C = 100;//父类中私有成员，子类访问不到
	}
};

class GrandSon3 : public Son3 {
public:
	void func() {
		//m_A = 1000;//到了Son3中m_A变为了私有权限，也是访问不到的。
		//m_B = 1000;//到了Son3中m_B变为了私有权限，也是访问不到的。
	}
};

void test03(){
	Son3 s1;
	//s1.m_A = 1000;//到Son3中变为私有成员,类外访问不到
	//s1.m_B = 1000;//到Son3中变为私有成员,类外访问不到

}

int main() {
	


	return 0;
}
