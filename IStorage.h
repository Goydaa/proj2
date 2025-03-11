 
#ifndef ISTORAGE_H
#define ISTORAGE_H

#include <vector>        // Для хранения списка файлов
#include "RestorePoint.h" // Подключаем точку восстановления

// Интерфейс для разных типов хранения резервных копий
class IStorage {
public:
    virtual RestorePoint createRestorePoint(const std::vector<BackupObject>& files) = 0;
    virtual ~IStorage() = default; // Виртуальный деструктор для корректного наследования
};

#endif // ISTORAGE_H
