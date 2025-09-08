#pragma once
#include <Windows.h>

class File
{
    const char *m_pFileName{};
    DWORD m_DesiredAccess;
    DWORD m_SharedMode{};
    LPSECURITY_ATTRIBUTES m_pSA{};
    DWORD m_CreationDisposition{};
    DWORD m_FlagsAttributes{};
    HANDLE m_hTemplateFile{};

    HANDLE m_hFile{};
public: 
    File(const char * filename,
        DWORD desiredAccess,
        DWORD sharedMode,
        LPSECURITY_ATTRIBUTES sa,
        DWORD creationDisposition,
        DWORD flagsAttributes,
        HANDLE TemplateFile,
        HANDLE hFile);
    DWORD Read(char *pBuffer, DWORD  size);
    DWORD Write(const char *pBuffer, DWORD size);
    void Close();
    ~File();
    BOOL IsOpen() const;
    
};