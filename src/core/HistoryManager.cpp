#include "HistoryManager.h"

HistoryManager::HistoryManager(int maxItems) : m_maxItems(maxItems) {}

void HistoryManager::addEntry(const QString &text) {
    if (text.trimmed().isEmpty()) return;

    // Remove duplicatas anteriores para deixar a mais recente no topo
    m_history.removeAll(text);
    m_history.prepend(text);

    // Mantém o limite de itens
    while (m_history.size() > m_maxItems) {
        m_history.removeLast();
    }
}

void HistoryManager::clear() {
    m_history.clear();
}

QStringList HistoryManager::getHistory() const {
    return m_history;
}

int HistoryManager::count() const {
    return m_history.size();
}
