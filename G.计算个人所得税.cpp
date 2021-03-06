/*G: 计算应交个人所得税

描述
 
按照国家规定，个人所得税起征点为3500元，当工资高于3500时，需缴纳个人所得税。缴纳标准如下：
级数
含税级距
税率
1
不超过1,500元的
3%
2
超过1,500元至4,500元的部分
10%
3
超过4,500元至9,000元的部分
20%
4
超过9,000元至35,000元的部分
25%
5
超过35,000元至55,000元的部分
30%
6
超过55,000元至80,000元的部分
35%
7
超过80,000元的部分
45%
如当一个人工资为6000时，首先计算交税部分为6000-3500=2500，则纳税金额为：1500*3%+1000*10% = 145
  
输入
 
第一行输入一个正整数值n代表个人税前工资。
 
输出
 
计算个人应交所得税并输出，保留小数点后两位。
 
样例
 
输入
输出
10000
745.00*/
#include<iostream>
#include<iomanip> 
using namespace std;
int main()
{
	int n;
	double tax;
	cin>>n;
	n=n-3500;
	if(n<=0)tax=0.0;
	else if(n<=1500&&n>=0)tax=0.03*n;
	else if(n<=4500)tax=1500*0.03+(n-1500)*0.1;
	else if(n<=9000)tax=1500*0.03+300+(n-4500)*0.2;
	else if(n<=35000)tax=1500*0.03+300+4500*0.2+(n-9000)*0.25;
	else if(n<=55000)tax=1500*0.03+300+4500*0.2+26000*0.25+(n-35000)*0.3;
	else if(n<=80000)tax=1500*0.03+300+4500*0.2+26000*0.25+20000*0.3+(n-80000)*0.35;
    else if (n>80000)tax=1500*0.03+300+4500*0.2+26000*0.25+20000*0.3+(80000-55000)*0.35+(n-80000)*0.45;
    cout.setf(ios::fixed);
	cout<<setprecision(2)<<tax<<endl; 
return 0;
}

