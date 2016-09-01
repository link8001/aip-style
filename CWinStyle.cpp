#include "CWinStyle.h"
#include "ui_CWinStyle.h"

CWinStyle::CWinStyle(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CWinStyle)
{
    ui->setupUi(this);
    BtnInit();
}

CWinStyle::~CWinStyle()
{
    delete ui;
}

void CWinStyle::BtnInit()
{
    //安装事件监听器,让标题栏识别鼠标双击
    ui->lab_Title->installEventFilter(this);

    int fontId = QFontDatabase::addApplicationFont(":/image/fontawesome-webfont.ttf");
    QString fontName = QFontDatabase::applicationFontFamilies(fontId).at(0);
    QFont iconFont = QFont(fontName);
    iconFont.setPointSize(12);
    ui->btnMenu_Close->setFont(iconFont);
    ui->btnMenu_Close->setText(QChar(0xf00d));
    ui->btnMenu_Max->setFont(iconFont);
    ui->btnMenu_Max->setText(QChar(0xf096));
    ui->btnMenu_Min->setFont(iconFont);
    ui->btnMenu_Min->setText(QChar(0xf068));
    ui->lab_Ico->setFont(iconFont);
    ui->lab_Ico->setText(QChar(0xf015));


    btnGroup = new QButtonGroup;
    btnGroup->addButton(ui->Key001,Qt::Key_A);
    btnGroup->addButton(ui->Key002,Qt::Key_B);
    btnGroup->addButton(ui->Key003,Qt::Key_C);
    btnGroup->addButton(ui->Key004,Qt::Key_D);
    btnGroup->addButton(ui->Key005,Qt::Key_E);
    btnGroup->addButton(ui->Key006,Qt::Key_F);
    btnGroup->addButton(ui->Key007,Qt::Key_G);
    btnGroup->addButton(ui->Key008,Qt::Key_H);
    btnGroup->addButton(ui->Key009,Qt::Key_I);
    btnGroup->addButton(ui->Key010,Qt::Key_J);
    btnGroup->addButton(ui->Key011,Qt::Key_K);
    btnGroup->addButton(ui->Key012,Qt::Key_L);
    btnGroup->addButton(ui->Key013,Qt::Key_M);
    btnGroup->addButton(ui->Key014,Qt::Key_N);
    btnGroup->addButton(ui->Key015,Qt::Key_O);
    btnGroup->addButton(ui->Key016,Qt::Key_P);
    btnGroup->addButton(ui->Key017,Qt::Key_Q);
    btnGroup->addButton(ui->Key018,Qt::Key_R);
    btnGroup->addButton(ui->Key019,Qt::Key_S);
    btnGroup->addButton(ui->Key020,Qt::Key_T);
    btnGroup->addButton(ui->Key021,Qt::Key_U);
    btnGroup->addButton(ui->Key022,Qt::Key_V);
    connect(btnGroup,SIGNAL(buttonClicked(int)),this,SLOT(BtnJudge(int)));
    BtnJudge(Qt::Key_D);
}

