/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableDictionary;

@interface CPBundleResourceManager : NSObject {
    NSMutableDictionary *mPackageMap;
}

+ (void)disposeInstance;
+ (id)instance;

- (id)dataForResource:(id)arg1 ofType:(id)arg2 inPackage:(id)arg3;
- (void)dealloc;
- (id)init;
- (id)packageWithName:(id)arg1;
- (struct _xmlDoc { void *x1; NSInteger x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; NSInteger x10; NSInteger x11; struct _xmlDtd {} *x12; struct _xmlDtd {} *x13; struct _xmlNs {} *x14; char *x15; char *x16; void *x17; void *x18; char *x19; NSInteger x20; struct _xmlDict {} *x21; void *x22; }*)xmlDocumentForResource:(id)arg1 ofType:(id)arg2 inPackage:(id)arg3;

@end
