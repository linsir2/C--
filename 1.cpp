#include <iostream>
#include<windows.h>
int main ()
{
	SetConsoleOutputCP(CP_UTF8);
	int a=4,b,c,d;
	std::cout<<"请输入猜想数字："<<std::endl;
	std::cin>>b;
	if(a==b)
	{
	std::cout<<"恭喜猜中数字"<<std::endl;	
	}
	else
	{
	std::cout<<"请再进行猜测"<<std::endl;
	std::cin>>c;
	if(c==a)
	{
		std::cout<<"恭喜，回答正确"<<std::endl;
	}
	else{std::cout<<"请再进行猜测"<<std::endl;
	std::cin>>d;
	if(d==a){std::cout<<"恭喜"<<std::endl;}
	else {std::cout<<"挑战失败"<<std::endl;}
	}
	}
	return 0;
}