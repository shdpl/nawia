module qt.gui.QWizard_aux;

extern(C) void static_init_QWizard();
shared static this() { static_init_QWizard; }

