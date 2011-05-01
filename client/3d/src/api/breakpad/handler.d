module api.breakpad.handler;

import api.breakpad.reporter.reporter;

import api.breakpad.filter.exception,
	api.breakpad.filter.report;

interface HandlerException {
	public:
	void init(Reporter reporter);
	void clear();
	
	void add(FilterException filter);
	void del(FilterException filter);
	
	void add(FilterReport filter);
	void del(FilterReport filter);

	void add(Reporter reporter);
	void del(Reporter reporter);
}