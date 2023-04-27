#include <PythonQt.h>
#include <QObject>
#include <QVariant>
#include <qaudio.h>
#include <qaudiobuffer.h>
#include <qaudiodecoder.h>
#include <qaudioformat.h>
#include <qaudioinput.h>
#include <qaudiooutput.h>
#include <qbytearray.h>
#include <qcamera.h>
#include <qcoreevent.h>
#include <qgraphicsvideoitem.h>
#include <qiodevice.h>
#include <qlist.h>
#include <qmediarecorder.h>
#include <qmetaobject.h>
#include <qobject.h>
#include <qpoint.h>
#include <qsize.h>
#include <qstringlist.h>
#include <qurl.h>
#include <qvideoframe.h>
#include <qvideowidget.h>



class PythonQtWrapper_QAudio : public QObject
{
   Q_OBJECT

public:
   Q_ENUMS(Error State VolumeScale)

   enum Error
   {
      NoError = QAudio::NoError,
      OpenError = QAudio::OpenError,
      IOError = QAudio::IOError,
      UnderrunError = QAudio::UnderrunError,
      FatalError = QAudio::FatalError
   };

   enum State
   {
      ActiveState = QAudio::ActiveState,
      SuspendedState = QAudio::SuspendedState,
      StoppedState = QAudio::StoppedState,
      IdleState = QAudio::IdleState
   };

   enum VolumeScale
   {
      LinearVolumeScale = QAudio::LinearVolumeScale,
      CubicVolumeScale = QAudio::CubicVolumeScale,
      LogarithmicVolumeScale = QAudio::LogarithmicVolumeScale,
      DecibelVolumeScale = QAudio::DecibelVolumeScale
   };

   float static_QAudio_convertVolume(float volume, QAudio::VolumeScale from, QAudio::VolumeScale to);
};


class PythonQtWrapper_QAudioBuffer : public QObject
{ Q_OBJECT
public:
public slots:
QAudioBuffer* new_QAudioBuffer();
QAudioBuffer* new_QAudioBuffer(const QAudioBuffer&  other);
QAudioBuffer* new_QAudioBuffer(const QByteArray&  data, const QAudioFormat&  format, qint64  startTime = -1);
QAudioBuffer* new_QAudioBuffer(int  numFrames, const QAudioFormat&  format, qint64  startTime = -1);
void delete_QAudioBuffer(QAudioBuffer* obj) { delete obj; } 
   int  byteCount(QAudioBuffer* theWrappedObject) const;
   const void*  constData(QAudioBuffer* theWrappedObject) const;
   void*  data(QAudioBuffer* theWrappedObject);
   const void*  data(QAudioBuffer* theWrappedObject) const;
   qint64  duration(QAudioBuffer* theWrappedObject) const;
   QAudioFormat  format(QAudioBuffer* theWrappedObject) const;
   int  frameCount(QAudioBuffer* theWrappedObject) const;
   bool  isValid(QAudioBuffer* theWrappedObject) const;
   QAudioBuffer*  operator_assign(QAudioBuffer* theWrappedObject, const QAudioBuffer&  other);
   int  sampleCount(QAudioBuffer* theWrappedObject) const;
   qint64  startTime(QAudioBuffer* theWrappedObject) const;
    bool __nonzero__(QAudioBuffer* obj) { return obj->isValid(); }
};





class PythonQtShell_QAudioDecoder : public QAudioDecoder
{
public:
    PythonQtShell_QAudioDecoder(QObject*  parent = NULL):QAudioDecoder(parent),_wrapper(NULL) {};

