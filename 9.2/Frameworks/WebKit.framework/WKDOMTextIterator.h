/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKDOMTextIterator : NSObject {
    struct unique_ptr<WebCore::TextIterator, std::__1::default_delete<WebCore::TextIterator> > { 
        struct __compressed_pair<WebCore::TextIterator *, std::__1::default_delete<WebCore::TextIterator> > { 
            struct TextIterator {} *__first_; 
        } __ptr_; 
    }  _textIterator;
    struct Vector<unsigned short, 0, WTF::CrashOnOverflow, 16> { 
        unsigned short *m_buffer; 
        unsigned int m_capacity; 
        unsigned int m_size; 
    }  _upconvertedText;
}

@property (readonly) BOOL atEnd;
@property (readonly) WKDOMRange *currentRange;
@property (readonly) unsigned int currentTextLength;
@property (readonly) const unsigned short*currentTextPointer;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)advance;
- (BOOL)atEnd;
- (id)currentRange;
- (unsigned int)currentTextLength;
- (const unsigned short*)currentTextPointer;
- (id)initWithRange:(id)arg1;

@end
