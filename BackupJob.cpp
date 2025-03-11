 
#include "BackupJob.h" // Подключаем заголовочный файл

// Конструктор, задает метод хранения
BackupJob::BackupJob(IStorage* storage) : storage(storage) {}

// Добавляет файл в список резервного копирования
void BackupJob::addFile(const BackupObject& file) {
    files.push_back(file);
}

// Удаляет файл из списка резервного копирования
void BackupJob::removeFile(const std::string& filePath) {
    files.erase(std::remove_if(files.begin(), files.end(),
        [&filePath](const BackupObject& obj) { return obj.filePath == filePath; }),
        files.end());
}

// Создает точку восстановления с текущими файлами
RestorePoint BackupJob::createRestorePoint() {
    return storage->createRestorePoint(files);
}
