/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@interface CalDAVAddManagedAttachmentsTaskGroup : CoreDAVTaskGroup {
    NSDictionary * _attachments;
    NSDictionary * _contentTypes;
    NSMutableDictionary * _filenamesToServerLocation;
    BOOL  _hadPreconditionFailure;
    NSDictionary * _postFailureSizes;
    NSURL * _postURLWithQuery;
    NSString * _previousETag;
    NSString * _previousScheduleTag;
    NSURL * _resourceURL;
    int  _state;
    NSString * _updatedETag;
    NSData * _updatedResourcePayload;
    NSString * _updatedScheduleTag;
}

@property (nonatomic, retain) NSDictionary *attachments;
@property (nonatomic, retain) NSDictionary *contentTypes;
@property (nonatomic, retain) NSMutableDictionary *filenamesToServerLocation;
@property (nonatomic) BOOL hadPreconditionFailure;
@property (nonatomic, retain) NSDictionary *postFailureSizes;
@property (nonatomic, retain) NSString *previousETag;
@property (nonatomic, retain) NSString *previousScheduleTag;
@property (nonatomic, retain) NSURL *resourceURL;
@property (nonatomic) int state;
@property (nonatomic, retain) NSString *updatedETag;
@property (nonatomic, retain) NSData *updatedResourcePayload;
@property (nonatomic, retain) NSString *updatedScheduleTag;

- (void).cxx_destruct;
- (void)_fetchUpdatedContent;
- (void)_finishWithError:(id)arg1 state:(int)arg2;
- (void)_handlePostResponse:(id)arg1;
- (BOOL)_postedLastAttachment;
- (void)_sendAttachments;
- (id)attachments;
- (id)contentTypes;
- (id)filenamesToServerLocation;
- (BOOL)hadPreconditionFailure;
- (id)initWithAccountInfoProvider:(id)arg1 resourceURL:(id)arg2 attachments:(id)arg3 contentTypes:(id)arg4 taskManager:(id)arg5;
- (id)postFailureSizes;
- (id)previousETag;
- (id)previousScheduleTag;
- (id)resourceURL;
- (void)setAttachments:(id)arg1;
- (void)setContentTypes:(id)arg1;
- (void)setFilenamesToServerLocation:(id)arg1;
- (void)setHadPreconditionFailure:(BOOL)arg1;
- (void)setPostFailureSizes:(id)arg1;
- (void)setPreviousETag:(id)arg1;
- (void)setPreviousScheduleTag:(id)arg1;
- (void)setResourceURL:(id)arg1;
- (void)setState:(int)arg1;
- (void)setUpdatedETag:(id)arg1;
- (void)setUpdatedResourcePayload:(id)arg1;
- (void)setUpdatedScheduleTag:(id)arg1;
- (void)startTaskGroup;
- (int)state;
- (id)updatedETag;
- (id)updatedResourcePayload;
- (id)updatedScheduleTag;
- (id)urlWithQuery;

@end
