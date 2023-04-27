#include "com_trolltech_qt_multimedia2.h"
#include <PythonQtConversion.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtSignalReceiver.h>
#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qimage.h>
#include <qiodevice.h>
#include <qlist.h>
#include <qmediarecorder.h>
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



PythonQtShell_QMediaRecorder::~PythonQtShell_QMediaRecorder() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QMediaRecorder::childEvent(QChildEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("childEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QChildEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QMediaRecorder::childEvent(event0);
}
void PythonQtShell_QMediaRecorder::customEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("customEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QMediaRecorder::customEvent(event0);
}
bool  PythonQtShell_QMediaRecorder::event(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("event");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
      void* args[2] = {NULL, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QMediaRecorder::event(event0);
}
bool  PythonQtShell_QMediaRecorder::eventFilter(QObject*  watched0, QEvent*  event1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("eventFilter");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue = 0;
      void* args[3] = {NULL, (void*)&watched0, (void*)&event1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QMediaRecorder::eventFilter(watched0, event1);
}
void PythonQtShell_QMediaRecorder::timerEvent(QTimerEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("timerEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QTimerEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QMediaRecorder::timerEvent(event0);
}
QMediaRecorder* PythonQtWrapper_QMediaRecorder::new_QMediaRecorder( QObject*  parent)
{ 
return new PythonQtShell_QMediaRecorder(parent); }

const QMetaObject* PythonQtShell_QMediaRecorder::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QMediaRecorder::staticMetaObject);
  } else {
    return &QMediaRecorder::staticMetaObject;
  }
}
int PythonQtShell_QMediaRecorder::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QMediaRecorder::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QUrl  PythonQtWrapper_QMediaRecorder::actualLocation(QMediaRecorder* theWrappedObject) const
{
  return ( theWrappedObject->actualLocation());
}

qint64  PythonQtWrapper_QMediaRecorder::duration(QMediaRecorder* theWrappedObject) const
{
  return ( theWrappedObject->duration());
}

QMediaRecorder::Error  PythonQtWrapper_QMediaRecorder::error(QMediaRecorder* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

QString  PythonQtWrapper_QMediaRecorder::errorString(QMediaRecorder* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}

bool  PythonQtWrapper_QMediaRecorder::isAvailable(QMediaRecorder* theWrappedObject) const
{
  return ( theWrappedObject->isAvailable());
}

QMediaMetaData  PythonQtWrapper_QMediaRecorder::metaData(QMediaRecorder* theWrappedObject) const
{
  return ( theWrappedObject->metaData());
}

QUrl  PythonQtWrapper_QMediaRecorder::outputLocation(QMediaRecorder* theWrappedObject) const
{
  return ( theWrappedObject->outputLocation());
}

void PythonQtWrapper_QMediaRecorder::setMetaData(QMediaRecorder* theWrappedObject, const QMediaMetaData &pData)
{
  ( theWrappedObject->setMetaData(pData));
}

void  PythonQtWrapper_QMediaRecorder::setOutputLocation(QMediaRecorder* theWrappedObject, const QUrl&  location)
{
  ( theWrappedObject->setOutputLocation(location));
}



QMediaTimeRange* PythonQtWrapper_QMediaTimeRange::new_QMediaTimeRange()
{ 
return new QMediaTimeRange(); }

QMediaTimeRange* PythonQtWrapper_QMediaTimeRange::new_QMediaTimeRange(const QMediaTimeRange::Interval&  arg__1)
{ 
return new QMediaTimeRange(arg__1); }

QMediaTimeRange* PythonQtWrapper_QMediaTimeRange::new_QMediaTimeRange(const QMediaTimeRange&  range)
{ 
return new QMediaTimeRange(range); }

QMediaTimeRange* PythonQtWrapper_QMediaTimeRange::new_QMediaTimeRange(qint64  start, qint64  end)
{ 
return new QMediaTimeRange(start, end); }

void PythonQtWrapper_QMediaTimeRange::addInterval(QMediaTimeRange* theWrappedObject, const QMediaTimeRange::Interval&  interval)
{
  ( theWrappedObject->addInterval(interval));
}

void PythonQtWrapper_QMediaTimeRange::addInterval(QMediaTimeRange* theWrappedObject, qint64  start, qint64  end)
{
  ( theWrappedObject->addInterval(start, end));
}

void PythonQtWrapper_QMediaTimeRange::addTimeRange(QMediaTimeRange* theWrappedObject, const QMediaTimeRange&  arg__1)
{
  ( theWrappedObject->addTimeRange(arg__1));
}

void PythonQtWrapper_QMediaTimeRange::clear(QMediaTimeRange* theWrappedObject)
{
  ( theWrappedObject->clear());
}

bool  PythonQtWrapper_QMediaTimeRange::contains(QMediaTimeRange* theWrappedObject, qint64  time) const
{
  return ( theWrappedObject->contains(time));
}

qint64  PythonQtWrapper_QMediaTimeRange::earliestTime(QMediaTimeRange* theWrappedObject) const
{
  return ( theWrappedObject->earliestTime());
}

QList<QMediaTimeRange::Interval >  PythonQtWrapper_QMediaTimeRange::intervals(QMediaTimeRange* theWrappedObject) const
{
  return ( theWrappedObject->intervals());
}

bool  PythonQtWrapper_QMediaTimeRange::isContinuous(QMediaTimeRange* theWrappedObject) const
{
  return ( theWrappedObject->isContinuous());
}

bool  PythonQtWrapper_QMediaTimeRange::isEmpty(QMediaTimeRange* theWrappedObject) const
{
  return ( theWrappedObject->isEmpty());
}

qint64  PythonQtWrapper_QMediaTimeRange::latestTime(QMediaTimeRange* theWrappedObject) const
{
  return ( theWrappedObject->latestTime());
}

QMediaTimeRange  PythonQtWrapper_QMediaTimeRange::__add__(QMediaTimeRange* theWrappedObject, const QMediaTimeRange&  arg__2)
{
  return ( (*theWrappedObject)+ arg__2);
}

QMediaTimeRange*  PythonQtWrapper_QMediaTimeRange::__iadd__(QMediaTimeRange* theWrappedObject, const QMediaTimeRange::Interval&  arg__1)
{
  return &( (*theWrappedObject)+= arg__1);
}

QMediaTimeRange*  PythonQtWrapper_QMediaTimeRange::__iadd__(QMediaTimeRange* theWrappedObject, const QMediaTimeRange&  arg__1)
{
  return &( (*theWrappedObject)+= arg__1);
}

QMediaTimeRange  PythonQtWrapper_QMediaTimeRange::__sub__(QMediaTimeRange* theWrappedObject, const QMediaTimeRange&  arg__2)
{
  return ( (*theWrappedObject)- arg__2);
}

QMediaTimeRange*  PythonQtWrapper_QMediaTimeRange::__isub__(QMediaTimeRange* theWrappedObject, const QMediaTimeRange::Interval&  arg__1)
{
  return &( (*theWrappedObject)-= arg__1);
}

QMediaTimeRange*  PythonQtWrapper_QMediaTimeRange::__isub__(QMediaTimeRange* theWrappedObject, const QMediaTimeRange&  arg__1)
{
  return &( (*theWrappedObject)-= arg__1);
}

QMediaTimeRange*  PythonQtWrapper_QMediaTimeRange::operator_assign(QMediaTimeRange* theWrappedObject, const QMediaTimeRange::Interval&  arg__1)
{
  return &( (*theWrappedObject)= arg__1);
}

QMediaTimeRange*  PythonQtWrapper_QMediaTimeRange::operator_assign(QMediaTimeRange* theWrappedObject, const QMediaTimeRange&  arg__1)
{
  return &( (*theWrappedObject)= arg__1);
}

bool  PythonQtWrapper_QMediaTimeRange::__eq__(QMediaTimeRange* theWrappedObject, const QMediaTimeRange&  arg__2)
{
  return ( (*theWrappedObject)== arg__2);
}

void PythonQtWrapper_QMediaTimeRange::removeInterval(QMediaTimeRange* theWrappedObject, const QMediaTimeRange::Interval&  interval)
{
  ( theWrappedObject->removeInterval(interval));
}

void PythonQtWrapper_QMediaTimeRange::removeInterval(QMediaTimeRange* theWrappedObject, qint64  start, qint64  end)
{
  ( theWrappedObject->removeInterval(start, end));
}

void PythonQtWrapper_QMediaTimeRange::removeTimeRange(QMediaTimeRange* theWrappedObject, const QMediaTimeRange&  arg__1)
{
  ( theWrappedObject->removeTimeRange(arg__1));
}

QString PythonQtWrapper_QMediaTimeRange::py_toString(QMediaTimeRange* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}


PythonQtShell_QSoundEffect::~PythonQtShell_QSoundEffect() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QSoundEffect::childEvent(QChildEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("childEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QChildEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QSoundEffect::childEvent(event0);
}
void PythonQtShell_QSoundEffect::customEvent(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("customEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QSoundEffect::customEvent(event0);
}
bool  PythonQtShell_QSoundEffect::event(QEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("event");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
      void* args[2] = {NULL, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QSoundEffect::event(event0);
}
bool  PythonQtShell_QSoundEffect::eventFilter(QObject*  watched0, QEvent*  event1)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("eventFilter");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue = 0;
      void* args[3] = {NULL, (void*)&watched0, (void*)&event1};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
          } else {
            returnValue = *((bool*)args[0]);
          }
        }
      }
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return returnValue;
    } else {
      PyErr_Clear();
    }
  }
}
  return QSoundEffect::eventFilter(watched0, event1);
}
void PythonQtShell_QSoundEffect::timerEvent(QTimerEvent*  event0)
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("timerEvent");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"" , "QTimerEvent*"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      void* args[2] = {NULL, (void*)&event0};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) { Py_DECREF(result); } 
      Py_DECREF(obj);
      return;
    } else {
      PyErr_Clear();
    }
  }
}
  QSoundEffect::timerEvent(event0);
}
QSoundEffect* PythonQtWrapper_QSoundEffect::new_QSoundEffect(QObject*  parent)
{ 
return new PythonQtShell_QSoundEffect(parent); }

