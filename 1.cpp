#include <iostream>
#include <fstream>
using namespace std;
int main(int argc,char **argv)
{
ifstream erui("/storage/emulated/0/ack");
    if (!erui)
    {
    ofstream wj;  
    wj.open("/storage/emulated/0/ack",ios::out );
    wj.close();
    }
while(true)
{
	ifstream acj("/storage/emulated/0/ack");
    if (!acj)
    {
    break;
    }
    system("input keyevent 'KEYCODE_Q'");
}  
return 0;
}
