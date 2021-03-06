/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPPasteboardNativeDataProvider : NSObject <TSPPasteboardWriting> {
    NSMutableDictionary * _nativeData;
    TSPPasteboard * _pasteboard;
    NSMutableDictionary * _tspData;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithPasteboard:(id)arg1 nativeData:(id)arg2 tspData:(id)arg3;
- (void)loadNativeData;
- (id)pasteboardPropertyListForType:(id)arg1;
- (id)writableTypesForPasteboard:(id)arg1;

@end
