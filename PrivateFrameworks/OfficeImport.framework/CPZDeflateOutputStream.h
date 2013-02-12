/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class <CPZOutputStream>;

@interface CPZDeflateOutputStream : NSObject <CPZOutputStream> {
    struct z_stream_s { 
        char *next_in; 
        NSUInteger avail_in; 
        NSUInteger total_in; 
        char *next_out; 
        NSUInteger avail_out; 
        NSUInteger total_out; 
        char *msg; 
        struct internal_state {} *state; 
        int (*zalloc)(); 
        int (*zfree)(); 
        void *opaque; 
        NSInteger data_type; 
        NSUInteger adler; 
        NSUInteger reserved; 
    } mDeflateStream;
    char *mOutBuffer;
    <CPZOutputStream> *mOutputStream;
}

- (void)close;
- (void)dealloc;
- (id)initWithOutputStream:(id)arg1;
- (void)writeBuffer:(const char *)arg1 size:(unsigned long)arg2;

@end