void CWinStyle::BtnJudge(int id)
{
    QFile file;
    QString qss;
    switch (id) {
    case Qt::Key_A:
        file.setFileName(":/css/aip001.css");
        file.open(QFile::ReadOnly);
        qss = QLatin1String(file.readAll());
        this->setStyleSheet(qss);
        break;
    case Qt::Key_B:
        file.setFileName(":/css/aip002.css");
        file.open(QFile::ReadOnly);
        qss = QLatin1String(file.readAll());
        this->setStyleSheet(qss);
        break;
    case Qt::Key_C:
        file.setFileName(":/css/aip003.css");
        file.open(QFile::ReadOnly);
        qss = QLatin1String(file.readAll());
        this->setStyleSheet(qss);
        break;
    case Qt::Key_D:
        file.setFileName(":/css/aip004.css");
        file.open(QFile::ReadOnly);
        qss = QLatin1String(file.readAll());
        this->setStyleSheet(qss);
        break;
    case Qt::Key_E:
        file.setFileName(":/css/aip005.css");
        file.open(QFile::ReadOnly);
        qss = QLatin1String(file.readAll());
        this->setStyleSheet(qss);
        this->setPalette(QPalette(QColor("#EBECF0")));
        break;
    case Qt::Key_F:
        file.setFileName(":/css/aip006.css");
        file.open(QFile::ReadOnly);
        qss = QLatin1String(file.readAll());
        this->setStyleSheet(qss);
        this->setPalette(QPalette(QColor("#F0F0F0")));
        break;
    case Qt::Key_G:
        file.setFileName(":/css/aip007.css");
        file.open(QFile::ReadOnly);
        qss = QLatin1String(file.readAll());
        this->setStyleSheet(qss);
        this->setPalette(QPalette(QColor("#F0F0F0")));
        break;
    case Qt::Key_H:
        file.setFileName(":/css/aip008.css");
        file.open(QFile::ReadOnly);
        qss = QLatin1String(file.readAll());
        this->setStyleSheet(qss);
        this->setPalette(QPalette(QColor("#F0F0F0")));
        break;
    case Qt::Key_I:
        file.setFileName(":/css/aip009.css");
        file.open(QFile::ReadOnly);
        qss = QLatin1String(file.readAll());
        this->setStyleSheet(qss);
        this->setPalette(QPalette(QColor("#F0F0F0")));
        break;
    case Qt::Key_J:
        file.setFileName(":/css/aip010.css");
        file.open(QFile::ReadOnly);
        qss = QLatin1String(file.readAll());
        this->setStyleSheet(qss);
        this->setPalette(QPalette(QColor("#F0F0F0")));
        break;
    case Qt::Key_K:
        file.setFileName(":/css/aip011.css");
        file.open(QFile::ReadOnly);
        qss = QLatin1String(file.readAll());
        this->setStyleSheet(qss);
        this->setPalette(QPalette(QColor("#F0F0F0")));
        break;
    case Qt::Key_L:
        file.setFileName(":/css/aip012.css");
        file.open(QFile::ReadOnly);
        qss = QLatin1String(file.readAll());
        this->setStyleSheet(qss);
        this->setPalette(QPalette(QColor("#F0F0F0")));
        break;
    case Qt::Key_M:
        file.setFileName(":/css/aip013.css");
        file.open(QFile::ReadOnly);
        qss = QLatin1String(file.readAll());
        this->setStyleSheet(qss);
        this->setPalette(QPalette(QColor("#F0F0F0")));
        break;
    case Qt::Key_N:
        file.setFileName(":/css/aip014.css");
        file.open(QFile::ReadOnly);
        qss = QLatin1String(file.readAll());
        this->setStyleSheet(qss);
        this->setPalette(QPalette(QColor("#F0F0F0")));
        break;
    case Qt::Key_O:
        file.setFileName(":/css/aip015.css");
        file.open(QFile::ReadOnly);
        qss = QLatin1String(file.readAll());
        this->setStyleSheet(qss);
        this->setPalette(QPalette(QColor("#F0F0F0")));
        break;
    case Qt::Key_P:
        file.setFileName(":/css/aip016.css");
        file.open(QFile::ReadOnly);
        qss = QLatin1String(file.readAll());
        this->setStyleSheet(qss);
        this->setPalette(QPalette(QColor("#F0F0F0")));
        break;
    case Qt::Key_Q:
        file.setFileName(":/css/aip017.css");
        file.open(QFile::ReadOnly);
        qss = QLatin1String(file.readAll());
        this->setStyleSheet(qss);
        this->setPalette(QPalette(QColor("#F0F0F0")));
        break;
    case Qt::Key_R:
        file.setFileName(":/css/aip018.css");
        file.open(QFile::ReadOnly);
        qss = QLatin1String(file.readAll());
        this->setStyleSheet(qss);
        this->setPalette(QPalette(QColor("#F0F0F0")));
        break;
    case Qt::Key_S:
        file.setFileName(":/css/aip019.css");
        file.open(QFile::ReadOnly);
        qss = QLatin1String(file.readAll());
        this->setStyleSheet(qss);
        this->setPalette(QPalette(QColor("#F0F0F0")));
        break;
    case Qt::Key_T:
        file.setFileName(":/css/aip020.css");
        file.open(QFile::ReadOnly);
        qss = QLatin1String(file.readAll());
        this->setStyleSheet(qss);
        this->setPalette(QPalette(QColor("#F0F0F0")));
        break;
    case Qt::Key_U:
        file.setFileName(":/css/aip021.css");
        file.open(QFile::ReadOnly);
        qss = QLatin1String(file.readAll());
        this->setStyleSheet(qss);
        this->setPalette(QPalette(QColor("#F0F0F0")));
        break;
    case Qt::Key_V:
        file.setFileName(":/css/aip022.css");
        file.open(QFile::ReadOnly);
        qss = QLatin1String(file.readAll());
        this->setStyleSheet(qss);
        this->setPalette(QPalette(QColor("#F0F0F0")));
        break;
    default:
        break;
    }
}
