#include <iostream>
#include<windows.h>
#include<random>
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> dis(1,100);
	int v[10];
	for(int i=0;i<=9;i++)
	{
		int a=dis(gen);
		v[i]=a;
		std::cout<<v[i]<<std::endl;
	}
	int max=v[0],min=v[0];
	for (int num:v)
	{
		if(max<num){max=num;}
		if(min>num){min=num;}
	}
	std::cout<<"数组内最大值为："<<max<<std::endl;
	std::cout<<"数组内最小值为："<<min<<std::endl;
	return 0;
}