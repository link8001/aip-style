#ifndef CWINSTYLE_H
#define CWINSTYLE_H

#include <QDebug>
#include <QWidget>
#include <QButtonGroup>
#include <QFont>
#include <QFontDatabase>

namespace Ui {
class CWinStyle;
}

class CWinStyle : public QWidget
{
    Q_OBJECT

public:
    explicit CWinStyle(QWidget *parent = 0);
    ~CWinStyle();
private:
    Ui::CWinStyle *ui;

private slots:
    void BtnInit(void);
    void BtnJudge(int id);

private:
    QButtonGroup *btnGroup;
};

#endif // CWINSTYLE_H
