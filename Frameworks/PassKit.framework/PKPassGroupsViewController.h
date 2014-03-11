/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class <PKPassGroupsViewControllerDelegate>, NSMutableArray, NSTimer, PKGroupsController, PKPassGroupStackView, PKUsageNotificationServer;

@interface PKPassGroupsViewController : UIViewController <PKGroupsControllerDelegate, PKPassGroupStackViewDatasource, PKPassGroupStackViewDelegate, UIScrollViewDelegate, PKCodeAcquisitionDelegate> {
    NSTimer *_allowDimmingTimer;
    BOOL _backgroundMode;
    NSMutableArray *_blocksQueuedForUpdateCompletion;
    PKPassGroupStackView *_cardStackView;
    <PKPassGroupsViewControllerDelegate> *_delegate;
    PKGroupsController *_groupsController;
    unsigned int _modalCardIndex;
    NSTimer *_passViewedNotificationTimer;
    BOOL _passesAreOutdated;
    int _presentationState;
    PKUsageNotificationServer *_usageServer;
    BOOL _viewAppeared;
    BOOL _viewAppearedBefore;
    unsigned long long tick;
    unsigned long long tock;
}

@property <PKPassGroupsViewControllerDelegate> * delegate;
@property(retain) PKPassGroupStackView * groupStackView;
@property BOOL passesAreOutdated;

+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;

- (void)_applyPresentationState;
- (void)_clearPassViewedNotificationTimer;
- (void)_handleApplicationWillEnterForeground:(id)arg1;
- (void)_handleApplicationdidEnterBackground:(id)arg1;
- (void)_passViewedNotificationTimerFired;
- (void)_presentWithUpdatedPasses:(id)arg1;
- (void)_startPassViewedNotificationTimer;
- (void)allowIdleTimer;
- (void)cardsChanged:(id)arg1;
- (void)codeAcquisitionController:(id)arg1 didAcquirePass:(id)arg2;
- (void)codeAcquisitionControllerDidCancel:(id)arg1;
- (void)dealloc;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (id)delegate;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (id)groupAtIndex:(unsigned int)arg1;
- (float)groupHeightAtIndex:(unsigned int)arg1;
- (void)groupStackView:(id)arg1 deleteConfirmedForPass:(id)arg2;
- (void)groupStackView:(id)arg1 didAnimateToState:(int)arg2;
- (void)groupStackView:(id)arg1 groupDidMoveFromIndex:(unsigned int)arg2 toIndex:(unsigned int)arg3;
- (id)groupStackView;
- (void)groupStackViewDidBeginReordering:(id)arg1;
- (void)groupStackViewDidEndReordering:(id)arg1;
- (void)groupsController:(id)arg1 didInsertGroup:(id)arg2 atIndex:(unsigned int)arg3;
- (void)groupsController:(id)arg1 didMoveGroup:(id)arg2 fromIndex:(unsigned int)arg3 toIndex:(unsigned int)arg4;
- (void)groupsController:(id)arg1 didRemoveGroup:(id)arg2 atIndex:(unsigned int)arg3;
- (unsigned int)indexOfGroup:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (unsigned int)numberOfGroups;
- (BOOL)passesAreOutdated;
- (BOOL)passesGrowWhenFlipped;
- (void)presentGroupTable;
- (void)presentGroupWithIndex:(unsigned int)arg1;
- (void)presentPassWithBulletinRecordID:(id)arg1;
- (void)presentPassWithUniqueID:(id)arg1;
- (void)reloadPasses;
- (void)reloadPassesWithCompletion:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGroupStackView:(id)arg1;
- (void)setPassesAreOutdated:(BOOL)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (int)suppressedContent;
- (void)updateLockscreenIdleTimer;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)wantsFullScreenLayout;

@end