#include "set.h"
using namespace std;
int main(int argc, char* argv[])
{
	ifstream list;
	//ofstream output;
	system("mkdir set_share");
	system("cls");
	system("dir/a-d-h/b > set_share\\dir.txt");
	list.open("set_share\\dir.txt", ios::in);
	if (list.fail())
	{
		cout << "���ļ����󣡳��򽫹رգ�" << endl;
		exit(1);
	}
	setClass filelist(list);
	list.close();
	filelist.showFileName();
	filelist.traversal();
	filelist.statistica();
	filelist.output();
	svg output;
	output.flush(filelist.total, filelist.statistic, filelist.Head);
	system("pause");
	return 0;
}