#include<iostream>
#include<windows.h>
#include<random>
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> dis(1,10);
	int a=dis(gen),day=1;
	std::cout<<"每天都去表白，计划表白30天"<<'\n';
	std::cout<<"小明计划的表白流程是：送花、说喜欢、邀请一起看电影"<<'\n';
	while(day<=30)
	{
		std::cout<<"小美，我送你朵花"<<'\n';
		if(a==7){std::cout<<"小明彻底没希望了"<<'\n';break;}
		else
		{
		if(a>=1&&a<=5){std::cout<<"今天的表白流程结束，第二天继续";}
		else{std::cout<<"小美，我喜欢你很久了，我想邀请你晚上与我一起去看电影"<<'\n';}
		}
		day++;
	}
	if(day==31){std::cout<<"小美未被我的诚意打动，我被拒了"<<std::endl;}
	{
		long num=1,sum=10000;
		for(;num<=20;num++)
		{
		long grade=dis(gen);
		std::cout<<"员工"<<num<<",绩效分"<<grade;
		if(grade<5){std::cout<<"低于5,很抱歉，您不达标，无法发放工资"<<std::endl;}
		else{sum-=1000;
		std::cout<<"发放工资1000元，账户余额还剩余"<<sum<<"元"<<std::endl;
             if(sum==0){ std::cout<<"工资发完了，下个月来领吧"<<std::endl;break;}
	     }
	    }
	}
	return 0;
}