/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface __NSCFCharacterSet : NSMutableCharacterSet  {
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;

- (void)makeCharacterSetFast;
- (void)makeCharacterSetCompact;
- (id)bitmapRepresentation;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)invert;
- (void)formIntersectionWithCharacterSet:(id)arg1;
- (void)formUnionWithCharacterSet:(id)arg1;
- (void)removeCharactersInString:(id)arg1;
- (void)addCharactersInString:(id)arg1;
- (void)removeCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)addCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (BOOL)hasMemberInPlane:(unsigned char)arg1;
- (BOOL)longCharacterIsMember:(unsigned long)arg1;
- (id)invertedSet;
- (void)finalize;
- (unsigned int)retainCount;
- (oneway void)release;
- (id)retain;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)isSupersetOfSet:(id)arg1;
- (BOOL)characterIsMember:(unsigned short)arg1;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)arg1;

@end