/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKPackageSection : NSObject {
    int  _index;
    NSData * _signature;
    unsigned long long  _size;
}

@property (nonatomic, readonly) int index;
@property (nonatomic, readonly) NSData *signature;
@property (nonatomic) unsigned long long size;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)description;
- (int)index;
- (id)initWithIndex:(int)arg1 signature:(id)arg2 size:(unsigned long long)arg3;
- (void)setSize:(unsigned long long)arg1;
- (id)signature;
- (unsigned long long)size;

@end
