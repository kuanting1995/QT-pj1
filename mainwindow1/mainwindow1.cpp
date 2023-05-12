#include "mainwindow1.h"
#include "ui_mainwindow1.h"
#include <QMessageBox>
#include <QFileDialog>
#include "string.h"

using namespace cv;
using namespace std;

mainwindow1::mainwindow1(QWidget* parent) :
    QMainWindow(parent),
    ui(new Ui::mainwindow1Class)
{
    ui->setupUi(this);

    // 預設顯示為首頁
    ui->stackedWidget->setCurrentWidget(ui->win1);

    //左列大按鈕切換介面
    connect(ui->show_win1, &QPushButton::clicked, this, [=]()
        {
            // home鍵顯示首頁
            ui->stackedWidget->setCurrentWidget(ui->win1);
        });

    connect(ui->show_win2, &QPushButton::clicked, this, [=]()
        {
            // 設定鍵顯示處理頁面
            ui->stackedWidget->setCurrentWidget(ui->win2);
        });
    connect(ui->show_win3, &QPushButton::clicked, this, [=]()
        {
            // 設定鍵顯示處理頁面
            ui->stackedWidget->setCurrentWidget(ui->win3);
        });

    //圖像處理按鈕在開啟圖檔前不可使用
    ui->pushButton_2->setEnabled(false);
    ui->pushButton_3->setEnabled(false);
}

mainwindow1::~mainwindow1()
{
    delete ui;
}

//切換到首頁
void mainwindow1::on_statement_triggered()
{
    ui->stackedWidget->setCurrentWidget(ui->win1);
}

