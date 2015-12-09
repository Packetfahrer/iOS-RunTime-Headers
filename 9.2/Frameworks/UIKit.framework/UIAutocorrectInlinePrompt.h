/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIAutocorrectInlinePrompt : UIView <UIKeyboardCandidateList> {
    TIKeyboardCandidateResultSet * _candidateResultSet;
    BOOL  _showHiddenCandidatesOnly;
    NSString * m_correction;
    UIView * m_correctionAnimationView;
    UIView * m_correctionShadowView;
    UIView * m_correctionView;
    id  m_delegate;
    BOOL  m_fits;
    int  m_index;
    float  m_maxX;
    BOOL  m_mouseDown;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  m_originalTypedTextRect;
    float  m_originalTypedTextRectCorrectionAmount;
    int  m_promptTextType;
    NSString * m_typedText;
    UIView * m_typedTextAnimationView;
    NSMutableArray * m_typedTextViews;
    unsigned int  m_usageTrackingMask;
    NSArray * m_usageTrackingTypes;
}

@property (nonatomic, retain) TIKeyboardCandidateResultSet *candidateResultSet;
@property (nonatomic, readonly) TIKeyboardCandidateResultSet *candidates;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL showHiddenCandidatesOnly;
@property (readonly) Class superclass;
@property (nonatomic) unsigned int usageTrackingMask;

- (void)_candidateSelected:(id)arg1;
- (id)activeCandidateList;
- (void)addTypedTextRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)candidateAcceptedAtIndex:(unsigned int)arg1;
- (id)candidateResultSet;
- (id)candidates;
- (void)candidatesDidChange;
- (id)correction;
- (id)correctionAnimationView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })correctionFrameFromDesiredFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 textHeight:(int)arg2 withExtraGap:(float)arg3;
- (id)correctionShadowView;
- (id)correctionView;
- (id)currentCandidate;
- (unsigned int)currentIndex;
- (void)dealloc;
- (void)dismiss;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)hasCandidates;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })horizontallySquishedCorrectionFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (unsigned int)index;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)inlineText;
- (BOOL)isAcceptableTextEffectsFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 afterScrollBy:(float)arg2;
- (BOOL)isExtendedList;
- (BOOL)isHiddenCandidatesList;
- (id)keyboardBehaviors;
- (float)maximumCandidateWidth;
- (unsigned int)numberOfShownItems;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (BOOL)prepareForAnimation:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)removePromptSubviews;
- (void)revealHiddenCandidates;
- (unsigned int)selectedSortIndex;
- (void)setCandidateObject:(id)arg1 candidateSet:(id)arg2 type:(int)arg3 typedText:(id)arg4 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg5 maxX:(float)arg6 showHiddenCandidatesOnly:(BOOL)arg7;
- (void)setCandidateResultSet:(id)arg1;
- (void)setCandidateSet:(id)arg1 showHiddenCandidatesOnly:(BOOL)arg2;
- (void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 maxX:(float)arg4 layout:(BOOL)arg5;
- (void)setCandidates:(id)arg1 type:(int)arg2 inlineText:(id)arg3 inlineRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4 maxX:(float)arg5 layout:(BOOL)arg6;
- (void)setCorrection:(id)arg1 typedText:(id)arg2 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 maxX:(float)arg4;
- (void)setSelectedItem:(unsigned int)arg1;
- (void)setShowHiddenCandidatesOnly:(BOOL)arg1;
- (void)setUIKeyboardCandidateListDelegate:(id)arg1;
- (void)setUsageTrackingMask:(unsigned int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })shadowFrameForFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)showCandidate:(id)arg1;
- (void)showCandidateAtIndex:(unsigned int)arg1;
- (BOOL)showHiddenCandidatesOnly;
- (void)showNextCandidate;
- (void)showNextPage;
- (void)showNextRow;
- (void)showPreviousCandidate;
- (void)showPreviousPage;
- (void)showPreviousRow;
- (id)statisticsIdentifier;
- (int)textEffectsVisibilityLevel;
- (int)textEffectsVisibilityLevelInKeyboardWindow;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (id)typedText;
- (id)typedTextAnimationView;
- (id)typedTextView;
- (unsigned int)usageTrackingMask;

@end
