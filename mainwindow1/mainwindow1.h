#define MAINWINDOW1_H
#include <QLabel>
#include <QtWidgets/QMainWindow>
#include <QMainWindow>
#include <QFileDialog>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/opencv.hpp>
#include <opencv2/imgproc/imgproc.hpp>
using namespace cv;

namespace Ui {
    class mainwindow1;
    class mainwindow1Class;
}

class mainwindow1 : public QMainWindow
{
    Q_OBJECT

public:
    mainwindow1(QWidget *parent = nullptr);
    ~mainwindow1();

private slots:
    void on_statement_triggered(); //介面預設呈現

    void on_pushButton_clicked(); //初級開圖檔

    void on_pushButton_2_clicked(); //高斯模糊

    void on_pushButton_3_clicked(); // 灰階

    void on_pushButton_5_clicked(); //開啟進階圖檔

    void on_pushButton_4_clicked(); //邊緣檢測

    void on_pushButton_7_clicked(); //二值化

    void on_pushButton_8_clicked(); //霍夫找圓

    void on_save_image_clicked(); // 初級儲存圖片功能

    void on_save_image_2_clicked(); //進階儲存圖片

private:
    QImage MatToQImage(const cv::Mat& mat);				// 將MAT物件(openCV)轉QImage類型(qt)
    void display_MatInQT(QLabel* label, cv::Mat mat);	// MAT對象 QT顯示 label指標指向Qlabel和 Mat, 轉化Mat物件成Qimage(讓Qt介面可顯示)
    QImage MatToQImage1(const cv::Mat& mat);			
    void display_MatInQT1(QLabel* label_2, cv::Mat mat);	
private:
    Ui::mainwindow1Class *ui;
    Mat image; //初級原始圖像
    Mat image1; //進階原始圖像
    Mat mat_Gaussian; //高斯模糊圖像
    Mat gray; //灰階圖像
    Mat binary; // 二值化圖像
    Mat huff; // 霍夫找圓圖像
};
