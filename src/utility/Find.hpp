#ifndef FIND_H
#define FIND_H

namespace fxref {

class Find {
    public:
        Find();
        ~Find();
        void findTest();
    private:
        bool isDirectory( unsigned char aType ) const;
        bool isFile( unsigned char aType) const;
        bool isCurrentDirectory( const char* aDirectoryName ) const;
        bool isParentDirectory( const char* aDirectoryName ) const;
        void createDirectoryPath( const char* aParent , const char* aName , char* aPath ) const;
        void readDirectory( const char* aDirectoryName ) const;
};

} //namespace

#endif // FIND_H

