#include "include/Main.hpp"

QApplication* APPLICATION{};
QMainWindow* WINDOW{};
Splitter* SPLITTER{};

int main(int argc, char** argv)
{
    APPLICATION = new QApplication{argc, argv};
    WINDOW = new QMainWindow{};
    SPLITTER = new Splitter{};

    WINDOW->setCentralWidget(SPLITTER);

    WINDOW->resize(860, 640);
    WINDOW->setWindowTitle("PRC2-zapocet");
    WINDOW->setWindowIcon(QIcon(":/icons/app_icon"));

    QLabel* Label1{new QLabel{"Widget 1 on the left"}};
    QLabel* Label2{new QLabel{"Widget 2 on the right"}};
    SPLITTER->addWidget(Label1);
    SPLITTER->addWidget(Label2);

    WINDOW->setStyleSheet("QSplitter::handle{background: black;}");

    WINDOW->show();

    return APPLICATION->exec();
}
