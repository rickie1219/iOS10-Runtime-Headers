/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/Parsec.framework/Parsec
 */

@class NSString;

@interface PRSFeedback : NSObject <NSCopying> {
    NSString *_input;
    long long _timestamp;
}

@property(readonly) NSString * type;
@property(readonly) NSString * input;
@property long long timestamp;

+ (id)JSONDictionaryForFeedbackArray:(id)arg1;

- (id)initWithInput:(id)arg1 timestamp:(long long)arg2;
- (id)plist;
- (id)initWithFeedback:(id)arg1;
- (void)setTimestamp:(long long)arg1;
- (long long)timestamp;
- (id)input;
- (id)init;
- (id)type;
- (id)copy;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)validate;

@end