void mainwindow1::on_pushButton_clicked()
{
    //初級開啟圖檔
    ui->label->clear();
    ui->label_1->clear();
    QString filename = QFileDialog::getOpenFileName(this,
        tr("open image"),
        ".",
        tr("Image file(*.png *.jpg *.bmp)"));
    image = imread(filename.toLocal8Bit().data());
    //打開圖檔才啟用其他按鈕
    if (image.data) {
        ui->pushButton_2->setEnabled(true);
        ui->pushButton_3->setEnabled(true);
        ui->pushButton_4->setEnabled(true);
        // 通過 lable 方式顯示圖片
        display_MatInQT(ui->label, image);
    }
    else
    {
        QMessageBox::information(this, tr("提示"), tr("未成功載入圖片！"), QMessageBox::Ok);
    }
}
void mainwindow1::on_pushButton_5_clicked()
{
    //進階開啟圖檔
    ui->label_2->clear();
    ui->label_3->clear();
    QString filename = QFileDialog::getOpenFileName(this,
        tr("open image"),
        ".",
        tr("Image file(*.png *.jpg *.bmp)"));
    image1 = imread(filename.toLocal8Bit().data());
    //打開圖檔才啟用其他按鈕
    if (image1.data) {
        ui->pushButton_4->setEnabled(true);
        ui->pushButton_7->setEnabled(true);
        ui->pushButton_8->setEnabled(true);
        // 通過 lable 方式顯示圖片
        display_MatInQT(ui->label_2, image1);
    }
    else
    {
        QMessageBox::information(this, tr("提示"), tr("未成功載入圖片！"), QMessageBox::Ok);
    }
}
void mainwindow1::on_pushButton_2_clicked()
{
    ui->label_1->clear();

    if (image.data)
    {
        // 高斯模糊
        GaussianBlur(image, mat_Gaussian, Size(29, 29), 0, 0);
        display_MatInQT(ui->label_1, mat_Gaussian);
    }
    else
    {
        QMessageBox::information(this, tr("提示"), tr("未成功載入圖片！"), QMessageBox::Ok);
    }

}
void mainwindow1::on_pushButton_3_clicked()
{
    ui->label_1->clear();

    if (image.data)
    {
        // 灰階
        cvtColor(image, gray, COLOR_BGR2GRAY);
        display_MatInQT(ui->label_1, gray);
    }
    else
    {
        QMessageBox::information(this, tr("提示"), tr("未成功載入圖片"), QMessageBox::Ok);
    }

}
void mainwindow1::on_pushButton_4_clicked()
{
    ui->label_3->clear();

    if (image1.data)
    {
        // 邊緣檢測

        Canny(image1, gray, 150, 100, 3);
        display_MatInQT1(ui->label_3, gray);
    }
    else
    {
        QMessageBox::information(this, tr("提示"), tr("未成功載入圖片！"), QMessageBox::Ok);
    }

}
void mainwindow1::on_pushButton_7_clicked()
{
    ui->label_3->clear();

    if (image1.data)
    {
        // 二值化
        cvtColor(image1, gray, COLOR_BGR2GRAY);
        threshold(gray, binary, 0, 255, THRESH_BINARY | THRESH_OTSU);
        display_MatInQT1(ui->label_3, binary);
    }
    else
    {
        QMessageBox::information(this, tr("提示"), tr("未成功載入圖片！"), QMessageBox::Ok);
    }

}
void mainwindow1::on_pushButton_8_clicked()
{
    ui->label_3->clear();

    if (image1.data)
    {
        //霍夫找圓
        Mat gray;
        cvtColor(image1, gray, COLOR_BGR2GRAY);
        GaussianBlur(gray, gray, Size(9, 9), 2, 2); //高斯模糊，去躁

        vector<Vec3f> circles;
        HoughCircles(gray, circles, HOUGH_GRADIENT, 1, gray.rows / 8, 200, 100, 0, 0); //霍夫变换查找圆形

        //繪製圓形
        for (size_t i = 0; i < circles.size(); i++)
        {
            Vec3i c = circles[i];
            Point center = Point(c[0], c[1]);
            int radius = c[2];
            circle(image1, center, radius, Scalar(0, 0, 255), 3, LINE_AA);
        }

        display_MatInQT1(ui->label_3, image1);
    }
    else
    {
        QMessageBox::information(this, tr("提示"), tr("未成功載入圖片！"), QMessageBox::Ok);
    }
}
//opencv 圖像的三種格式
QImage mainwindow1::MatToQImage(const cv::Mat& mat)
{

    // 8-bits unsigned, NO. OF CHANNELS = 1
    if (mat.type() == CV_8UC1)
    {
        QImage image(mat.cols, mat.rows, QImage::Format_Indexed8);
        // Set the color table (used to translate colour indexes to qRgb values)
        image.setColorCount(256);
        for (int i = 0; i < 256; i++)
        {
            image.setColor(i, qRgb(i, i, i));
        }
        // Copy input Mat
        uchar* pSrc = mat.data;
        for (int row = 0; row < mat.rows; row++)
        {
            uchar* pDest = image.scanLine(row);
            memcpy(pDest, pSrc, mat.cols);
            pSrc += mat.step;
        }
        return image;
    }
    // 8-bits unsigned, NO. OF CHANNELS = 3
    else if (mat.type() == CV_8UC3)
    {
        // Copy input Mat
        const uchar* pSrc = (const uchar*)mat.data;
        // Create QImage with same dimensions as input Mat
        QImage image(pSrc, mat.cols, mat.rows, (int)mat.step, QImage::Format_RGB888);
        return image.rgbSwapped();
    }
    else if (mat.type() == CV_8UC4)
    {
        //qDebug() << "CV_8UC4";
        // Copy input Mat
        const uchar* pSrc = (const uchar*)mat.data;
        // Create QImage with same dimensions as input Mat
        QImage image(pSrc, mat.cols, mat.rows, (int)mat.step, QImage::Format_ARGB32);
        return image.copy();
    }
    else
    {
        //qDebug() << "ERROR: Mat could not be converted to QImage.";
        return QImage();
    }
}