const QMetaObject* PythonQtShell_QSoundEffect::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QSoundEffect::staticMetaObject);
  } else {
    return &QSoundEffect::staticMetaObject;
  }
}
int PythonQtShell_QSoundEffect::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QSoundEffect::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
bool  PythonQtWrapper_QSoundEffect::isLoaded(QSoundEffect* theWrappedObject) const
{
  return ( theWrappedObject->isLoaded());
}

bool  PythonQtWrapper_QSoundEffect::isMuted(QSoundEffect* theWrappedObject) const
{
  return ( theWrappedObject->isMuted());
}

bool  PythonQtWrapper_QSoundEffect::isPlaying(QSoundEffect* theWrappedObject) const
{
  return ( theWrappedObject->isPlaying());
}

int  PythonQtWrapper_QSoundEffect::loopCount(QSoundEffect* theWrappedObject) const
{
  return ( theWrappedObject->loopCount());
}

int  PythonQtWrapper_QSoundEffect::loopsRemaining(QSoundEffect* theWrappedObject) const
{
  return ( theWrappedObject->loopsRemaining());
}

void PythonQtWrapper_QSoundEffect::setLoopCount(QSoundEffect* theWrappedObject, int  loopCount)
{
  ( theWrappedObject->setLoopCount(loopCount));
}

