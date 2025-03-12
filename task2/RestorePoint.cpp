#include "RestorePoint.h" // Подключаем заголовочный файл

// Конструктор, копирует список файлов
RestorePoint::RestorePoint(const std::vector<BackupObject>& files) : files(files) {}
