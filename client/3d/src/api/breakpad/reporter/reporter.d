module api.breakpad.reporter.reporter;

import api.breakpad.report;

interface Reporter {
	@property string recipient();
	@property void recipient(string);
	bool send(Report report);
}