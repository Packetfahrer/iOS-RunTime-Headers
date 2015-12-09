/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASTGridCell : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) SAUIDecoratedText *subTitle;
@property (readonly) Class superclass;
@property (nonatomic, retain) SAUIDecoratedText *title;

+ (id)gridCell;
+ (id)gridCellWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setSubTitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subTitle;
- (id)title;

@end
