#include <PythonQt.h>
#include <PythonQtConversion.h>
#include "com_trolltech_qt_multimedia0.h"
#include "com_trolltech_qt_multimedia1.h"
#include "com_trolltech_qt_multimedia2.h"
#include "com_trolltech_qt_multimedia3.h"



void PythonQt_init_QtMultimedia(PyObject* module)
{
PythonQt::priv()->registerCPPClass("QAudio", "", "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QAudio>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QAudioBuffer", "", "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QAudioBuffer>, NULL, module, PythonQt::Type_NonZero);
PythonQt::priv()->registerClass(&QAudioDecoder::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QAudioDecoder>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAudioDecoder>, module, 0);
PythonQt::priv()->registerCPPClass("QAudioFormat", "", "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QAudioFormat>, NULL, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerClass(&QAudioInput::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QAudioInput>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAudioInput>, module, 0);
PythonQt::priv()->registerClass(&QAudioOutput::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QAudioOutput>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAudioOutput>, module, 0);
PythonQt::priv()->registerClass(&QCamera::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QCamera>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QCamera>, module, 0);
PythonQt::priv()->registerClass(&QGraphicsVideoItem::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QGraphicsVideoItem>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QGraphicsVideoItem>, module, 0);
PythonQt::priv()->registerClass(&QMediaPlayer::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QMediaPlayer>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QMediaPlayer>, module, 0);
PythonQt::priv()->registerClass(&QMediaRecorder::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QMediaRecorder>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QMediaRecorder>, module, 0);
PythonQt::priv()->registerCPPClass("QMediaTimeRange", "", "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QMediaTimeRange>, NULL, module, PythonQt::Type_Add|PythonQt::Type_InplaceAdd|PythonQt::Type_InplaceSubtract|PythonQt::Type_NonZero|PythonQt::Type_RichCompare|PythonQt::Type_Subtract);
PythonQt::priv()->registerClass(&QSoundEffect::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QSoundEffect>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSoundEffect>, module, 0);
PythonQt::priv()->registerCPPClass("QVideoFrame", "", "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QVideoFrame>, NULL, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerClass(&QVideoWidget::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QVideoWidget>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QVideoWidget>, module, 0);
PythonQt::priv()->registerClass(&QMediaCaptureSession::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QMediaCaptureSession>, nullptr, module, 0);
PythonQt::priv()->registerCPPClass("QMediaFormat", "", "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QMediaFormat>, nullptr, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerClass(&QImageCapture::staticMetaObject, "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QImageCapture>, nullptr, module, 0);
PythonQt::priv()->registerCPPClass("", "", "QtMultimedia", PythonQtCreateObject<PythonQtWrapper_QMediaMetaData>, nullptr, module, 0);

PythonQtMethodInfo::addParameterTypeAlias("QList<QMediaFormat::AudioCodec>", "QList<int>");
PythonQtMethodInfo::addParameterTypeAlias("QList<QMediaFormat::FileFormat>", "QList<int>");
PythonQtMethodInfo::addParameterTypeAlias("QList<QMediaFormat::VideoCodec>", "QList<int>");
PythonQtMethodInfo::addParameterTypeAlias("QList<QVideoFrameFormat::PixelFormat>", "QList<int>");
PythonQtRegisterListTemplateConverterForKnownClass(QList, QString);
}
