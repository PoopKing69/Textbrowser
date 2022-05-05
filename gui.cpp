#include "gui.h"

Gui::Gui(QWidget *parent) : QWidget(parent)
{
    setupUi(this);
    connect(m_client, &HttpClient,this,&Gui::ShowResult);
}

void Gui::on_goButton_clicked()
{
    QString host = hostEntry->text();

}
