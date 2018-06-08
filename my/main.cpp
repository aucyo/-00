#include "myqt.h"
#include <QApplication>
int main(int argc,char **argv){
  QApplication app(argc,argv);
  MyDlg *mydlg=new MyDlg;
  return mydlg->exec();
}
