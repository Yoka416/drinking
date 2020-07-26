#include<iostream>//标准库
using namespace std; //标准输出库
#include<string>//字符串库

class AbstractDrinking
{
public:
	//煮水
	virtual void boil()=0;
	
	//冲泡
	virtual void Brew()=0;
	//倒入水杯
	virtual void PourIncup()=0;
	//加入辅料
	virtual void putsomething()=0;

	void makedrink()//这个类函数注意了，前面没有写过
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
	//煮水
	virtual void boil()
	{
	cout<<"煮农夫山泉"<<endl;
	}
	
	//冲泡
	virtual void Brew()
	{
	cout<<"冲泡咖啡"<<endl;
	}

	//倒入水杯
	virtual void PourIncup()
	{
	cout<<"倒入卡其杯中"<<endl;
	}

	//加入辅料
	virtual void putsomething()
	{
	cout<<"加入糖和牛奶"<<endl;
	}
};


class tea :public AbstractDrinking
{
public:
	//煮水
	virtual void boil()
	{
	cout<<"煮矿泉水"<<endl;
	}
	
	//冲泡
	virtual void Brew()
	{
	cout<<"冲泡茶叶"<<endl;
	}

	//倒入水杯
	virtual void PourIncup()
	{
	cout<<"倒入卡其杯中"<<endl;
	}

	//加入辅料
	virtual void putsomething()
	{
	cout<<"加入枸杞"<<endl;
	}
};

void dowork(AbstractDrinking *abc)
{
	abc->makedrink();
	delete abc;

}

void test01()
{
	//制作咖啡
	dowork(new tea);//这里注意是关键！！！
	//首先一定要是父类的集成函数
	//调用子类哪一个，上面括号内就写哪一个
	//将申请的子类堆内存地址传给父类申请的指针，就可以实现通过父类调用子类
	cout<<"------------"<<endl;
	dowork(new coffee);
}

/*int main()
{
	test01();


	system("pause");
	return 0;
}*/

