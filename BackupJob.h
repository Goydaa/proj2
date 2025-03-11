 
#ifndef BACKUPJOB_H
#define BACKUPJOB_H

#include <vector>         

#include "IStorage.h"     




class BackupJob {
private:
    IStorage* storage; 

    std::vector<BackupObject> files; 


public:
    explicit BackupJob(IStorage* storage); 

    void addFile(const BackupObject& file); 

    void removeFile(const std::string& filePath); 

    RestorePoint createRestorePoint(); 

};

#endif // BACKUPJOB_H
