#include "SplitStorage.h" // Подключаем заголовочный файл

// Создает точку восстановления, сохраняя файлы раздельно
RestorePoint SplitStorage::createRestorePoint(const std::vector<BackupObject>& files) {
    return RestorePoint(files); // Просто возвращает копию списка файлов
}
