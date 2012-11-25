class find {
    public:
        find();
        ~find();
        void findTest();
    private:
        bool isDirectory( unsigned char aType ) const;
        bool isFile( unsigned char aType) const;
        void readDirectory( const char* aDirectoryName ) const;
        void speedTest( void* func);
};
