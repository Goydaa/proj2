 
#include "SplitStorage.h" 


RestorePoint SplitStorage::createRestorePoint(const std::vector<BackupObject>& files) {
    return RestorePoint(files); 
}
