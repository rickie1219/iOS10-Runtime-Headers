/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNContactSuggestionViewController : UITableViewController {
    CNPropertySuggestionAction * _action;
    UILabel * _contentLabel;
    UILabel * _dateLabel;
    UILabel * _fromLabel;
    SGOrigin * _origin;
    CNPropertyCell * _propertyCell;
    UILabel * _subjectLabel;
}

@property (nonatomic, retain) CNPropertySuggestionAction *action;
@property (nonatomic, retain) UILabel *contentLabel;
@property (nonatomic, retain) UILabel *dateLabel;
@property (nonatomic, retain) UILabel *fromLabel;
@property (nonatomic, retain) SGOrigin *origin;
@property (nonatomic, retain) CNPropertyCell *propertyCell;
@property (nonatomic, retain) UILabel *subjectLabel;

+ (id)viewControllerWithOrigin:(id)arg1;

- (void).cxx_destruct;
- (id)action;
- (void)addToContact:(id)arg1;
- (id)contentLabel;
- (id)dateLabel;
- (id)fromLabel;
- (void)ignore:(id)arg1;
- (id)origin;
- (id)propertyCell;
- (void)setAction:(id)arg1;
- (void)setContentLabel:(id)arg1;
- (void)setDateLabel:(id)arg1;
- (void)setFromLabel:(id)arg1;
- (void)setOrigin:(id)arg1;
- (void)setPropertyCell:(id)arg1;
- (void)setSubjectLabel:(id)arg1;
- (void)showSource:(id)arg1;
- (id)subjectLabel;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)updatePreview;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;

@end