#include <iostream>
#include <random>
#include<windows.h>
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> dis(1,100);
	bool is_continue =true;
	while (is_continue) 
	{
	std::cout<<"今天又是新的一天，开始向小美表白"<<std::endl;	
	std::cout<<"小美，我喜欢你！"<<std::endl;
    int random_num=dis(gen);     //随机数的生成要在循环体内，只有这样，才能每一次循环都生成新的随机数，放在循环体外就会导致随机数固定！！！
	if(random_num==1){is_continue=false;}
	std::cout<<std::endl;
	}
	std::cout<<"总算成功了"<<std::endl;
	{
		std::cout<<"小明的减肥计划： 5天，减掉10斤，每天减2斤"<<std::endl;
		int i=1,b=0;
		while(i<=5)
		{
			std::cout<<"今天是减肥的第"<<i<<"天"<<std::endl;
			int a=1,c=1;
			std::cout<<"开始做减肥第"<<i<<"天的第"<<a<<"个俯卧撑"<<std::endl;
			a++;
			std::cout<<"开始做减肥第"<<i<<"天的第"<<a<<"个俯卧撑"<<std::endl;
	        a++;
	        std::cout<<"开始做减肥第"<<i<<"天的第"<<a<<"个俯卧撑"<<std::endl;
	        b++;
		    std::cout<<"减肥第"<<i<<"天的三个俯卧撑做完，体重减肥1斤，目前累计减少体重："<<b<<"斤"<<std::endl;
            std::cout<<"开始减肥第"<<i<<"天的第"<<c<<"批次400米冲刺跑！"<<std::endl;		
		    c++;
		    std::cout<<"开始减肥第"<<i<<"天的第"<<c<<"批次400米冲刺跑！"<<'\n';		
		    c++;
		    std::cout<<"开始减肥第"<<i<<"天的第"<<c<<"批次400米冲刺跑！"<<'\n';
			b++;		
		    std::cout<<"减肥第"<<i<<"天的"<<c<<"批次400米冲刺跑完成，体重减少1斤，目前累计减少体重："<<b<<"斤"<<std::endl;
	    	i++;             //用while的嵌套循环会快很多！！！
		}
	i--;
	std::cout<<i<<"天减肥完成，体重累计减少："<<b<<"斤"<<'\n';
	
	}
	{
	int line=1;
	while (line<=9)
	{
		int num=1;
		while (num<=line)
		{
			std::cout<<num<<"*"<<line<<"="<<num*line<<'\t';
			num++;
		}
		line++;
		std::cout<<'\n';
	}	
	{
	for(int i=1; ;i++)
	{
		std::cout<<i<<'\t';
		}	
	}	
	}
    return 0;
}