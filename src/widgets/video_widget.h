#ifndef VIDEO_WIDGET_H
#define VIDEO_WIDGET_H

#include <QLCDNumber>

class VideoWidget : public QLCDNumber
{
    Q_OBJECT

public:
    VideoWidget(QWidget *parent = nullptr);
    void mousePressEvent(QMouseEvent *);
    void mouseMoveEvent(QMouseEvent *);

public slots:
    void showTime();                 	//显示当前的时间

private:
    QPoint dragPosition;            	//保存鼠标点相对电子时钟窗体左上角的偏移值
    bool showColon;                  	//用于显示时间时是否显示“：”
};
#endif // VIDEO_WIDGET_H