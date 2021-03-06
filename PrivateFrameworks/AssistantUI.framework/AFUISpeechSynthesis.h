/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

@interface AFUISpeechSynthesis : NSObject <AFQueueDelegate, AFUISpeechSynthesis, AFUISpeechSynthesisElementDelegate, VSSpeechSynthesizerDelegate> {
    NSMutableArray * _activeElements;
    <AFUISpeechSynthesisDelegate> * _delegate;
    AFQueue * _elementQueue;
    <AFUISpeechSynthesisLocalDelegate> * _localDelegate;
    AFVoiceInfo * _outputVoice;
    unsigned int  _sessionID;
    bool  _sessionIDIsValid;
    VSSpeechSynthesizer * _synthesizer;
}

@property (getter=_activeElements, nonatomic, readonly) NSMutableArray *activeElements;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) <AFUISpeechSynthesisDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=_elementQueue, nonatomic, readonly) AFQueue *elementQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic) <AFUISpeechSynthesisLocalDelegate> *localDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_activeElements;
- (void)_cancelByCancellingActiveElementsOnly:(bool)arg1;
- (id)_elementQueue;
- (void)_processElementQueue;
- (void)_processProvisionalElements;
- (id)_synthesizer;
- (void)_updateSynthesizerWithSessionID:(unsigned int)arg1;
- (void)_updateSynthesizerWithVoice:(id)arg1;
- (void)cancel;
- (id)delegate;
- (void)enqueueText:(id)arg1 completion:(id /* block */)arg2;
- (void)enqueueText:(id)arg1 isPhonetic:(bool)arg2 provisionally:(bool)arg3 eligibleAfterDuration:(double)arg4 preparationIdentifier:(id)arg5 completion:(id /* block */)arg6 animationIdentifier:(id)arg7;
- (id)init;
- (void)invalidate;
- (void)invalidateOnMainThread;
- (bool)isSpeaking;
- (bool)isSynthesisQueueEmpty;
- (id)localDelegate;
- (void)prewarmIfNeeded;
- (void)queue:(id)arg1 didEnqueueObjects:(id)arg2;
- (void)setAudioSessionID:(unsigned int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLocalDelegate:(id)arg1;
- (void)setOutputVoice:(id)arg1;
- (void)skipCurrentSynthesis;
- (void)speechSynthesisElementSynthesisEligibilityDidChange:(id)arg1;
- (void)speechSynthesizer:(id)arg1 didFinishSpeakingRequest:(id)arg2 successfully:(bool)arg3 withError:(id)arg4;
- (void)speechSynthesizer:(id)arg1 didFinishSpeakingRequest:(id)arg2 withInstrumentMetrics:(id)arg3;
- (void)speechSynthesizer:(id)arg1 didStartSpeakingRequest:(id)arg2;

@end
