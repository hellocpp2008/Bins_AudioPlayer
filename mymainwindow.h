#ifndef MYMAINWINDOW_H
#define MYMAINWINDOW_H

#include <QMainWindow>
#include <QMediaPlayer>

QT_BEGIN_NAMESPACE
namespace Ui
{
    class MyMainWindow;
}
QT_END_NAMESPACE

class MyMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MyMainWindow(QWidget *parent = nullptr);
    ~MyMainWindow();

private:
    Ui::MyMainWindow *ui;

private:
    QMediaPlayer    *player;//播放器
    QMediaPlaylist  *playlist;//播放列表

    QString  durationTime;//总长度
    QString  positionTime;//当前播放到位置

private slots:
    //自定义槽函数
    void onStateChanged(QMediaPlayer::State state);

    void onPlaylistChanged(int position);

    void onDurationChanged(qint64 duration);
    void onPositionChanged(qint64 position);

    //
    void on_btnAdd_clicked();

    void on_btnPlay_clicked();

    void on_btnPause_clicked();

    void on_btnStop_clicked();

    void on_listWidget_doubleClicked(const QModelIndex &index);

    void on_btnClear_clicked();

    void on_sliderVolumn_valueChanged(int value);

    void on_btnSound_clicked();

    //    void on_sliderPosition_valueChanged(int value);

    //    void on_sliderPosition_sliderMoved(int position);

    void on_sliderPosition_valueChanged(int value);

    void on_btnRemove_clicked();

    void on_btnPrevious_clicked();

    void on_btnNext_clicked();

};
#endif // MYMAINWINDOW_H
