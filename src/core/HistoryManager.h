#ifndef HISTORYMANAGER_H
#define HISTORYMANAGER_H

#include <QString>
#include <QStringList>

class HistoryManager {
public:
    HistoryManager(int maxItems = 50);

    void addEntry(const QString &text);
    void clear();
    QStringList getHistory() const;
    int count() const;

private:
    QStringList m_history;
    int m_maxItems;
};

#endif // HISTORYMANAGER_H
