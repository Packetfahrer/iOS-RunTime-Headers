/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKDatePicker : UIView {
    NSDate * _date;
    <PKDatePickerDelegate> * _delegate;
    struct UIView { Class x1; } * _internalPicker;
    BOOL  _showsDay;
    BOOL  _showsMonth;
    BOOL  _showsYear;
    BOOL  _usesDarkAppearance;
}

@property (nonatomic, retain) NSDate *date;
@property (nonatomic) <PKDatePickerDelegate> *delegate;
@property (nonatomic, readonly) BOOL showsDay;
@property (nonatomic, readonly) BOOL showsMonth;
@property (nonatomic, readonly) BOOL showsYear;
@property (nonatomic) BOOL usesDarkAppearance;

- (Class)_classForDay:(BOOL)arg1 month:(BOOL)arg2 year:(BOOL)arg3;
- (void)_dateValueChanged:(struct UIView { Class x1; }*)arg1;
- (void)_forceReloadInternalPicker;
- (id)date;
- (void)dealloc;
- (id)delegate;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)pk_applyAppearance:(struct _PKAppearanceSpecifier { BOOL x1; id x2; id x3; id x4; id x5; id x6; id x7; id x8; id x9; id x10; id x11; id x12; id x13; /* Warning: Unrecognized filer type: '' using 'void*' */ void*x14; void*x15; void*x16; void*x17; void*x18; void*x19; void*x20; void*x21; SEL x22; void*x23; void*x24; void*x25; void*x26; void*x27; void*x28; void*x29; unsigned short x30; unsigned char x31; void*x32; out int x33; BOOL x34; void*x35; unsigned char x36; void*x37; long x38; long x39; void*x40; void*x41; void*x42; void*x43; void*x44; void*x45; void*x46; void*x47; void*x48; void*x49; SEL x50; void*x51; void*x52; long long x53; void*x54; void*x55; in void*x56; void*x57; void*x58; void*x59; void*x60; void*x61; void*x62; void*x63; void*x64; void*x65; void*x66; void*x67; void*x68; struct x69; void*x70; void*x71; void*x72; short x73; void*x74; void*x75; void*x76; const void*x77; void*x78; void*x79; BOOL x80; void*x81; void*x82; void*x83; void*x84; void*x85; unsigned int x86; void*x87; void*x88; void*x89; unsigned char x90; void*x91; void*x92; void*x93; void*x94; void*x95; short x96; void*x97; short x98; void*x99; void*x100; void*x101; void*x102; void*x103; void*x104; void*x105; void*x106; void*x107; struct x108; void*x109; }*)arg1;
- (id)pk_childrenForAppearance;
- (void)reconfigureToShowDay:(BOOL)arg1 month:(BOOL)arg2 year:(BOOL)arg3;
- (void)setBackgroundColor:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setUsesDarkAppearance:(BOOL)arg1;
- (BOOL)showsDay;
- (BOOL)showsMonth;
- (BOOL)showsYear;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)usesDarkAppearance;

@end
