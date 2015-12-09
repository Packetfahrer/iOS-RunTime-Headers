/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUICountdown : NSObject {
    NSURL * _URL;
    SKUIArtworkList * _artworkList;
    unsigned int  _dateFormat;
    SKUIArtworkList * _endArtworkList;
    NSDate * _endDate;
    long long  _finalValue;
    UIColor * _flapBottomColor;
    UIColor * _flapTopColor;
    BOOL  _flapped;
    UIColor * _fontColor;
    long long  _initialValue;
    BOOL  _isLoaded;
    NSString * _numberFormat;
    int  _rate;
    NSDate * _startDate;
    int  _type;
}

@property (nonatomic, copy) NSURL *URL;
@property (nonatomic, retain) SKUIArtworkList *artworkList;
@property (nonatomic) unsigned int dateFormat;
@property (nonatomic, retain) SKUIArtworkList *endArtworkList;
@property (nonatomic, copy) NSDate *endDate;
@property (nonatomic) long long finalValue;
@property (nonatomic, copy) UIColor *flapBottomColor;
@property (nonatomic, copy) UIColor *flapTopColor;
@property (getter=isFlapped, nonatomic) BOOL flapped;
@property (nonatomic, copy) UIColor *fontColor;
@property (nonatomic) long long initialValue;
@property (nonatomic, copy) NSString *numberFormat;
@property (nonatomic) int rate;
@property (nonatomic, copy) NSDate *startDate;
@property (nonatomic) int type;

- (void).cxx_destruct;
- (id)URL;
- (id)artworkList;
- (unsigned int)dateFormat;
- (id)endArtworkList;
- (id)endDate;
- (long long)finalValue;
- (id)flapBottomColor;
- (id)flapTopColor;
- (id)fontColor;
- (id)initWithCountdownDictionary:(id)arg1;
- (long long)initialValue;
- (BOOL)isFlapped;
- (BOOL)isLoaded;
- (id)numberFormat;
- (int)rate;
- (void)setArtworkList:(id)arg1;
- (void)setDateFormat:(unsigned int)arg1;
- (void)setEndArtworkList:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setFinalValue:(long long)arg1;
- (void)setFlapBottomColor:(id)arg1;
- (void)setFlapTopColor:(id)arg1;
- (void)setFlapped:(BOOL)arg1;
- (void)setFontColor:(id)arg1;
- (void)setInitialValue:(long long)arg1;
- (void)setNumberFormat:(id)arg1;
- (void)setRate:(int)arg1;
- (void)setStartDate:(id)arg1;
- (void)setType:(int)arg1;
- (void)setURL:(id)arg1;
- (id)startDate;
- (int)type;
- (void)updateWithDictionary:(id)arg1;

@end
