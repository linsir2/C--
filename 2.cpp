#include <iostream>
#include <windows.h>
int main()
{
	SetConsoleOutputCP(CP_UTF8);
   {
		int num;
	std::cout<<"请选择直播的场景，输入对应的场景代码数字"<<std::endl;
	std::cin>>num;
	switch(num)
	{
		case 1: std::cout<<"仅输出屏幕"<<std::endl; break;
		case 2: std::cout<<"输出屏幕+摄像头画面"<<std::endl; break;
		case 3: std::cout<<"仅输出摄像头"<<std::endl; break;
		default: std::cout<<""<<std::endl;
	}
    }
    {
		int sum=0,i=1;
		std::cout<<"从一累加到一百的和为"<<std::endl;
		while(i<=100)
		{
			sum+=i;
			i++;
		}
		std::cout<<sum<<std::endl;
	}
	return 0;
}  
