#include <iostream>
#include <deque>
#include <vector>
#include <algorithm>
#include <string>
#include <ctime>
using namespace std;

//选手类
class Person {
public:
	Person(string name,int score) {
		this->m_Name = name;
		this->m_Score = score;
	}

	string m_Name;//姓名
	int m_Score;//平均分
};

void creatPerson(vector<Person>&v) {
	string nameSeed = "ABCDE";

	for (int i = 0; i < 5;i++) {
		string name = "选手";
		name += nameSeed[i];

		int score = 0;

		Person p(name,score);

		//将创建的Person对象放到容器中
		v.push_back(p);
	}
}

//打分
void setScore(vector<Person>&v) {
	for (vector<Person>:: iterator it = v.begin(); it != v.end(); it++) {
		//将评委的分数放入到deque容器中
		deque<int>d;
		for (int i = 0; i < 10;i++) {
			int score = rand() % 41 + 60;//60~100
			d.push_back(score);
		}
		
		/*测试
		cout << "选手：" << it->m_Name << " 打分：" << endl;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++) {
			cout << *dit << " ";
		}
		cout << endl;
		*/

		//排序
		sort(d.begin(),d.end());

		//去除最高，去出最低
		d.pop_back();
		d.pop_front();

		//取平均分
		int sum = 0;
		for (deque<int>::iterator dit = d.begin(); dit != d.end();dit++) {
			sum += (*dit);//累加评委的分数
		}
		int avg = sum / d.size();

		//将平均分赋值给选手上
		it->m_Score = avg;
	}
}

void showScore(vector<Person>& v) {
	for (vector<Person>::iterator it = v.begin(); it != v.end();it++) {
		cout << "姓名：" << it->m_Name << "\t平均分：" << it->m_Score << endl;
	}
}

int main() {
	
	//随机种子
	srand((unsigned int)time(NULL));

	//1.创建5名选手
	vector<Person>v;//存放选手容器
	creatPerson(v);
	
	/*
	//测试
	for (vector<Person>::iterator it = v.begin(); it != v.end();it++) {
		cout << (*it).m_Name << endl;
	}
	*/

	//2.给5名选手打分
	setScore(v);

	//3.显示最后得分
	showScore(v);

	return 0;
}
