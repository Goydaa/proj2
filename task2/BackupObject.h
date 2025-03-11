 
#ifndef BACKUPOBJECT_H
#define BACKUPOBJECT_H

#include <string> 


class BackupObject {
public:
    std::string filePath; 

    explicit BackupObject(const std::string& path);
};

#endif // BACKUPOBJECT_H
