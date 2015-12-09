/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UICollectionViewItemKey : NSObject <NSCopying> {
    NSString * _identifier;
    NSIndexPath * _indexPath;
    BOOL  _isClone;
    unsigned int  _type;
}

@property (nonatomic, readonly, retain) NSString *identifier;
@property (nonatomic, readonly, retain) NSIndexPath *indexPath;
@property (nonatomic, readonly) BOOL isClone;
@property (nonatomic, readonly) unsigned int type;

+ (id)collectionItemKeyForCellWithIndexPath:(id)arg1;
+ (id)collectionItemKeyForDecorationViewOfKind:(id)arg1 andIndexPath:(id)arg2;
+ (id)collectionItemKeyForLayoutAttributes:(id)arg1;
+ (id)collectionItemKeyForSupplementaryViewOfKind:(id)arg1 andIndexPath:(id)arg2;

- (void).cxx_destruct;
- (id)copyAsClone:(BOOL)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned int)hash;
- (id)identifier;
- (id)indexPath;
- (id)initWithType:(unsigned int)arg1 indexPath:(id)arg2 identifier:(id)arg3;
- (id)initWithType:(unsigned int)arg1 indexPath:(id)arg2 identifier:(id)arg3 clone:(BOOL)arg4;
- (BOOL)isClone;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)type;

@end
