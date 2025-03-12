#ifndef RESTOREPOINT_H
#define RESTOREPOINT_H

#include <vector>      // Для хранения файлов в точке восстановления
#include "BackupObject.h" // Включаем объявление класса BackupObject

// Класс для представления точки восстановления
class RestorePoint {
public:
    std::vector<BackupObject> files; // Список файлов в точке восстановления

    explicit RestorePoint(const std::vector<BackupObject>& files); // Конструктор
};

#endif // RESTOREPOINT_H
