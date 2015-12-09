/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBHandwritingCandidateView : UIKBKeyView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIKeyboardCandidateList> {
    TIKeyboardCandidateResultSet * _candidateResultSet;
    UIKBCandidateCollectionView * _candidatesCollectionView;
    <UIKeyboardCandidateListDelegate> * _delegate;
    unsigned int  _dummyCellCount;
    float  _dummyCellWidth;
    UIKeyboardCandidatePocketShadow * _leftBorder;
    UIKeyboardCandidateLogButton * _logButton;
    UIKeyboardCandidatePocketShadow * _pocketShadow;
    struct { 
        unsigned int idiom : 6; 
        unsigned int landscape : 1; 
        unsigned int split : 1; 
        unsigned int appearance : 8; 
        unsigned int rendering : 16; 
    }  _visualStyling;
}

@property (nonatomic, readonly) <UIKeyboardCandidateList> *candidateList;
@property (nonatomic, retain) TIKeyboardCandidateResultSet *candidateResultSet;
@property (nonatomic, readonly) NSArray *candidates;
@property (nonatomic, retain) UIKBCandidateCollectionView *candidatesCollectionView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UIKeyboardCandidateListDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned int dummyCellCount;
@property (nonatomic) float dummyCellWidth;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) UIKeyboardCandidatePocketShadow *leftBorder;
@property (nonatomic, retain) UIKeyboardCandidateLogButton *logButton;
@property (nonatomic, retain) UIKeyboardCandidatePocketShadow *pocketShadow;
@property (readonly) Class superclass;
@property (nonatomic) struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 16; } visualStyling;

+ (Class)cellClass;

- (id)_inheritedRenderConfig;
- (void)_setRenderConfig:(id)arg1;
- (void)calculateDummyCellAttributes;
- (void)candidateAcceptedAtIndex:(unsigned int)arg1;
- (id)candidateList;
- (id)candidateResultSet;
- (id)candidates;
- (id)candidatesCollectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize { float x1; float x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (id)currentCandidate;
- (unsigned int)currentIndex;
- (void)dealloc;
- (id)delegate;
- (void)displayLayer:(id)arg1;
- (unsigned int)dummyCellCount;
- (float)dummyCellWidth;
- (BOOL)hasCandidates;
- (BOOL)hasNextPage;
- (BOOL)hasPreviousPage;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 keyplane:(id)arg2 key:(id)arg3;
- (BOOL)isExtendedList;
- (BOOL)isHiddenCandidatesList;
- (void)jumpToCompositions;
- (id)keyboardBehaviors;
- (id)leftBorder;
- (id)logButton;
- (id)pocketShadow;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)reloadDataByAppendingAtEnd:(BOOL)arg1;
- (void)selectAndScrollToCandidateAtIndexPath:(id)arg1 animated:(BOOL)arg2;
- (unsigned int)selectedSortIndex;
- (void)setCandidateResultSet:(id)arg1;
- (void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 maxX:(float)arg4 layout:(BOOL)arg5;
- (void)setCandidatesCollectionView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDummyCellCount:(unsigned int)arg1;
- (void)setDummyCellWidth:(float)arg1;
- (void)setLeftBorder:(id)arg1;
- (void)setLogButton:(id)arg1;
- (void)setPocketShadow:(id)arg1;
- (void)setRenderConfig:(id)arg1;
- (void)setUIKeyboardCandidateListDelegate:(id)arg1;
- (void)setVisualStyling:(struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 16; })arg1;
- (BOOL)showCandidate:(id)arg1;
- (void)showCandidateAtIndex:(unsigned int)arg1;
- (void)showNextCandidate;
- (void)showNextPage;
- (void)showNextRow;
- (void)showPreviousCandidate;
- (void)showPreviousPage;
- (void)showPreviousRow;
- (id)statisticsIdentifier;
- (void)updateForKeyplane:(id)arg1 key:(id)arg2;
- (void)updateLeftBorderForKeyplane:(id)arg1;
- (void)updatePocketShadowForKeyplane:(id)arg1;
- (struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 16; })visualStyling;

@end
