#include<iostream>//��׼��
using namespace std; //��׼�����
#include<string>//�ַ�����

class AbstractDrinking
{
public:
	//��ˮ
	virtual void boil()=0;
	
	//����
	virtual void Brew()=0;
	//����ˮ��
	virtual void PourIncup()=0;
	//���븨��
	virtual void putsomething()=0;

	void makedrink()//����ຯ��ע���ˣ�ǰ��û��д��
	{
		boil();
		Brew();
		PourIncup();
		putsomething();
	}
};


class coffee :public AbstractDrinking
{
public:
	//��ˮ
	virtual void boil()
	{
	cout<<"��ũ��ɽȪ"<<endl;
	}
	
	//����
	virtual void Brew()
	{
	cout<<"���ݿ���"<<endl;
	}

	//����ˮ��
	virtual void PourIncup()
	{
	cout<<"���뿨�䱭��"<<endl;
	}

	//���븨��
	virtual void putsomething()
	{
	cout<<"�����Ǻ�ţ��"<<endl;
	}
};


class tea :public AbstractDrinking
{
public:
	//��ˮ
	virtual void boil()
	{
	cout<<"���Ȫˮ"<<endl;
	}
	
	//����
	virtual void Brew()
	{
	cout<<"���ݲ�Ҷ"<<endl;
	}

	//����ˮ��
	virtual void PourIncup()
	{
	cout<<"���뿨�䱭��"<<endl;
	}

	//���븨��
	virtual void putsomething()
	{
	cout<<"�������"<<endl;
	}
};

void dowork(AbstractDrinking *abc)
{
	abc->makedrink();
	delete abc;

}

void test01()
{
	//��������
	dowork(new tea);//����ע���ǹؼ�������
	//����һ��Ҫ�Ǹ���ļ��ɺ���
	//����������һ�������������ھ�д��һ��
	//�������������ڴ��ַ�������������ָ�룬�Ϳ���ʵ��ͨ�������������
	cout<<"------------"<<endl;
	dowork(new coffee);
}

/*int main()
{
	test01();


	system("pause");
	return 0;
}*/

