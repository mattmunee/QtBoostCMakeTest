#include "mainwindow.h"
#include <QApplication>
#include <iostream>
#include <boost/format.hpp>

using namespace std;
using namespace boost;

int main(int argc, char *argv[])
{
	unsigned int arr[3]={0x05,0x04,0xAA};

	cout<<format("%02X-%02X-%02X")%arr[0]%arr[1]%arr[2]<<endl;

	QApplication a(argc, argv);
	MainWindow w;
	w.show();

	return a.exec();
}
