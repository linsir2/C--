#include <iostream>
#include<windows.h>
#include<random>
int main ()
{
	SetConsoleOutputCP(CP_UTF8);
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> dis(1,100);
	int a=dis(gen);
	bool b=true;
	for(int i;b;)
	{
		std::cout<<"请猜测:";
		std::cin>>i;
		if(i==a){std::cout<<"恭喜猜对了"<<'\n';b=false;}
	    else if(i<a) {std::cout<<"猜小了"<<std::endl;}
	    else {std::cout<<"猜大了"<<'\n';}
	}
	{
		for(int line=1;line<=9;line++)
		{
			int a=1;
            while(a<=line)
			{
			std::cout<<a<<"*"<<line<<"="<<a*line<<'\t';
			a++;
			}	
		    std::cout<<'\n';
		}
	}
	return 0;
}