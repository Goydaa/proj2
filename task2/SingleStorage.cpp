#include "SingleStorage.h" // Подключаем заголовочный файл

// Создает точку восстановления, сохраняя файлы в одном архиве
RestorePoint SingleStorage::createRestorePoint(const std::vector<BackupObject>& files) {
    return RestorePoint(files); // Пока что хранение не отличается, но можно добавить логику архивирования
}


