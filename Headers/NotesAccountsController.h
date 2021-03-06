/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ResumableViewController.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "MobileNotes-Structs.h"
#import "NotesSideControllerPopoverMethods.h"

@class NotesAccountsTableView, UILabel, UIView, UIBarButtonItem, NSMutableArray;

__attribute__((visibility("hidden")))
@interface NotesAccountsController : ResumableViewController <UITableViewDataSource, UITableViewDelegate, NotesSideControllerPopoverMethods> {
	UILabel* _titleView;
	UIView* _backgroundView;
	NotesAccountsTableView* _table;
	NSMutableArray* _storeHierarchy;
	UIBarButtonItem* _addButton;
	BOOL _useUnifiedView;
}
-(void).cxx_destruct;
-(void)removeFromPopover;
-(void)willShowInPopover;
-(void)notesChangedExternally;
-(void)addButtonClicked;
-(id)tableView:(id)view viewForHeaderInSection:(int)section;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didEndEditingRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view willBeginEditingRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(id)tableView:(id)view titleForHeaderInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(id)cellNameAtTableIndex:(int)tableIndex;
-(id)storeAtTableIndex:(int)tableIndex;
-(float)heightForSectionHeaderWithText:(id)text;
-(float)widthForSectionHeaderInTableView:(id)tableView;
-(id)fontForSectionHeader;
-(void)dealloc;
-(void)didReceiveMemoryWarning;
-(void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidUnload;
-(void)loadView;
-(void)getHierarchy;
-(id)displayNameForAccount:(id)account;
-(id)displayNameForStore:(id)store;
-(id)initWithArchivedConfiguration:(id)archivedConfiguration;
@end

