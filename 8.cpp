#include <iostream>
#include <random>
#include<windows.h>
int main()
{
	SetConsoleOutputCP(CP_UTF8);
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1,10);
    int num=dis(gen),v[10];
    for (int i=0;i<10;i++)
    {
    	std::cout<<"请第"<<i+1<<"次输入数字：";
    	std::cin>>v[i];
	}
	int result=0;
	for (int i=0;i<10;i++)
	{   
		if(v[i]==num)
        {
        	result++;
		}
	}
    std::cout<<"用户最终猜对了："<<result<<"次"<<std::endl;
    {
    	int i=0,arr[]={1,2,3,4,5};
    	while(i<(sizeof(arr)/sizeof(arr[0])))
    	{
    		std::cout<<arr[i]<<std::endl;
    		i++;
		}
	}
	{
		int i=0,arr[]={1,2,3,4,5};
		for(;i<(sizeof(arr)/sizeof(arr[0]));i++)
		{
			std::cout<<arr[i]<<std::endl;
		}
	}
	{
		int arr[]={1,2,3,4,5};
		for(int num:arr)
		{
			std::cout<<num<<std::endl;
		}
	}
    return 0;
}