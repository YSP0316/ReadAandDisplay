#include <fstream>
#include <iostream>
using namespace std;
void NewName()
{
	char x;
	ofstream txt1("txt1.txt");

	if (!txt1)
	{
		cerr << "open the file error !" << endl;
		cout << "please the any key to exit" << endl;
		cin >> x; //从键盘读入一行字符
		exit(1); 
	}
	char c[80];
	cout << "please input chars" << endl;
	cin.getline(c, 80); //从键盘读入一行字符
	cout << "chars enter successful" << endl;

	for (int i = 0; c[i] != 0; i++)
	{
		txt1.put(c[i]);
		cout << c[i];
	}
	cout << endl;
	txt1.close();
	cout << "these chars save to newfile1.txt seccesful" << endl;

}
void copytenlinechar()
{
	char ch,x;
	ifstream txt2("txt2.txt", ios::in| ios::_Nocreate);
	if (!txt2)
	{
		cerr << "open txt2 error" << endl;
		cout << "please the any key to exit" << endl;
		cin >> x; //从键盘读入一行字符
		exit(1);

	}
	ofstream txt1("txt1.txt", ios::app);
	if (!txt1)
	{
		cerr << "open txt1 error!" << endl;
		cout << "please the any key to exit" << endl;
		cin >>x; //从键盘读入一行字符
		exit(1);
	}
	while (txt2.get(ch))
	{
		txt1.put(ch);
		cout << ch;
	}
	cout << endl;
	txt1.close();
	txt2.close();
}
int main()
{
	NewName();
	copytenlinechar();
	return(0);
}