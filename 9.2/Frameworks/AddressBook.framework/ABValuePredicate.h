/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

@interface ABValuePredicate : ABPredicate {
    long  _comparison;
    BOOL  _dictionaryValue;
    NSArray * _orderedKeys;
    int  _property;
    <NSObject> * _value;
}

@property (nonatomic) long comparison;
@property (nonatomic) int property;
@property (nonatomic, copy) NSObject *value;

+ (id)stringForComparison:(id)arg1 withComparision:(long)arg2;

- (BOOL)_allowsLaxCheckingForFTS;
- (id)_ftsAllQueryStrings;
- (id)_ftsTermStringForString:(id)arg1;
- (id)_ftsTokenizedTermStringForString:(id)arg1;
- (BOOL)_shouldConsultIndexForKey:(id)arg1;
- (BOOL)_supportsFTSSearch;
- (void)ab_bindWhereClauseComponentOfStatement:(struct CPSqliteStatement { struct CPSqliteConnection {} *x1; struct sqlite3_stmt {} *x2; }*)arg1 withBindingOffset:(int*)arg2 predicateIdentifier:(int)arg3;
- (long)comparison;
- (void)dealloc;
- (id)init;
- (BOOL)isValid;
- (id)predicateFormat;
- (int)property;
- (id)queryJoinsInCompound:(BOOL)arg1 predicateIdentifier:(int)arg2;
- (id)querySelectPropertiesForPredicateIdentifier:(int)arg1;
- (id)queryWhereStringForPredicateIdentifier:(int)arg1;
- (void)setComparison:(long)arg1;
- (void)setProperty:(int)arg1;
- (void)setValue:(id)arg1;
- (id)stringForComparison:(id)arg1;
- (id)value;

@end
