/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

@interface CXCallDirectoryExtensionManager : NSObject {
    <CXCallDirectoryExtensionManagerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    id  _extensionMatchingContext;
    CXCallDirectoryManager * _manager;
    NSArray * _nsExtensions;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic) <CXCallDirectoryExtensionManagerDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (nonatomic, retain) id extensionMatchingContext;
@property (nonatomic, readonly, copy) NSArray *extensions;
@property (nonatomic, readonly) CXCallDirectoryManager *manager;
@property (setter=setNSExtensions:, nonatomic, retain) NSArray *nsExtensions;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id)_baseExtensionMatchingAttributes;
- (void)_beginMatchingExtensionsIfNecessary;
- (id)_extensionsFromNSExtensions:(id)arg1;
- (void)_extensionsUpdated;
- (void)_nsExtensionForIdentifier:(id)arg1 containingAppBundleURL:(id)arg2 completion:(id /* block */)arg3;
- (id)_prioritizedExtensionsFromUnprioritizedExtensions:(id)arg1 usingProrities:(id)arg2;
- (void)beginMatchingExtensions;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (id)extensionMatchingContext;
- (id)extensionWithIdentifier:(id)arg1;
- (void)extensionWithIdentifier:(id)arg1 inContainingAppWithProcessIdentifier:(int)arg2 completion:(id /* block */)arg3;
- (id)extensions;
- (void)extensionsWithCompletionHandler:(id /* block */)arg1;
- (id)init;
- (bool)isOnlyExtensionInContainingApp:(id)arg1;
- (id)manager;
- (id)nsExtensions;
- (void)prioritizedExtensionsWithCompletionHandler:(id /* block */)arg1;
- (id)queue;
- (void)setDelegate:(id)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)setDelegateQueue:(id)arg1;
- (void)setEnabled:(bool)arg1 forExtension:(id)arg2 completion:(id /* block */)arg3;
- (void)setExtensionMatchingContext:(id)arg1;
- (void)setNSExtensions:(id)arg1;
- (void)setPrioritizedExtensionIdentifiers:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setQueue:(id)arg1;

@end
