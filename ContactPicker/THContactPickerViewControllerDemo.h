//
//  THContactPickerViewControllerDemo.h
//  ContactPicker
//
//  Created by Vladislav Kovtash on 12.11.13.
//  Copyright (c) 2013 Tristan Himmelman. All rights reserved.
//

#import "THContactPickerView.h"

@interface THContactPickerViewControllerDemo : UIViewController <UITableViewDataSource, UITableViewDelegate>

@property (nonatomic, readonly) THContactPickerView *contactPickerView;
@property (nonatomic, strong) UITableView *tableView;
@property (nonatomic, strong) NSArray *contacts;
@property (nonatomic, readonly) NSArray *selectedContacts;
@property (nonatomic) NSInteger selectedCount;
@property (nonatomic, readonly) NSArray *filteredContacts;
@property (strong, nonatomic) NSString *placeholderString;

- (void)clearSelectedContacts:(id)sender;
- (NSPredicate *)newFilteringPredicateWithText:(NSString *) text;
- (void) didChangeSelectedItems;
- (NSString *) titleForRowAtIndexPath:(NSIndexPath *)indexPath;

@end
