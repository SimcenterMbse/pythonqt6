TEMPLATE = subdirs

PYTHONQT_TARGETS = $$(PYTHONQT_TARGETS)
!isEmpty( PYTHONQT_TARGETS ) {
  for (name, $$list($$PYTHONQT_TARGETS)) {
    SUBDIRS += $$name
  }
} else {
  message("PYTHONQT_TARGETS not provided, using default configuration")
  SUBDIRS = generator src extensions tests examples
}

PYTHONQT_QNAMESPACE = $$(PYTHONQT_QNAMESPACE)
!isEmpty( PYTHONQT_QNAMESPACE ) {
  DEFINES += "QT_NAMESPACE=$(PYTHONQT_QNAMESPACE)"
} else {
  message("PYTHONQT_QNAMESPACE not provided, assuming Qt does not require a custom namespace")
}

tests.depends += src extensions
extensions.depends += src
examples.depends += src extensions