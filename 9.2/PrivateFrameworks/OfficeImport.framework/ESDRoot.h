/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface ESDRoot : ESDObject {
    NSMutableArray * mChildren;
}

- (void)addChild:(id)arg1;
- (id)childAt:(unsigned int)arg1;
- (unsigned int)childCount;
- (void)dealloc;
- (struct EshRoot { int (**x1)(); unsigned short x2; struct ChVector<EshHeader *> { struct EshHeader {} **x_3_1_1; struct EshHeader {} **x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; } x3; }*)eshRoot;
- (id)init;
- (id)initFromReader:(struct OcReader { int (**x1)(); struct EshObjectFactory {} *x2; }*)arg1;
- (id)initWithEshObject:(struct EshObject { int (**x1)(); unsigned short x2; }*)arg1;
- (id)initWithPbState:(id)arg1;
- (id)pbReferenceWithID:(unsigned long)arg1;
- (void)writeToWriter:(struct OcWriter { }*)arg1;

@end