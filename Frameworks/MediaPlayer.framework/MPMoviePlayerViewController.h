/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPMoviePlayerController;

@interface MPMoviePlayerViewController : UIViewController  {
    id _internal;
}

@property(readonly) MPMoviePlayerController * moviePlayer;


- (void)_restoreStatusBarAnimated:(BOOL)arg1;
- (void)_moviePlayerViewController_playbackDidFinishNotification:(id)arg1;
- (id)moviePlayer;
- (void)_moviePlayerViewController_applicationDidEnterBackgroundNotification:(id)arg1;
- (id)initWithContentURL:(id)arg1;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithAsset:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (BOOL)_shouldUseFullScreenLayoutInWindow:(id)arg1 parentViewController:(id)arg2;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (BOOL)_canReloadView;
- (void)loadView;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)canBecomeFirstResponder;
- (void)remoteControlReceivedWithEvent:(id)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;

@end