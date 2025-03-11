#ifndef RESTOREPOINT_H
#define RESTOREPOINT_H

#include <vector>      
#include "BackupObject.h" 


class RestorePoint {
public:
    std::vector<BackupObject> files; 

    explicit RestorePoint(const std::vector<BackupObject>& files); 
};

#endif // RESTOREPOINT_H

