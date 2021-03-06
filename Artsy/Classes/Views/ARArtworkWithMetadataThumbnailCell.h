/// Shows an image above a standard metadata view

#import "ARItemThumbnailViewCell.h"
#import "ARFeedImageLoader.h"

@class ARArtworkThumbnailMetadataView;

@interface ARArtworkWithMetadataThumbnailCell : ARItemThumbnailViewCell

+ (CGFloat)heightForMetaData;

- (void)setupWithRepresentedObject:(Artwork *)artwork;

@property (nonatomic, assign) enum ARFeedItemImageSize imageSize;
@property (nonatomic, readonly) ARArtworkThumbnailMetadataView *metadataView;

@end
