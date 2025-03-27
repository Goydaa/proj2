#ifndef BACKUPOBJECT_H
#define BACKUPOBJECT_H

#include <string> // Подключаем библиотеку для работы со строками

// Класс представляет объект резервного копирования (файл)
class BackupObject {
public:
    std::string filePath; // Путь к файлу

    explicit BackupObject(const std::string& path); // Конструктор принимает путь к файлу
};

#endif // BACKUPOBJECT_H
