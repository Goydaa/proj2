#ifndef BACKUPZIPMANAGER_H
#define BACKUPZIPMANAGER_H

#include <string>

class BackupZipManager {
public:
    static bool createZipBackup(const std::string& sourceDir, const std::string& zipFilePath);
};

#endif // BACKUPZIPMANAGER_H