void PythonQtWrapper_QSoundEffect::setMuted(QSoundEffect* theWrappedObject, bool  muted)
{
  ( theWrappedObject->setMuted(muted));
}

void PythonQtWrapper_QSoundEffect::setSource(QSoundEffect* theWrappedObject, const QUrl&  url)
{
  ( theWrappedObject->setSource(url));
}

void PythonQtWrapper_QSoundEffect::setVolume(QSoundEffect* theWrappedObject, qreal  volume)
{
  ( theWrappedObject->setVolume(volume));
}

QUrl  PythonQtWrapper_QSoundEffect::source(QSoundEffect* theWrappedObject) const
{
  return ( theWrappedObject->source());
}

QSoundEffect::Status  PythonQtWrapper_QSoundEffect::status(QSoundEffect* theWrappedObject) const
{
  return ( theWrappedObject->status());
}

QStringList  PythonQtWrapper_QSoundEffect::static_QSoundEffect_supportedMimeTypes()
{
  return (QSoundEffect::supportedMimeTypes());
}

qreal  PythonQtWrapper_QSoundEffect::volume(QSoundEffect* theWrappedObject) const
{
  return ( theWrappedObject->volume());
}




QVideoFrame* PythonQtWrapper_QVideoFrame::new_QVideoFrame()
{ 
return new QVideoFrame(); }

