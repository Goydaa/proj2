#ifndef SPLITSTORAGE_H
#define SPLITSTORAGE_H

#include "IStorage.h" // Подключаем интерфейс хранения

// Класс для раздельного хранения файлов
class SplitStorage : public IStorage {
public:
    RestorePoint createRestorePoint(const std::vector<BackupObject>& files) override;
};

#endif // SPLITSTORAGE_H
