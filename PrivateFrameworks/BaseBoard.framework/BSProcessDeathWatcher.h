/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class BSDispatchSource;

@interface BSProcessDeathWatcher : NSObject  {
    BSDispatchSource *_source;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _deathHandler;

}


- (id)initWithPID:(int)arg1 queue:(id)arg2 deathHandler:(id)arg3;
- (void)invalidate;
- (void)dealloc;

@end