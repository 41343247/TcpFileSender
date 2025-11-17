#include "tcpfilesender.h"

TcpFileSender::TcpFileSender(QWidget *parent)
    : QDialog(parent)
{
    loadSize=1024*4;
    totalBytes=0;
    bytesWritten=0;
    bytesToWrite=0;
    clientProgressBar=new QProgressBar;
    clientStatusLabel=new QLabel(tr("客戶端就緒"));
    startButton=new QPushButton(tr("開始"));
    quitButton=new QPushButton(tr("退出"));
}

TcpFileSender::~TcpFileSender() {}

void TcpFileSender::start()
{

}
void TcpFileSender::startTransfer()
{

}
void TcpFileSender::updateClientProject(qint64 numBytes)
{

}
void TcpFileSender::openFile()
{

}
