 
#include "BackupJob.h" 


BackupJob::BackupJob(IStorage* storage) : storage(storage) {}


void BackupJob::addFile(const BackupObject& file) {
    files.push_back(file);
}


void BackupJob::removeFile(const std::string& filePath) {
    files.erase(std::remove_if(files.begin(), files.end(),
        [&filePath](const BackupObject& obj) { return obj.filePath == filePath; }),
        files.end());
}


RestorePoint BackupJob::createRestorePoint() {
    return storage->createRestorePoint(files);
}
