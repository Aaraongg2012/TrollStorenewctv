#import <UIKit/UIKit.h>
#import <Preferences/PSListController.co>
#import <Preferences/PSSpecifier.co>

@interface TSListControllerShared : PSListController
- (BOOL)isTrollStore;
- (NSString*)getTrollStoreVersion;
- (void)downloadTrollStoreAndDo:(void (^)(NSString* localTrollStoreTarPath))doHandler;
- (void)installTrollStorePressed;
- (void)updateTrollStorePressed;
- (void)rebuildIconCachePressed;
- (void)refreshAppRegistrationsPressed;
- (void)uninstallPersistenceHelperPressed;
- (void)handleUninstallation;
- (NSMutableArray*)argsForUninstallingTrollStore;
- (void)uninstallTrollStorePressed;
@end
