/*дһ��ְ���࣬����˽�����ݳ�Ա����ְ������name��ְ����id����ְ����rznf���������score
��ÿ��ÿ��Ա����õ�һ���֣���4-9֮�е�����ֵ�����õ����������ֺ󣬻��ж��Ƿ��н����ˣ�Ȼ���������������֣���
Ա����нwagesԱ������Total����Ա�����й��캯���������������ж��Ƿ��н������3�����ֶ����ڵ���9�����н10%����
�ж��Ƿ���ˣ�����3������С�ڵ���6�����ˣ�����дһ����Ԫ��������������ù�˾ÿ��Ӧ��ְ��н�꣬����Ӧ��ְ��н�ꡣ*/

#include<iostream>
#include<string>
using namespace std;

class Employee {
public:
	Employee(string = "", int = 000, int = 201001, double = 3000.0);
	virtual ~Employee() {}
	void setScore(int);
	bool judgeRaise();
	bool judgeFire();
	const int* getScore()const;
	friend void cal(Employee &);

private:
	string name;
	int id;
	int rznf;
	int score[3];
	double wages;
	static double total;
	static double sum;
};

double Employee::total = 0.0;
double Employee::sum = 0.0;

Employee::Employee(string tname, int tid, int trznf, double twages) :name(tname), id(tid), rznf(trznf), wages(twages)
{
	for (int i = 0;i < 3;i++)
	{
		score[i] = 0;
	}
	Employee::total++;
	sum += wages;
}

void Employee::setScore(int s)
{
	for (int i = 0;i < 3;i++)
	{
		if (score[i] == 0)
		{
			score[i] = s;
			break;
		}
	}
	if (score[2])//�����������ж���ְ���߼�н
	{
		if (judgeRaise())
		{
			for (int i = 0;i < 3;i++)
			{
				score[i] = 0;
			}
			sum -= wages;
			wages = wages*1.1;
			sum += wages;
			cout << name << ": wages raise!!!" << endl;
		}
		else if (judgeFire())
		{
			sum = sum - wages;
			total--;
			cout << name << ": dismiss!" << endl;

		}
		else
			cout << name << ": keep hire!" << endl;
	}
}

bool Employee::judgeRaise()
{
	for (int i = 0;i < 3;i++)
		if (score[i] < 9)
			return false;//��һ��С��9�򲻼ӹ���
	return true;
}

bool Employee::judgeFire()
{
	for (int i = 0;i < 3;i++)
		if (score[i] >6)
			return false;//��һ�δ���6�򲻽��
	return true;
}

void cal(Employee &e)
{
	cout << "employee numbers: " << Employee::total << endl;
	cout << "Per month: " << Employee::sum << endl;
	cout << "Per year: " << Employee::sum * 12 << endl;
}

const int* Employee::getScore()const
{
	return score;
}

int main()
{
	Employee e1("Van", 001, 201002, 5000);
	cal(e1);
	cout << endl;

	Employee e2("Jone", 002, 201001, 8000);
	cal(e1);
	cout << endl;

	Employee e3("Snow", 003, 201309, 9000);
	cal(e1);
	cout << endl;

	e1.setScore(9);
	e1.setScore(9);
	e1.setScore(9);

	cout << endl;
	cal(e2);
	cout << endl;

	e2.setScore(6);
	e2.setScore(7);
	e2.setScore(4);

	cout << endl;
	cal(e2);
	cout << endl;

	e3.setScore(6);
	e3.setScore(6);
	e3.setScore(6);

	cout << endl;
	cal(e3);
	cout << endl;

	const int *p = e3.getScore();
	for (int i = 0;i < 3;i++)
		cout << p[i] << " ";
	return 0;
}