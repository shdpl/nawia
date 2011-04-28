module api.breakpad.reporter;

interface Reporter {
	string recipient;
	bool send(Report report);
}