/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/IntentsUI.framework/IntentsUI
 */

@interface _INUIExtensionContext : NSExtensionContext <_INUIExtensionContextVending> {
    struct CGSize { 
        float width; 
        float height; 
    }  _cachedHostedViewMaximumAllowedSize;
    struct CGSize { 
        float width; 
        float height; 
    }  _cachedHostedViewMinimumAllowedSize;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (id)_errorHandlingHostProxy;
- (struct CGSize { float x1; float x2; })hostedViewMaximumAllowedSize;
- (struct CGSize { float x1; float x2; })hostedViewMinimumAllowedSize;
- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3;
- (void)setHostedViewMinimumAllowedSize:(struct CGSize { float x1; float x2; })arg1 maximumAllowedSize:(struct CGSize { float x1; float x2; })arg2 completion:(id /* block */)arg3;

@end