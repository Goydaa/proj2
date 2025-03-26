#include "BackupJob.h"
#include "LocalStorage.h"
#include "CloudStorage.h"
#include "BackupZipManager.h"

int main() {
    BackupJob backup;
    
    backup.addFile("file1.txt");
    backup.addFile("file2.txt");

    LocalStorage localStorage("backup_folder");
    CloudStorage cloudStorage;

    backup.addStorage(&localStorage);
    backup.addStorage(&cloudStorage);

    backup.executeBackup();

    // Создание ZIP-архива
    BackupZipManager::createZipBackup("backup_folder", "backup.zip");

    return 0;
}
