/* Generated by RuntimeBrowser.
 */

@protocol DKDiagnostic <NSObject>

@required

- (bool)isCancelled;
- (bool)isFinished;
- (NSDictionary *)parameters;
- (NSDictionary *)predicates;
- (DKMutableResult *)result;
- (void)setFinished:(bool)arg1;
- (void)setResult:(DKMutableResult *)arg1;
- (void)setupWithContext:(DKDiagnosticContext *)arg1;
- (NSDictionary *)specifications;
- (void)start;

@optional

- (void)cancel;
- (void)teardown;

@end
