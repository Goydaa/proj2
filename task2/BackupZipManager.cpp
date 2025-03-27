#include "BackupZipManager.h"
#include <filesystem>
#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdlib> // Для system()

bool BackupZipManager::createZipBackup(const std::string& sourceDir, const std::string& zipFilePath) {
    std::ostringstream command;
#ifdef _WIN32
    command << "powershell Compress-Archive -Path \"" << sourceDir << "\\*\" -DestinationPath \"" << zipFilePath << "\" -Force";
#else
    command << "zip -r \"" << zipFilePath << "\" \"" << sourceDir << "\"";
#endif

    int result = system(command.str().c_str());
    if (result == 0) {
        std::cout << "Backup успешно создан: " << zipFilePath << std::endl;
        return true;
    } else {
        std::cerr << "Ошибка при создании backup!" << std::endl;
        return false;
    }
}
