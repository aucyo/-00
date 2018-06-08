#ifndef __DLG_H__
#define __DLG_H__
#include <QDialog>
#include <ui_mywin.h>
class MyDlg:public QDialog
{
	Q_OBJECT
public:
	MyDlg();
public slots:
	void display();
private:
	Ui::Form ui;
};
#endif
