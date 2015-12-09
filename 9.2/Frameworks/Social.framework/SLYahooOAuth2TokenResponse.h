/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLYahooOAuth2TokenResponse : NSObject {
    NSDictionary * _data;
    NSError * _error;
    NSString * _errorMessage;
    NSDate * _expiryDate;
    NSString * _refreshToken;
    int  _statusCode;
    NSString * _token;
    NSString * _yahooGUID;
}

@property (readonly) NSDictionary *data;
@property (readonly) NSError *error;
@property (readonly) NSString *errorMessage;
@property (readonly) NSDate *expiryDate;
@property (readonly) NSString *refreshToken;
@property (readonly) int statusCode;
@property (readonly) NSString *token;
@property (readonly) NSString *yahooGUID;

- (void).cxx_destruct;
- (id)data;
- (id)error;
- (id)errorMessage;
- (id)expiryDate;
- (id)initWithData:(id)arg1 urlResponse:(id)arg2 error:(id)arg3;
- (id)refreshToken;
- (int)statusCode;
- (id)token;
- (id)yahooGUID;

@end
