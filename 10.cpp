#include <iostream>
#include<windows.h>
#include<random>
int main()
{
	SetConsoleOutputCP(CP_UTF8);
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> dis(1,200);
   {
	char v[]="hello";
	for(char a:v)
	{
		std::cout<<a<<std::endl;
	}
	std::cout<<v[5]<<std::endl;
	std::cout<<sizeof(v)<<std::endl;	
	char b[]={'h','e','l','l','o'};
	std::cout<<sizeof(b)<<std::endl;
    }
	{
	int v[3][3][3];
	for(int a=0;a<=2;a++)
	{
		for(int b=0;b<=2;b++)
		{
			for(int c=0;c<=2;c++)
			{
				v[a][b][c]=dis(gen);
				std::cout<<v[a][b][c]<<std::endl;
			}
		}
	}
	}
	return 0;
}