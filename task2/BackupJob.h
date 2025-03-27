#ifndef BACKUPJOB_H
#define BACKUPJOB_H

#include <vector>         // Для хранения файлов
#include "IStorage.h"     // Подключаем интерфейс хранения

// Класс для управления резервным копированием
class BackupJob {
private:
    IStorage* storage; // Указатель на используемый метод хранения
    std::vector<BackupObject> files; // Список файлов

public:
    explicit BackupJob(IStorage* storage); // Конструктор принимает метод хранения
    void addFile(const BackupObject& file); // Добавляет файл в список
    void removeFile(const std::string& filePath); // Удаляет файл
    RestorePoint createRestorePoint(); // Создает точку восстановления
};

#endif // BACKUPJOB_H

