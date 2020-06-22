# LogFiles

## Steps

### First pass

* Get a filename
* Create a stream to send the output to
* Do stuff, write to the file
* Close the file
* Approvals::verifyExistingFile()
* But test keeps failing!

### Second pass

* `const auto dateRegex = R"([A-Za-z]{3} [A-Za-z]{3} [\d ]\d \d\d:\d\d:\d\d \d\d\d\d)";`
* `Scrubbers::createRegexScrubber()`
    * could create a `date_regex` live template in CLion
* `[date_and_time]`

## Key Points

* Approvals::verifyExistingFile() if you have written the file out already, and want to approve it
* If you have non-deterministic output, consider Scrubbers to make the output stable
