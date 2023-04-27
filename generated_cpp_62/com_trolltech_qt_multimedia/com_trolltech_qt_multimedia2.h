#include <PythonQt.h>
#include <QObject>
#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qimage.h>
#include <qiodevice.h>
#include <qlist.h>
#include <qmediatimerange.h>
#include <qmetaobject.h>
#include <qnetworkrequest.h>
#include <qobject.h>
#include <qpair.h>
#include <qsize.h>
#include <qsoundeffect.h>
#include <qstringlist.h>
#include <qurl.h>
#include <qvideoframe.h>
#include <qmediarecorder.h>



class PythonQtShell_QMediaRecorder : public QMediaRecorder
{
public:
    PythonQtShell_QMediaRecorder(QObject*  parent = NULL):QMediaRecorder(parent),_wrapper(NULL) {};

   ~PythonQtShell_QMediaRecorder();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QMediaRecorder : public QObject
{ Q_OBJECT
public:
public slots:
QMediaRecorder* new_QMediaRecorder(QObject*  parent = NULL);
void delete_QMediaRecorder(QMediaRecorder* obj) { delete obj; } 
   QUrl  actualLocation(QMediaRecorder* theWrappedObject) const;
   qint64  duration(QMediaRecorder* theWrappedObject) const;
   QMediaRecorder::Error  error(QMediaRecorder* theWrappedObject) const;
   QString  errorString(QMediaRecorder* theWrappedObject) const;
   bool  isAvailable(QMediaRecorder* theWrappedObject) const;
   QMediaMetaData  metaData(QMediaRecorder* theWrappedObject) const;
   QUrl  outputLocation(QMediaRecorder* theWrappedObject) const;
   void setMetaData(QMediaRecorder* theWrappedObject, const QMediaMetaData &pData);
   void  setOutputLocation(QMediaRecorder* theWrappedObject, const QUrl&  location);
};



class PythonQtWrapper_QMediaTimeRange : public QObject
{ Q_OBJECT
public:
public slots:
QMediaTimeRange* new_QMediaTimeRange();
QMediaTimeRange* new_QMediaTimeRange(const QMediaTimeRange::Interval&  arg__1);
QMediaTimeRange* new_QMediaTimeRange(const QMediaTimeRange&  range);
QMediaTimeRange* new_QMediaTimeRange(qint64  start, qint64  end);
void delete_QMediaTimeRange(QMediaTimeRange* obj) { delete obj; } 
   void addInterval(QMediaTimeRange* theWrappedObject, const QMediaTimeRange::Interval&  interval);
   void addInterval(QMediaTimeRange* theWrappedObject, qint64  start, qint64  end);
   void addTimeRange(QMediaTimeRange* theWrappedObject, const QMediaTimeRange&  arg__1);
   void clear(QMediaTimeRange* theWrappedObject);
   bool  contains(QMediaTimeRange* theWrappedObject, qint64  time) const;
   qint64  earliestTime(QMediaTimeRange* theWrappedObject) const;
   QList<QMediaTimeRange::Interval >  intervals(QMediaTimeRange* theWrappedObject) const;
   bool  isContinuous(QMediaTimeRange* theWrappedObject) const;
   bool  isEmpty(QMediaTimeRange* theWrappedObject) const;
   qint64  latestTime(QMediaTimeRange* theWrappedObject) const;
   QMediaTimeRange  __add__(QMediaTimeRange* theWrappedObject, const QMediaTimeRange&  arg__2);
   QMediaTimeRange*  __iadd__(QMediaTimeRange* theWrappedObject, const QMediaTimeRange::Interval&  arg__1);
   QMediaTimeRange*  __iadd__(QMediaTimeRange* theWrappedObject, const QMediaTimeRange&  arg__1);
   QMediaTimeRange  __sub__(QMediaTimeRange* theWrappedObject, const QMediaTimeRange&  arg__2);
   QMediaTimeRange*  __isub__(QMediaTimeRange* theWrappedObject, const QMediaTimeRange::Interval&  arg__1);
   QMediaTimeRange*  __isub__(QMediaTimeRange* theWrappedObject, const QMediaTimeRange&  arg__1);
   QMediaTimeRange*  operator_assign(QMediaTimeRange* theWrappedObject, const QMediaTimeRange::Interval&  arg__1);
   QMediaTimeRange*  operator_assign(QMediaTimeRange* theWrappedObject, const QMediaTimeRange&  arg__1);
   bool  __eq__(QMediaTimeRange* theWrappedObject, const QMediaTimeRange&  arg__2);
   void removeInterval(QMediaTimeRange* theWrappedObject, const QMediaTimeRange::Interval&  interval);
   void removeInterval(QMediaTimeRange* theWrappedObject, qint64  start, qint64  end);
   void removeTimeRange(QMediaTimeRange* theWrappedObject, const QMediaTimeRange&  arg__1);
    QString py_toString(QMediaTimeRange*);
    bool __nonzero__(QMediaTimeRange* obj) { return !obj->isEmpty(); }
};




class PythonQtShell_QSoundEffect : public QSoundEffect
{
public:
    PythonQtShell_QSoundEffect(QObject*  parent = NULL):QSoundEffect(parent),_wrapper(NULL) {};

