/*��д��������SortOne��SortTwo���ֱ���ַ�������ʵ�ֲ��������ѡ������*/
#include<iostream>
#include<string>
using namespace std;

void SortOne(string &, int length);//��������
//void SortTwo(char *, int length);//ѡ������

int main()
{
	string s1 = "nishishuya!";
	int length1 = s1.length();

	//string *s2 = new char[length1 + 1];
	//strcpy(s2, s1);

	//s2[length1] = '\0';

	SortOne(s1, length1);
	cout << "s1����������Ϊ:" << s1 << endl;
	//SortTwo(s2, length1);
	//cout << "s2ѡ��������Ϊ:" << s2 << endl;

}

//ѡ������0��Ԫ��Ϊ�ڱ�
void SortOne(string &s, int length)
{
	//int j;
	//for (int i = 1;i < length;i++)
	//{
	//	s[0] = s[i];
	//	for (j = i - 1;s[j] > s[0];j--)
	//		s[j + 1] = s[j];
	//	s[j + 1] = s[0];
	//}

	for (int i = 1; i < length; ++i) {	//�ӵڶ���Ԫ�ؿ�ʼɨ�裬��һ��Ԫ��Ĭ�����ź�
		int temp = s[i];					//��������Ԫ��ȡ��������ʱ����
		int j = i - 1;						//ָ��������������һ��Ԫ��
		while (j >= 0 && s[j] > temp) {	//�ҵ��ȴ�����Ԫ��С���ߵ��ڵ��Ǹ�Ԫ��λ�ã���ȵ����Ҳ������ֻ�д��ڵ�����Ž����ƶ�������֤���㷨���ȶ���
			s[j + 1] = s[j];			//���ȴ���Ԫ�ش��Ԫ�����������λ
			--j;
		}
		s[j + 1] = temp;					//��������Ԫ�ز��뵽����С���ߵ��ڵ��Ǹ�Ԫ��λ�õĺ���
	}
	
}

//void SortTwo(char *s, int length)
//{
//	int k;
//	char temp;
//	for (int i = 0;i < length;i++)
//	{
//		k = i;
//		for (int j = i + 1;j < length;j++)
//			if (s[k] > s[j])
//				k = j;
//		if (k != i)
//		{
//			temp = s[i];
//			s[i] = s[k];
//			s[k] = temp;
//		}
	//}
//}