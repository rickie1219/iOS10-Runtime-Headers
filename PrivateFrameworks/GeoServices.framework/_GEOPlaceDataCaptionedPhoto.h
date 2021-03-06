/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOPlaceDataCaptionedPhoto : NSObject <GEOMapItemPhoto> {
    GEOPDCaptionedPhoto * _captionedPhoto;
    GEOPhoto * _geoPhoto;
}

@property (nonatomic, readonly) NSString *author;
@property (nonatomic, readonly) NSString *caption;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool displayFullPhotoInline;
@property (nonatomic, readonly) GEOPhoto *geoPhoto;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *licenseDescription;
@property (nonatomic, readonly) NSURL *licenseURL;
@property (readonly) Class superclass;

- (id)author;
- (id)caption;
- (void)dealloc;
- (bool)displayFullPhotoInline;
- (id)geoPhoto;
- (id)initWithCaptionedPhoto:(id)arg1;
- (id)licenseDescription;
- (id)licenseURL;

@end
