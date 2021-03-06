/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFAttachmentSecurityScope : NSObject {
    NSFileCoordinator * _fileCoordinator;
    NSURL * _secureReadURL;
    NSURL * _secureWriteURL;
    BOOL  _securedRead;
    BOOL  _securedWrite;
    NSData * _securityScopeToken;
    NSURL * _securityScopedURL;
}

+ (id)securityScopedURL:(id)arg1;
+ (id)securityScopedURL:(id)arg1 withToken:(id)arg2;

- (void)_attachSecurityScope;
- (id)_createTemporaryReadURL:(id)arg1;
- (void)_removeTemporaryReadURL;
- (id)data;
- (void)dealloc;
- (id)initWithSecurityScopedURL:(id)arg1 withToken:(id)arg2;
- (BOOL)isBundle;
- (BOOL)isReadable;
- (id)securityScopeToken;
- (id)startReadAccess;
- (id)startWriteAccess;
- (void)stopAccess;

@end