//在label視窗中呈現處理後的image
void mainwindow1::display_MatInQT(QLabel* label, Mat mat)
{
    label->setPixmap(QPixmap::fromImage(MatToQImage(mat)).scaled(label->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));
}
//進階-opencv 圖像的三種格式
QImage mainwindow1::MatToQImage1(const cv::Mat& mat)
{

    // 8-bits unsigned, NO. OF CHANNELS = 1
    if (mat.type() == CV_8UC1)
    {
        QImage image1(mat.cols, mat.rows, QImage::Format_Indexed8);
        // Set the color table (used to translate colour indexes to qRgb values)
        image1.setColorCount(256);
        for (int i = 0; i < 256; i++)
        {
            image1.setColor(i, qRgb(i, i, i));
        }
        // Copy input Mat
        uchar* pSrc = mat.data;
        for (int row = 0; row < mat.rows; row++)
        {
            uchar* pDest = image1.scanLine(row);
            memcpy(pDest, pSrc, mat.cols);
            pSrc += mat.step;
        }
        return image1;
    }
    // 8-bits unsigned, NO. OF CHANNELS = 3
    else if (mat.type() == CV_8UC3)
    {
        // Copy input Mat
        const uchar* pSrc = (const uchar*)mat.data;
        // Create QImage with same dimensions as input Mat
        QImage image(pSrc, mat.cols, mat.rows, (int)mat.step, QImage::Format_RGB888);
        return image.rgbSwapped();
    }
    else if (mat.type() == CV_8UC4)
    {
        //qDebug() << "CV_8UC4";
        // Copy input Mat
        const uchar* pSrc = (const uchar*)mat.data;
        // Create QImage with same dimensions as input Mat
        QImage image(pSrc, mat.cols, mat.rows, (int)mat.step, QImage::Format_ARGB32);
        return image.copy();
    }
    else
    {
        //qDebug() << "ERROR: Mat could not be converted to QImage.";
        return QImage();
    }
}

//進階-在label_2視窗中呈現處理後的image
void mainwindow1::display_MatInQT1(QLabel* label_2, Mat mat)
{
    label_2->setPixmap(QPixmap::fromImage(MatToQImage(mat)).scaled(label_2->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));
}


//初級儲存圖片
void mainwindow1::on_save_image_clicked()
{
    QString curDir = QDir::currentPath();
    QString filename = QFileDialog::getSaveFileName(this, "Save Image", curDir, "Images (*.png *.bmp *.jpg *.tif *.GIF )");
    if (filename.isEmpty())
    {
        return;
    }
    std::string save_path = filename.toLocal8Bit().toStdString();

    if (mat_Gaussian.data) // 如果 mat_Gaussian 不為空，將其保存
    {
        std::string save_path_Gaussian = save_path + "_gaussian.png";
        cv::imwrite(save_path_Gaussian, mat_Gaussian);
    }

    if (gray.data) // 如果 gray 不為空，將其保存
    {
        std::string save_path_gray = save_path + "_gray.png";
        cv::imwrite(save_path_gray, gray);
    }

    if (image.data) // 如果 image 不為空，將其保存
    {
        std::string save_path_image = save_path + "_original.png";
        cv::imwrite(save_path_image, image);
    }

    QMessageBox::information(this, tr("提示"), tr("圖片已儲存！"), QMessageBox::Ok);
}
//進階儲存圖片
void mainwindow1::on_save_image_2_clicked()
{
    QString curDir = QDir::currentPath();
    QString filename = QFileDialog::getSaveFileName(this, "Save Image", curDir, "Images (*.png *.bmp *.jpg *.tif *.GIF )");
    
    if (filename.isEmpty())
    {
        return;
    }
    std::string save_path = filename.toLocal8Bit().toStdString();

    if (binary.data) // 如果 binary 不為空，將其保存
    {
        std::string save_path_binary = save_path + "_binary.png";
        cv::imwrite(save_path_binary, binary); //二值化
    }

    if (gray.data) // 如果 gray 不為空，將其保存
    {
        std::string save_path_gray = save_path + "_edgeDetection.png";
        cv::imwrite(save_path_gray, gray); //邊緣檢測
    }

    if (image1.data) // 如果 image1 不為空，將其保存
    {
        std::string save_path_image = save_path + "_houghCircles.png";
        cv::imwrite(save_path_image, image1); //霍夫找圓
    }

    QMessageBox::information(this, tr("提示"), tr("圖片已儲存！"), QMessageBox::Ok);
}