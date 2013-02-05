/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ABPeoplePickerNavigationController, NSMutableArray;

@interface ABPeoplePickerNavigationControllerPromptHandler : NSObject {
    ABPeoplePickerNavigationController *_ppnc;
    NSMutableArray *_prompts;
}

- (BOOL)_shouldShowPromptForOrientation:(int)arg1;
- (void)dealloc;
- (unsigned int)indexForViewControllerType:(int)arg1;
- (id)initWithNavigationController:(id)arg1;
- (id)promptForViewControllerType:(int)arg1 orientation:(int)arg2;
- (void)setPrompt:(id)arg1 forViewControllerType:(int)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;

@end