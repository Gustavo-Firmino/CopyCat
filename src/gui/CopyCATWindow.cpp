#include "CopyCATWindow.h"
#include "ui_CopyCATWindow.h"
#include <QApplication>

CopyCATWindow::CopyCATWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::CopyCATWindow) {
    ui->setupUi(this);

    m_model = new QStringListModel(this);
    ui->listViewHistory->setModel(m_model);

    // Timer de Polling (300ms)
    m_clipboardTimer = new QTimer(this);
    connect(m_clipboardTimer, &QTimer::timeout, this, &CopyCATWindow::checkClipboard);
    m_clipboardTimer->start(300);

    // Sinais de Interface
    connect(ui->listViewHistory, &QListView::clicked, this, &CopyCATWindow::onItemClicked);
    connect(ui->btnClear, &QPushButton::clicked, this, &CopyCATWindow::onClearClicked);

    setWindowTitle("CopyCat - Gerenciador de Clipboard");
}

CopyCATWindow::~CopyCATWindow() {
    delete ui;
}

void CopyCATWindow::checkClipboard() {
    QClipboard *clipboard = QApplication::clipboard();
    QString currentText = clipboard->text();

    if (!currentText.isEmpty() && currentText != m_lastCapturedText) {
        m_lastCapturedText = currentText;
        m_historyManager.addEntry(currentText);
        updateListUI();
    }
}

void CopyCATWindow::onItemClicked(const QModelIndex &index) {
    QString selectedText = index.data(Qt::DisplayRole).toString();
    m_lastCapturedText = selectedText; // Evita re-capturar no timer
    QApplication::clipboard()->setText(selectedText);
}

void CopyCATWindow::onClearClicked() {
    m_historyManager.clear();
    m_lastCapturedText.clear();
    updateListUI();
}

void CopyCATWindow::updateListUI() {
    m_model->setStringList(m_historyManager.getHistory());
    ui->lblCount->setText(QString("Itens salvos: %1").arg(m_historyManager.count()));
}
