#include<iostream>
int main()
{
    for(int a=0;a<5;a++)
    {
    	std::cout<<a<<'\n';             //一定要注意for循环的循环顺序！！！太易错了
	}
	{
		for(int a=1;a<=5;a++)
		{
			int i=2;
			while(i<=20)
			{
				if(i%2==0)
				{
					i++;
					std::cout<<i<<'\n';
					break;
				}
				std::cout<<i<<std::endl;
				i++;
			}
		}
	}
	{
		int i=1;
		while(i<=20)
		{
			if(1){std::cout<<i<<'\n';break;}
		}
	}
	{
		for(int a=1;a<=5;)
		{
			if(1){std::cout<<a<<'\n';break;}    //弄清了break的作用对象！！！
		}
	}
	return 0;
}