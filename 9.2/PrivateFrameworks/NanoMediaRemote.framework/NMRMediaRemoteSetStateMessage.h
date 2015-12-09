/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

@interface NMRMediaRemoteSetStateMessage : NSObject <NMRMediaRemoteProtobufCodable> {
    _NMRMediaRemoteSetStateMessageProfobuf * _protobuf;
}

@property (nonatomic, readonly) NSData *applicationInfoData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSData *nowPlayingInfoData;
@property (nonatomic, readonly) NSDate *serializationDate;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSData *supportedCommandsData;

+ (id)messageWithNowPlayingInfo:(id)arg1 applicationInfo:(id)arg2 supportedCommands:(id)arg3;

- (void).cxx_destruct;
- (id)_initWithNowPlayingInfo:(id)arg1 applicationInfo:(id)arg2 supportedCommands:(id)arg3;
- (id)applicationInfoData;
- (id)initWithProtobufData:(id)arg1;
- (id)nowPlayingInfoData;
- (id)protobufData;
- (id)serializationDate;
- (id)supportedCommandsData;

@end
