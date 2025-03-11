#include "SingleStorage.h" 




RestorePoint SingleStorage::createRestorePoint(const std::vector<BackupObject>& files) {
    return RestorePoint(files); 

}

