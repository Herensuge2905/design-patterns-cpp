#include "File.h"

File::File(const char * filename,
        DWORD desiredAccess,
        DWORD sharedMode,
        LPSECURITY_ATTRIBUTES sa,
        DWORD creationDisposition,
        DWORD flagsAttributes,
        HANDLE TemplateFile,
        HANDLE hFile)
{

}
DWORD File::Read(char *pBuffer, DWORD  size)
{

}
DWORD File::Write(const char *pBuffer, DWORD size)
{

}
void File::Close()
{

}
File::~File()
{

}
BOOL File::IsOpen() const
{
    
}