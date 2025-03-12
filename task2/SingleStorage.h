#ifndef SINGLESTORAGE_H
#define SINGLESTORAGE_H

#include "IStorage.h" // Подключаем интерфейс хранения

// Класс для общего хранения всех файлов в одном архиве
class SingleStorage : public IStorage {
public:
    RestorePoint createRestorePoint(const std::vector<BackupObject>& files) override;
};

#endif // SINGLESTORAGE_H
