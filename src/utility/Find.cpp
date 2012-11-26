#include "Find.hpp"
#include <iostream>
#include <sys/types.h>
#include <sys/stat.h>
#include <dirent.h>
#include <string.h>
#include <limits.h>
#include "CommonDef.h"
#include <assert.h>

namespace fxref {

Find::Find()
{
}

Find::~Find()
{
}

void Find::findTest()
{
    readDirectory("/home/sylphs/develop/kernel/3.6.7/linux-3.6.7");
}

void Find::readDirectory( const char* aDirectoryName ) const
{
    char resolved_path[PATH_MAX];
    if( NULL == realpath( aDirectoryName ,  resolved_path ) ) {
        return;
    }

    DIR *dir = opendir(resolved_path); 
    if( NULL == dir ) {
        return;
    }
    struct dirent *ent;
    while((ent = readdir(dir)) != NULL) {
        char path[PATH_MAX];
        if( isDirectory( ent->d_type ) ) {
             if( !isCurrentDirectory( ent->d_name ) && !isParentDirectory( ent->d_name) ) {
 //               std::cout << "Directory "<< (ent->d_name) << std::endl;
                createDirectoryPath( resolved_path , ent->d_name , path );
                readDirectory( path );
            }
        } else {
            if( isFile( ent->d_type ) ) {
                createDirectoryPath( resolved_path , ent->d_name , path );
  //              std::cout << "File "<< path << std::endl;
            } else {
  //              std::cout << "Type"<< (ent->d_type) << std::endl;
            }
        }
    }
    closedir( dir ); 
}

bool Find::isDirectory( unsigned char aType ) const
{
    return ( DT_DIR == aType);
}

bool Find::isFile( unsigned char aType ) const
{
    return ( DT_REG == aType);
}
bool Find::isCurrentDirectory( const char* aDirectoryName ) const
{
    return ( 0 == strcmp( "." , aDirectoryName ) ) ;
}

bool Find::isParentDirectory( const char* aDirectoryName ) const
{
    return ( 0 == strcmp( ".." , aDirectoryName ) );
}

void Find::createDirectoryPath( const char* aParent , const char* aName , char* aPath ) const
{
    memset( aPath , '\0' , sizeof( aPath ));
    strcat( aPath , aParent );
    strcat( aPath , "/");
    strcat( aPath , aName );    
}

} //namespace


