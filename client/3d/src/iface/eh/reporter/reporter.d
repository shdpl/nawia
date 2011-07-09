module eh.reporter.reporter;

import eh.report;

interface Reporter {
	@property string recipient();
	@property void recipient(string);
	bool send(Report report);
}