#ifndef COPYCATWINDOW_H
#define COPYCATWINDOW_H

#include <QMainWindow>
#include <QClipboard>
#include <QTimer>
#include <QStringListModel>
#include "../core/HistoryManager.h"

QT_BEGIN_NAMESPACE
namespace Ui { class CopyCATWindow; }
QT_END_NAMESPACE

class CopyCATWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit CopyCATWindow(QWidget *parent = nullptr);
    ~CopyCATWindow();

private slots:
    void checkClipboard();
    void onItemClicked(const QModelIndex &index);
    void onClearClicked();

private:
    Ui::CopyCATWindow *ui;
    HistoryManager m_historyManager;
    QStringListModel *m_model;
    QTimer *m_clipboardTimer;
    QString m_lastCapturedText;

    void setupUI();
    void updateListUI();
};

#endif // COPYCATWINDOW_H
