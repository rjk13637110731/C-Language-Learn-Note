#include <iostream>
using namespace std;
#include <string>

//抽象出不同零件类
//抽象CPU类
class CPU {
public:
	virtual void calculate() = 0;
};

//抽象显卡类
class VedioCard {
public:
	virtual void display() = 0;
};

//抽象内存条类
class Memory {
public:
	virtual void storage() = 0;
};

//电脑类
class Computer {
public:
	Computer(CPU* cpu,VedioCard* vc,Memory* mem) {
		m_cpu = cpu;
		m_vc = vc;
		m_mem = mem;
	}

	//工作函数
	void work() {
		//让零件工作起来
		m_cpu->calculate();
		m_vc->display();
		m_mem->storage();
	}

	//提供析构函数，释放3个电脑零件
	~Computer() {
		//释放CPU零件
		if (m_cpu != NULL) {
			delete m_cpu;
			m_cpu = NULL;
		}

		//释放显卡零件
		if (m_vc != NULL) {
			delete m_vc;
			m_vc = NULL;
		}

		//释放内存条零件
		if (m_mem != NULL) {
			delete m_mem;
			m_mem = NULL;
		}
	}

private:
	CPU* m_cpu;//CPU零件指针
	VedioCard* m_vc;//显卡零件的指针
	Memory* m_mem;//内存条零件指针
};

//具体厂商
//Intel
class IntelCPU :public CPU {
public:
	virtual void calculate() {
		cout << "Intel的CPU开始计算了！" << endl;
	}
};
class IntelVedioCard :public VedioCard {
public:
	virtual void display() {
		cout << "Intel的显卡开始计算显示了！" << endl;
	}
};
class IntelMemory :public Memory {
public:
	virtual void storage() {
		cout << "Intel的内存条开始存储了！" << endl;
	}
};

//Lenovo
class LenovoCPU :public CPU {
public:
	virtual void calculate() {
		cout << "Lenovo的CPU开始计算了！" << endl;
	}
};
class LenovoVedioCard :public VedioCard {
public:
	virtual void display() {
		cout << "Lenovo的显卡开始计算显示了！" << endl;
	}
};
class LenovoMemory :public Memory {
public:
	virtual void storage() {
		cout << "Lenovo的内存条开始存储了！" << endl;
	}
};

void test01() {
	//第一台电脑零件
	CPU* intelCpu = new IntelCPU;
	VedioCard* intelVedioCard = new IntelVedioCard;
	Memory* intelMemory = new IntelMemory;

	//创建第一台电脑
	Computer* cp1 = new Computer(intelCpu,intelVedioCard,intelMemory);
	cp1->work();
	delete cp1;

	//组装第二台电脑
	//第二台电脑零件
	CPU* lenovoCpu = new LenovoCPU;
	VedioCard* lenovoVedioCard = new LenovoVedioCard;
	Memory* lenovoMemory = new LenovoMemory;

	//创建第二台电脑
	Computer* cp2 = new Computer(lenovoCpu, lenovoVedioCard, lenovoMemory);
	cp2->work();
	delete cp2;
}

int main() {
	
	test01();

	return 0;
}
