/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPShareTokenRetrieveResponse : PBCodable <NSCopying> {
    NSString * _container;
    int  _containerEnvironment;
    NSString * _etag;
    struct { 
        unsigned int containerEnvironment : 1; 
        unsigned int participantState : 1; 
        unsigned int participantType : 1; 
        unsigned int permission : 1; 
    }  _has;
    NSString * _ownerFirstName;
    NSString * _ownerLastName;
    int  _participantState;
    int  _participantType;
    int  _permission;
    NSData * _protectedFullToken;
    CKDPProtectionInfo * _selfAddedPcs;
    CKDPShareIdentifier * _shareId;
}

@property (nonatomic, retain) NSString *container;
@property (nonatomic) int containerEnvironment;
@property (nonatomic, retain) NSString *etag;
@property (nonatomic, readonly) BOOL hasContainer;
@property (nonatomic) BOOL hasContainerEnvironment;
@property (nonatomic, readonly) BOOL hasEtag;
@property (nonatomic, readonly) BOOL hasOwnerFirstName;
@property (nonatomic, readonly) BOOL hasOwnerLastName;
@property (nonatomic) BOOL hasParticipantState;
@property (nonatomic) BOOL hasParticipantType;
@property (nonatomic) BOOL hasPermission;
@property (nonatomic, readonly) BOOL hasProtectedFullToken;
@property (nonatomic, readonly) BOOL hasSelfAddedPcs;
@property (nonatomic, readonly) BOOL hasShareId;
@property (nonatomic, retain) NSString *ownerFirstName;
@property (nonatomic, retain) NSString *ownerLastName;
@property (nonatomic) int participantState;
@property (nonatomic) int participantType;
@property (nonatomic) int permission;
@property (nonatomic, retain) NSData *protectedFullToken;
@property (nonatomic, retain) CKDPProtectionInfo *selfAddedPcs;
@property (nonatomic, retain) CKDPShareIdentifier *shareId;

- (void).cxx_destruct;
- (id)container;
- (int)containerEnvironment;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)etag;
- (BOOL)hasContainer;
- (BOOL)hasContainerEnvironment;
- (BOOL)hasEtag;
- (BOOL)hasOwnerFirstName;
- (BOOL)hasOwnerLastName;
- (BOOL)hasParticipantState;
- (BOOL)hasParticipantType;
- (BOOL)hasPermission;
- (BOOL)hasProtectedFullToken;
- (BOOL)hasSelfAddedPcs;
- (BOOL)hasShareId;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)ownerFirstName;
- (id)ownerLastName;
- (int)participantState;
- (int)participantType;
- (int)permission;
- (id)protectedFullToken;
- (BOOL)readFrom:(id)arg1;
- (id)selfAddedPcs;
- (void)setContainer:(id)arg1;
- (void)setContainerEnvironment:(int)arg1;
- (void)setEtag:(id)arg1;
- (void)setHasContainerEnvironment:(BOOL)arg1;
- (void)setHasParticipantState:(BOOL)arg1;
- (void)setHasParticipantType:(BOOL)arg1;
- (void)setHasPermission:(BOOL)arg1;
- (void)setOwnerFirstName:(id)arg1;
- (void)setOwnerLastName:(id)arg1;
- (void)setParticipantState:(int)arg1;
- (void)setParticipantType:(int)arg1;
- (void)setPermission:(int)arg1;
- (void)setProtectedFullToken:(id)arg1;
- (void)setSelfAddedPcs:(id)arg1;
- (void)setShareId:(id)arg1;
- (id)shareId;
- (void)writeTo:(id)arg1;

@end