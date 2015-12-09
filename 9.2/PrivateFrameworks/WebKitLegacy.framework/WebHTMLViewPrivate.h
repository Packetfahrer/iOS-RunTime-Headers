/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebHTMLViewPrivate : NSObject {
    NSTimer * autoscrollTimer;
    WebEvent * autoscrollTriggerEvent;
    BOOL  closed;
    WebDataSource * dataSource;
    BOOL  drawingIntoLayer;
    BOOL  exposeInputContext;
    BOOL  handlingMouseDownEvent;
    BOOL  ignoringMouseDraggedEvents;
    BOOL  inScrollPositionChanged;
    struct WebHTMLViewInterpretKeyEventsParameters { struct KeyboardEvent {} *x1; bool x2; bool x3; bool x4; bool x5; } * interpretKeyEventsParameters;
    WebEvent * keyDownEvent;
    struct CGPoint { 
        float x; 
        float y; 
    }  lastScrollPosition;
    WAKView * layerHostingView;
    WebEvent * mouseDownEvent;
    NSArray * pageRects;
    BOOL  paginateScreenContent;
    WebPluginController * pluginController;
    BOOL  printing;
    SEL  selectorForDoCommandBySelector;
    NSString * toolTip;
    id  trackingRectOwner;
    void * trackingRectUserData;
    BOOL  transparentBackground;
}

+ (void)initialize;

- (void)clear;
- (void)dealloc;
- (void)finalize;

@end
