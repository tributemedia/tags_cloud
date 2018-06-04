# Tags Cloud
The feature provides blocks to display tags cloud and archives for blogs.

## Install & Configure
Download the module and unzip the contents. Place the resulting folder in the the sites/all/modules/[features].  

**Tags Cloud**

1. Go to Modules, enable Tags Cloud module.
2. Check to make sure the Tags Cloud block is placed in the appropriate region.

**Archives**

1. Go to Structure > Views and find the disabled view titled Archive.
2. Enable the view
3. Edit the view and go to the block display.
4. Add filter criteria Content: type and filter on Article.
5. Change pager to display all items.
6. Switch to Page display.
7. Add filter criteria Content: type and filter on Article.
8. Add Global: Text area to Header.
9. Paste the following code into the text area: <h2>%1</h2>
10. Save the view.
11. Go to Administer Blocks and find the Views: Archive block.
12. Configure the block and set the region to the appropriate region.
13. Set visibility to Only listed pages: blog*, tags*, and archive*
14. Save
15. Check to make sure everything is working.