   ~PythonQtShell_QAudioDecoder();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QAudioDecoder : public QObject
{ Q_OBJECT
public:
public slots:
QAudioDecoder* new_QAudioDecoder(QObject*  parent = NULL);
void delete_QAudioDecoder(QAudioDecoder* obj) { delete obj; } 
   QAudioFormat  audioFormat(QAudioDecoder* theWrappedObject) const;
   bool  bufferAvailable(QAudioDecoder* theWrappedObject) const;
   qint64  duration(QAudioDecoder* theWrappedObject) const;
   QAudioDecoder::Error  error(QAudioDecoder* theWrappedObject) const;
   QString  errorString(QAudioDecoder* theWrappedObject) const;
   qint64  position(QAudioDecoder* theWrappedObject) const;
   QAudioBuffer  read(QAudioDecoder* theWrappedObject) const;
   void setAudioFormat(QAudioDecoder* theWrappedObject, const QAudioFormat&  format);
   void setSourceDevice(QAudioDecoder* theWrappedObject, QIODevice*  device);
   QIODevice*  sourceDevice(QAudioDecoder* theWrappedObject) const;
};


class PythonQtWrapper_QAudioFormat : public QObject
{ Q_OBJECT
public:
public slots:
QAudioFormat* new_QAudioFormat();
QAudioFormat* new_QAudioFormat(const QAudioFormat&  other);
void delete_QAudioFormat(QAudioFormat* obj) { delete obj; } 
   int  bytesForDuration(QAudioFormat* theWrappedObject, qint64  duration) const;
   int  bytesForFrames(QAudioFormat* theWrappedObject, int  frameCount) const;
   int  bytesPerFrame(QAudioFormat* theWrappedObject) const;
   int  channelCount(QAudioFormat* theWrappedObject) const;
   qint64  durationForBytes(QAudioFormat* theWrappedObject, int  byteCount) const;
   qint64  durationForFrames(QAudioFormat* theWrappedObject, int  frameCount) const;
   int  framesForBytes(QAudioFormat* theWrappedObject, int  byteCount) const;
   int  framesForDuration(QAudioFormat* theWrappedObject, qint64  duration) const;
   bool  isValid(QAudioFormat* theWrappedObject) const;
   bool  __ne__(QAudioFormat* theWrappedObject, const QAudioFormat&  other) const;
   QAudioFormat*  operator_assign(QAudioFormat* theWrappedObject, const QAudioFormat&  other);
   bool  __eq__(QAudioFormat* theWrappedObject, const QAudioFormat&  other) const;
   int  sampleRate(QAudioFormat* theWrappedObject) const;
   void setChannelCount(QAudioFormat* theWrappedObject, int  channelCount);
   void setSampleRate(QAudioFormat* theWrappedObject, int  sampleRate);
    QString py_toString(QAudioFormat*);
    bool __nonzero__(QAudioFormat* obj) { return obj->isValid(); }
};





class PythonQtShell_QAudioInput : public QAudioInput
{
public:
   PythonQtShell_QAudioInput(QObject *pParent = nullptr) : QAudioInput(pParent), _wrapper(NULL) {}
   PythonQtShell_QAudioInput(const QAudioDevice &deviceInfo, QObject *parent = nullptr) : QAudioInput(deviceInfo, parent), _wrapper(NULL) {}

   ~PythonQtShell_QAudioInput();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QAudioInput : public QObject
{ Q_OBJECT
public:
public slots:
QAudioInput* new_QAudioInput(QObject *parent = nullptr);
QAudioInput* new_QAudioInput(const QAudioDevice &deviceInfo, QObject *parent = nullptr);
void delete_QAudioInput(QAudioInput* obj) { delete obj; }
   void setVolume(QAudioInput* theWrappedObject, qreal  volume);
   qreal  volume(QAudioInput* theWrappedObject) const;
};



class PythonQtShell_QAudioOutput : public QAudioOutput
{
public:
    PythonQtShell_QAudioOutput(QObject *parent = nullptr) : QAudioOutput(parent), _wrapper(NULL) {}
    PythonQtShell_QAudioOutput(const QAudioDevice &device, QObject *parent = nullptr)
      : QAudioOutput(device, parent), _wrapper(NULL) {}

   ~PythonQtShell_QAudioOutput();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QAudioOutput : public QObject
{ Q_OBJECT
public:
public slots:
    QAudioOutput* new_QAudioOutput(QObject *parent = nullptr);
    QAudioOutput* new_QAudioOutput(const QAudioDevice &device, QObject *parent = nullptr);
void delete_QAudioOutput(QAudioOutput* obj) { delete obj; } 
   void setVolume(QAudioOutput* theWrappedObject, qreal  arg__1);
   qreal  volume(QAudioOutput* theWrappedObject) const;
};



class PythonQtShell_QCamera : public QCamera
{
public:
    PythonQtShell_QCamera(QObject*  parent = NULL):QCamera(parent),_wrapper(NULL) {};
    PythonQtShell_QCamera(QCameraDevice::Position  position, QObject*  parent = NULL):QCamera(position, parent),_wrapper(NULL) {};
    PythonQtShell_QCamera(const QCameraDevice&  cameraDevice, QObject*  parent = NULL):QCamera(cameraDevice, parent),_wrapper(NULL) {};

   ~PythonQtShell_QCamera();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual bool  isAvailable() const;
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};


class PythonQtWrapper_QCamera : public QObject
{ Q_OBJECT
public:
public slots:
QCamera* new_QCamera(QCameraDevice::Position  position, QObject*  parent = NULL);
QCamera* new_QCamera(QObject*  parent = NULL);
QCamera* new_QCamera(const QCameraDevice&  cameraDevice, QObject*  parent = NULL);
void delete_QCamera(QCamera* obj) { delete obj; } 
   QCamera::Error  error(QCamera* theWrappedObject) const;
   QString  errorString(QCamera* theWrappedObject) const;
};

