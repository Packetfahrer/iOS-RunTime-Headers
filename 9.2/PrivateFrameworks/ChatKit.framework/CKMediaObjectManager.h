/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKMediaObjectManager : NSObject {
    NSDictionary * _UTITypes;
    NSArray * _classes;
    NSDictionary * _dynTypes;
    NSMutableDictionary * _transfers;
}

@property (nonatomic, copy) NSDictionary *UTITypes;
@property (nonatomic, copy) NSArray *classes;
@property (nonatomic, copy) NSDictionary *dynTypes;
@property (nonatomic, retain) NSMutableDictionary *transfers;

+ (id)sharedInstance;

- (id)UTITypeForExtension:(id)arg1;
- (id)UTITypeForFilename:(id)arg1;
- (id)UTITypes;
- (Class)classForFilename:(id)arg1;
- (Class)classForUTIType:(id)arg1;
- (id)classes;
- (void)dealloc;
- (id)dynTypes;
- (id)fileManager;
- (id)init;
- (id)mediaObjectWithData:(id)arg1 UTIType:(id)arg2 filename:(id)arg3 transcoderUserInfo:(id)arg4;
- (id)mediaObjectWithFileURL:(id)arg1 filename:(id)arg2 transcoderUserInfo:(id)arg3;
- (id)mediaObjectWithTransferGUID:(id)arg1 imMessage:(id)arg2;
- (void)setClasses:(id)arg1;
- (void)setDynTypes:(id)arg1;
- (void)setTransfers:(id)arg1;
- (void)setUTITypes:(id)arg1;
- (Class)transferClass;
- (void)transferRemoved:(id)arg1;
- (id)transferWithFileURL:(id)arg1 transcoderUserInfo:(id)arg2;
- (id)transferWithTransferGUID:(id)arg1 imMessage:(id)arg2;
- (id)transfers;

@end