   ~PythonQtShell_QSoundEffect();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QSoundEffect : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Loop Status )
enum Loop{
  Infinite = QSoundEffect::Infinite};
enum Status{
  Null = QSoundEffect::Null,   Loading = QSoundEffect::Loading,   Ready = QSoundEffect::Ready,   Error = QSoundEffect::Error};
public slots:
QSoundEffect* new_QSoundEffect(QObject*  parent = NULL);
void delete_QSoundEffect(QSoundEffect* obj) { delete obj; }
   bool  isLoaded(QSoundEffect* theWrappedObject) const;
   bool  isMuted(QSoundEffect* theWrappedObject) const;
   bool  isPlaying(QSoundEffect* theWrappedObject) const;
   int  loopCount(QSoundEffect* theWrappedObject) const;
   int  loopsRemaining(QSoundEffect* theWrappedObject) const;
   void setLoopCount(QSoundEffect* theWrappedObject, int  loopCount);
   void setMuted(QSoundEffect* theWrappedObject, bool  muted);
   void setSource(QSoundEffect* theWrappedObject, const QUrl&  url);
   void setVolume(QSoundEffect* theWrappedObject, qreal  volume);
   QUrl  source(QSoundEffect* theWrappedObject) const;
   QSoundEffect::Status  status(QSoundEffect* theWrappedObject) const;
   QStringList  static_QSoundEffect_supportedMimeTypes();
   qreal  volume(QSoundEffect* theWrappedObject) const;
};




class PythonQtWrapper_QVideoFrame : public QObject
{ Q_OBJECT
public slots:
QVideoFrame* new_QVideoFrame();
QVideoFrame* new_QVideoFrame(const QVideoFrameFormat&  image);
QVideoFrame* new_QVideoFrame(const QVideoFrame&  other);
void delete_QVideoFrame(QVideoFrame* obj) { delete obj; }
   uchar*  bits(QVideoFrame* theWrappedObject, int  plane);
   const uchar*  bits(QVideoFrame* theWrappedObject, int  plane) const;
   int  bytesPerLine(QVideoFrame* theWrappedObject, int  plane) const;
   qint64  endTime(QVideoFrame* theWrappedObject) const;
   QVideoFrame::HandleType  handleType(QVideoFrame* theWrappedObject) const;
   int  height(QVideoFrame* theWrappedObject) const;
   bool  isMapped(QVideoFrame* theWrappedObject) const;
   bool  isReadable(QVideoFrame* theWrappedObject) const;
   bool  isValid(QVideoFrame* theWrappedObject) const;
   bool  isWritable(QVideoFrame* theWrappedObject) const;
   QVideoFrame::MapMode  mapMode(QVideoFrame* theWrappedObject) const;
   int  mappedBytes(QVideoFrame* theWrappedObject, int plane) const;
   bool  __ne__(QVideoFrame* theWrappedObject, const QVideoFrame&  other) const;
   QVideoFrame*  operator_assign(QVideoFrame* theWrappedObject, const QVideoFrame&  other);
   bool  __eq__(QVideoFrame* theWrappedObject, const QVideoFrame&  other) const;
   QVideoFrameFormat::PixelFormat  pixelFormat(QVideoFrame* theWrappedObject) const;
   int  planeCount(QVideoFrame* theWrappedObject) const;
   void setEndTime(QVideoFrame* theWrappedObject, qint64  time);
   void setStartTime(QVideoFrame* theWrappedObject, qint64  time);
   QSize  size(QVideoFrame* theWrappedObject) const;
   qint64  startTime(QVideoFrame* theWrappedObject) const;
   void unmap(QVideoFrame* theWrappedObject);
   int  width(QVideoFrame* theWrappedObject) const;
    QString py_toString(QVideoFrame*);
    bool __nonzero__(QVideoFrame* obj) { return obj->isValid(); }
};
