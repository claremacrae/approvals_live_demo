# 5 QtWidgets

## Table

* This uses early version of ApprovalTests for Qt
* Run the table demo
    * Review the output
    * Mainly test behaviour of GUI code, not appearance
    * Review the implementation of verifyQTableView
        * Custom writer class
    * Once I've got code covered, would separate calculation code from drawing code

## Images

* Run the Images test
    * Note how Araxis Merge says the approved image is corrupt
* Run again with BeyondCompare
    * Note how the "approved" image is 1 byte
* Number of output files 
    * Note how all each output file overwrites previous one
    * Would be nice to include the colour in the filename
* Add a SECTION() to get separate output files
* Run again
    * Review the names of output files
* It's not convenient to approve image outputs
    * Could auto-approve
    * Or let the Diff tool do it
