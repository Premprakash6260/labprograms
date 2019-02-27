#include<iostream>
//#include<stdlib.h>
//#include <stdio.h>
#include <unistd.h>
void modify(int& y){
	y = y+1;
}
using namespace std;
int t;
int main()
{
	int x=5;
    t = fork();
    if(t == 0)//child process
    {
    	//x++;
    	modify(x);
    	cout<<"child process, x: " << x<<endl;
    }
    else if(t>0){
    	//x--;
    	modify(x);
    	cout<<"parent process, x: "<<x<<endl;
    }
	else{
		cout<<"child process is not created...........";
	}

}