QVideoFrame* PythonQtWrapper_QVideoFrame::new_QVideoFrame(const QVideoFrameFormat&  image)
{ 
return new QVideoFrame(image); }

QVideoFrame* PythonQtWrapper_QVideoFrame::new_QVideoFrame(const QVideoFrame&  other)
{ 
return new QVideoFrame(other); }

uchar*  PythonQtWrapper_QVideoFrame::bits(QVideoFrame* theWrappedObject, int  plane)
{
  return ( theWrappedObject->bits(plane));
}

const uchar*  PythonQtWrapper_QVideoFrame::bits(QVideoFrame* theWrappedObject, int  plane) const
{
  return ( theWrappedObject->bits(plane));
}

int  PythonQtWrapper_QVideoFrame::bytesPerLine(QVideoFrame* theWrappedObject, int  plane) const
{
  return ( theWrappedObject->bytesPerLine(plane));
}

qint64  PythonQtWrapper_QVideoFrame::endTime(QVideoFrame* theWrappedObject) const
{
  return ( theWrappedObject->endTime());
}

QVideoFrame::HandleType  PythonQtWrapper_QVideoFrame::handleType(QVideoFrame* theWrappedObject) const
{
  return ( theWrappedObject->handleType());
}

int  PythonQtWrapper_QVideoFrame::height(QVideoFrame* theWrappedObject) const
{
  return ( theWrappedObject->height());
}

bool  PythonQtWrapper_QVideoFrame::isMapped(QVideoFrame* theWrappedObject) const
{
  return ( theWrappedObject->isMapped());
}

bool  PythonQtWrapper_QVideoFrame::isReadable(QVideoFrame* theWrappedObject) const
{
  return ( theWrappedObject->isReadable());
}

bool  PythonQtWrapper_QVideoFrame::isValid(QVideoFrame* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

bool  PythonQtWrapper_QVideoFrame::isWritable(QVideoFrame* theWrappedObject) const
{
  return ( theWrappedObject->isWritable());
}

QVideoFrame::MapMode  PythonQtWrapper_QVideoFrame::mapMode(QVideoFrame* theWrappedObject) const
{
  return ( theWrappedObject->mapMode());
}

int  PythonQtWrapper_QVideoFrame::mappedBytes(QVideoFrame* theWrappedObject, int plane) const
{
  return ( theWrappedObject->mappedBytes(plane));
}

bool  PythonQtWrapper_QVideoFrame::__ne__(QVideoFrame* theWrappedObject, const QVideoFrame&  other) const
{
  return ( (*theWrappedObject)!= other);
}

QVideoFrame*  PythonQtWrapper_QVideoFrame::operator_assign(QVideoFrame* theWrappedObject, const QVideoFrame&  other)
{
  return &( (*theWrappedObject)= other);
}

bool  PythonQtWrapper_QVideoFrame::__eq__(QVideoFrame* theWrappedObject, const QVideoFrame&  other) const
{
  return ( (*theWrappedObject)== other);
}

QVideoFrameFormat::PixelFormat  PythonQtWrapper_QVideoFrame::pixelFormat(QVideoFrame* theWrappedObject) const
{
  return ( theWrappedObject->pixelFormat());
}

int  PythonQtWrapper_QVideoFrame::planeCount(QVideoFrame* theWrappedObject) const
{
  return ( theWrappedObject->planeCount());
}

void PythonQtWrapper_QVideoFrame::setEndTime(QVideoFrame* theWrappedObject, qint64  time)
{
  ( theWrappedObject->setEndTime(time));
}

void PythonQtWrapper_QVideoFrame::setStartTime(QVideoFrame* theWrappedObject, qint64  time)
{
  ( theWrappedObject->setStartTime(time));
}

QSize  PythonQtWrapper_QVideoFrame::size(QVideoFrame* theWrappedObject) const
{
  return ( theWrappedObject->size());
}

qint64  PythonQtWrapper_QVideoFrame::startTime(QVideoFrame* theWrappedObject) const
{
  return ( theWrappedObject->startTime());
}

void PythonQtWrapper_QVideoFrame::unmap(QVideoFrame* theWrappedObject)
{
  ( theWrappedObject->unmap());
}

int  PythonQtWrapper_QVideoFrame::width(QVideoFrame* theWrappedObject) const
{
  return ( theWrappedObject->width());
}

QString PythonQtWrapper_QVideoFrame::py_toString(QVideoFrame* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}
