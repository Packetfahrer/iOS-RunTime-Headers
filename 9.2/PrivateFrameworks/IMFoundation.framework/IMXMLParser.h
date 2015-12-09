/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMXMLParser : NSObject <NSXMLParserDelegate> {
    IMXMLParserContext * _context;
    struct __CFDictionary { } * _framespace;
    NSMutableArray * _otherFrames;
    NSXMLParser * _parser;
    struct _TidyDoc { int x1; } * _tidyDoc;
    IMXMLParserFrame * _topFrame;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (id)_newDataByTidyingData:(id)arg1;
- (void)_setupTidy;
- (void)_teardownTidy;
- (BOOL)parseContext:(id)arg1;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 foundIgnorableWhitespace:(id)arg2;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;

@end
