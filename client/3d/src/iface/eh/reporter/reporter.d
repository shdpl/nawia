module eh.reporter.reporter;

import eh.report;

interface IReporter {
	@property string recipient();
	@property void recipient(string);
	bool send(Report report);
}