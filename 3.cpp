#include <iostream>
#include <windows.h>
#include <random>
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	{
		std::random_device rd;
		std::mt19937 gen(rd());
		std::uniform_int_distribution<> dis(1,100);
		int random_number=dis(gen),i,a=1;
		while(1)
		{
			std::cout<<"请输入所猜测的数字："<<std::endl;
			std::cin>>i;
			if(i==random_number){std::cout<<"恭喜猜中了"<<std::endl; break;}
			else if(i<random_number){std::cout<<"偏小"<<std::endl;}
			else {std::cout<<"偏大"<<std::endl;}
			a++;
		}
		std::cout<<"你一共猜测了"<<a<<"次"<<std::endl;
	}
   {
		std::random_device rd;
		std::mt19937 gen(rd());
		std::uniform_int_distribution<> dis(1,100);
		int random_number=dis(gen),i,a=1;
			std::cout<<"请输入所猜测的数字："<<std::endl;
			std::cin>>i;
		while(i!=random_number)
		{
			if(i<random_number){std::cout<<"偏小"<<std::endl; std::cin>>i;}
			else {std::cout<<"偏大"<<std::endl; std::cin>>i;}
			a++;
		}
		std::cout<<"恭喜猜测成功"<<std::endl;
		std::cout<<"你一共猜测了"<<a<<"次"<<std::endl;
	}
	return 0;
}