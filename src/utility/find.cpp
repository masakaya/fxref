#include "find.hpp"
#include <iostream>
#include <sys/types.h>
#include <sys/stat.h>
#include <dirent.h>
#include <string.h>
#include <sstream>
//#include <regex>
//#include <boost/filesystem/path.hpp>

find::find()
{
}

find::~find()
{
}

void find::findTest()
{
    readDirectory("/usr");
}

void find::readDirectory( const char* aDirectoryName ) const
{
    DIR *dir = opendir(aDirectoryName); 
    if( NULL == dir ) {
        return;
    }
    struct dirent *ent;
    while((ent = readdir(dir)) != NULL) {
        if( isDirectory( ent->d_type ) ) {
            if( ( 0 != strcmp( "." , ent->d_name  ) ) &&
                ( 0 != strcmp(".." ,  ent->d_name ) ) ) {
                std::cout << "Directory "<< (ent->d_name) << std::endl;
                readDirectory( ent->d_name );
            }
            //std::cout << (ent->d_name) << std::endl;
        } else {
            if( isFile( ent->d_type ) ) {
                std::cout << "File "<< (ent->d_name) << std::endl;
            } else {
                std::cout << "Type"<< (ent->d_type) << std::endl;
            }
        }
    }
}

bool find::isDirectory( unsigned char aType ) const
{
    return ( DT_DIR == aType);
}

bool find::isFile( unsigned char aType ) const
{
    return ( DT_REG == aType);
}
void find::speedTest( void* /*func*/)
{
    
}
