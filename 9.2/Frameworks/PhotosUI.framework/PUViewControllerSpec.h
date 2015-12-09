/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUViewControllerSpec : NSObject {
    int  __changeCount;
    NSHashTable * __changeObservers;
    BOOL  __needsUpdateLayoutStyle;
    PUViewControllerSpecChange * _currentChange;
    int  _currentLayoutStyle;
    struct CGSize { 
        float width; 
        float height; 
    }  _layoutReferenceSize;
    BOOL  _presentedForSecondScreen;
    struct CGSize { 
        float width; 
        float height; 
    }  _secondScreenSize;
    UITraitCollection * _traitCollection;
}

@property (setter=_setChangeCount:, nonatomic) int _changeCount;
@property (nonatomic, readonly) NSHashTable *_changeObservers;
@property (setter=_setNeedsUpdateLayoutStyle:, nonatomic) BOOL _needsUpdateLayoutStyle;
@property (nonatomic, readonly) PUViewControllerSpecChange *currentChange;
@property (nonatomic, readonly) int currentLayoutStyle;
@property (nonatomic) struct CGSize { float x1; float x2; } layoutReferenceSize;
@property (getter=isPresentedForSecondScreen, nonatomic) BOOL presentedForSecondScreen;
@property (nonatomic) struct CGSize { float x1; float x2; } secondScreenSize;
@property (nonatomic, retain) UITraitCollection *traitCollection;

- (void).cxx_destruct;
- (int)_changeCount;
- (id)_changeObservers;
- (void)_didChange;
- (void)_invalidateLayoutStyle;
- (BOOL)_needsUpdateLayoutStyle;
- (void)_publishChange:(id)arg1;
- (void)_setChangeCount:(int)arg1;
- (void)_setCurrentChange:(id)arg1;
- (void)_setCurrentLayoutStyle:(int)arg1;
- (void)_setNeedsUpdateLayoutStyle:(BOOL)arg1;
- (void)_updateCurrentLayoutStyleIfNeeded;
- (void)_willChange;
- (void)assertInsideChangesBlock;
- (id)currentChange;
- (int)currentLayoutStyle;
- (id)init;
- (BOOL)isPresentedForSecondScreen;
- (struct CGSize { float x1; float x2; })layoutReferenceSize;
- (id)newSpecChange;
- (void)performChanges:(id /* block */)arg1;
- (void)registerChangeObserver:(id)arg1;
- (struct CGSize { float x1; float x2; })secondScreenSize;
- (void)setLayoutReferenceSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setPresentedForSecondScreen:(BOOL)arg1;
- (void)setSecondScreenSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setTraitCollection:(id)arg1;
- (id)traitCollection;
- (void)unregisterChangeObserver:(id)arg1;
- (void)updateIfNeeded;
- (BOOL)updateWithTraitCollection:(id)arg1 layoutReferenceSize:(struct CGSize { float x1; float x2; })arg2;

@end
