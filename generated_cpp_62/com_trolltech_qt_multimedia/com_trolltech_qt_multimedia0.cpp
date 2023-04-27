#include "com_trolltech_qt_multimedia0.h"
#include <PythonQtConversion.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtSignalReceiver.h>
#include <QVariant>
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



QAudioBuffer* PythonQtWrapper_QAudioBuffer::new_QAudioBuffer()
{ 
return new QAudioBuffer(); }

QAudioBuffer* PythonQtWrapper_QAudioBuffer::new_QAudioBuffer(const QAudioBuffer&  other)
{ 
return new QAudioBuffer(other); }

QAudioBuffer* PythonQtWrapper_QAudioBuffer::new_QAudioBuffer(const QByteArray&  data, const QAudioFormat&  format, qint64  startTime)
{ 
return new QAudioBuffer(data, format, startTime); }

QAudioBuffer* PythonQtWrapper_QAudioBuffer::new_QAudioBuffer(int  numFrames, const QAudioFormat&  format, qint64  startTime)
{ 
return new QAudioBuffer(numFrames, format, startTime); }

int  PythonQtWrapper_QAudioBuffer::byteCount(QAudioBuffer* theWrappedObject) const
{
  return ( theWrappedObject->byteCount());
}

const void*  PythonQtWrapper_QAudioBuffer::constData(QAudioBuffer* theWrappedObject) const
{
  return ( theWrappedObject->constData<void>());
}

void*  PythonQtWrapper_QAudioBuffer::data(QAudioBuffer* theWrappedObject)
{
  return ( theWrappedObject->data<void>());
}

const void*  PythonQtWrapper_QAudioBuffer::data(QAudioBuffer* theWrappedObject) const
{
  return ( theWrappedObject->data<void>());
}

qint64  PythonQtWrapper_QAudioBuffer::duration(QAudioBuffer* theWrappedObject) const
{
  return ( theWrappedObject->duration());
}

QAudioFormat  PythonQtWrapper_QAudioBuffer::format(QAudioBuffer* theWrappedObject) const
{
  return ( theWrappedObject->format());
}

int  PythonQtWrapper_QAudioBuffer::frameCount(QAudioBuffer* theWrappedObject) const
{
  return ( theWrappedObject->frameCount());
}

bool  PythonQtWrapper_QAudioBuffer::isValid(QAudioBuffer* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

QAudioBuffer*  PythonQtWrapper_QAudioBuffer::operator_assign(QAudioBuffer* theWrappedObject, const QAudioBuffer&  other)
{
  return &( (*theWrappedObject)= other);
}

int  PythonQtWrapper_QAudioBuffer::sampleCount(QAudioBuffer* theWrappedObject) const
{
  return ( theWrappedObject->sampleCount());
}

qint64  PythonQtWrapper_QAudioBuffer::startTime(QAudioBuffer* theWrappedObject) const
{
  return ( theWrappedObject->startTime());
}



PythonQtShell_QAudioDecoder::~PythonQtShell_QAudioDecoder() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}

void PythonQtShell_QAudioDecoder::childEvent(QChildEvent*  event0)
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
  QAudioDecoder::childEvent(event0);
}
void PythonQtShell_QAudioDecoder::customEvent(QEvent*  event0)
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
  QAudioDecoder::customEvent(event0);
}
bool  PythonQtShell_QAudioDecoder::event(QEvent*  event0)
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
  return QAudioDecoder::event(event0);
}
bool  PythonQtShell_QAudioDecoder::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QAudioDecoder::eventFilter(watched0, event1);
}

void PythonQtShell_QAudioDecoder::timerEvent(QTimerEvent*  event0)
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
  QAudioDecoder::timerEvent(event0);
}
QAudioDecoder* PythonQtWrapper_QAudioDecoder::new_QAudioDecoder(QObject*  parent)
{ 
return new PythonQtShell_QAudioDecoder(parent); }

const QMetaObject* PythonQtShell_QAudioDecoder::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QAudioDecoder::staticMetaObject);
  } else {
    return &QAudioDecoder::staticMetaObject;
  }
}
int PythonQtShell_QAudioDecoder::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QAudioDecoder::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}
QAudioFormat  PythonQtWrapper_QAudioDecoder::audioFormat(QAudioDecoder* theWrappedObject) const
{
  return ( theWrappedObject->audioFormat());
}

bool  PythonQtWrapper_QAudioDecoder::bufferAvailable(QAudioDecoder* theWrappedObject) const
{
  return ( theWrappedObject->bufferAvailable());
}

qint64  PythonQtWrapper_QAudioDecoder::duration(QAudioDecoder* theWrappedObject) const
{
  return ( theWrappedObject->duration());
}

QAudioDecoder::Error  PythonQtWrapper_QAudioDecoder::error(QAudioDecoder* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

QString  PythonQtWrapper_QAudioDecoder::errorString(QAudioDecoder* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}

qint64  PythonQtWrapper_QAudioDecoder::position(QAudioDecoder* theWrappedObject) const
{
  return ( theWrappedObject->position());
}

QAudioBuffer  PythonQtWrapper_QAudioDecoder::read(QAudioDecoder* theWrappedObject) const
{
  return ( theWrappedObject->read());
}

void PythonQtWrapper_QAudioDecoder::setAudioFormat(QAudioDecoder* theWrappedObject, const QAudioFormat&  format)
{
  ( theWrappedObject->setAudioFormat(format));
}

void PythonQtWrapper_QAudioDecoder::setSourceDevice(QAudioDecoder* theWrappedObject, QIODevice*  device)
{
  ( theWrappedObject->setSourceDevice(device));
}

QIODevice*  PythonQtWrapper_QAudioDecoder::sourceDevice(QAudioDecoder* theWrappedObject) const
{
  return ( theWrappedObject->sourceDevice());
}

QAudioFormat* PythonQtWrapper_QAudioFormat::new_QAudioFormat()
{ 
return new QAudioFormat(); }

QAudioFormat* PythonQtWrapper_QAudioFormat::new_QAudioFormat(const QAudioFormat&  other)
{ 
return new QAudioFormat(other); }


int  PythonQtWrapper_QAudioFormat::bytesForDuration(QAudioFormat* theWrappedObject, qint64  duration) const
{
  return ( theWrappedObject->bytesForDuration(duration));
}

int  PythonQtWrapper_QAudioFormat::bytesForFrames(QAudioFormat* theWrappedObject, int  frameCount) const
{
  return ( theWrappedObject->bytesForFrames(frameCount));
}

int  PythonQtWrapper_QAudioFormat::bytesPerFrame(QAudioFormat* theWrappedObject) const
{
  return ( theWrappedObject->bytesPerFrame());
}

int  PythonQtWrapper_QAudioFormat::channelCount(QAudioFormat* theWrappedObject) const
{
  return ( theWrappedObject->channelCount());
}

qint64  PythonQtWrapper_QAudioFormat::durationForBytes(QAudioFormat* theWrappedObject, int  byteCount) const
{
  return ( theWrappedObject->durationForBytes(byteCount));
}

qint64  PythonQtWrapper_QAudioFormat::durationForFrames(QAudioFormat* theWrappedObject, int  frameCount) const
{
  return ( theWrappedObject->durationForFrames(frameCount));
}

int  PythonQtWrapper_QAudioFormat::framesForBytes(QAudioFormat* theWrappedObject, int  byteCount) const
{
  return ( theWrappedObject->framesForBytes(byteCount));
}

int  PythonQtWrapper_QAudioFormat::framesForDuration(QAudioFormat* theWrappedObject, qint64  duration) const
{
  return ( theWrappedObject->framesForDuration(duration));
}

bool  PythonQtWrapper_QAudioFormat::isValid(QAudioFormat* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

bool  PythonQtWrapper_QAudioFormat::__ne__(QAudioFormat* theWrappedObject, const QAudioFormat&  other) const
{
  return ( (*theWrappedObject)!= other);
}

QAudioFormat*  PythonQtWrapper_QAudioFormat::operator_assign(QAudioFormat* theWrappedObject, const QAudioFormat&  other)
{
  return &( (*theWrappedObject)= other);
}

bool  PythonQtWrapper_QAudioFormat::__eq__(QAudioFormat* theWrappedObject, const QAudioFormat&  other) const
{
  return ( (*theWrappedObject)== other);
}

int  PythonQtWrapper_QAudioFormat::sampleRate(QAudioFormat* theWrappedObject) const
{
  return ( theWrappedObject->sampleRate());
}

void PythonQtWrapper_QAudioFormat::setChannelCount(QAudioFormat* theWrappedObject, int  channelCount)
{
  ( theWrappedObject->setChannelCount(channelCount));
}

void PythonQtWrapper_QAudioFormat::setSampleRate(QAudioFormat* theWrappedObject, int  sampleRate)
{
  ( theWrappedObject->setSampleRate(sampleRate));
}

QString PythonQtWrapper_QAudioFormat::py_toString(QAudioFormat* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



PythonQtShell_QAudioInput::~PythonQtShell_QAudioInput() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QAudioInput::childEvent(QChildEvent*  event0)
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
  QAudioInput::childEvent(event0);
}
void PythonQtShell_QAudioInput::customEvent(QEvent*  event0)
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
  QAudioInput::customEvent(event0);
}
bool  PythonQtShell_QAudioInput::event(QEvent*  event0)
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
  return QAudioInput::event(event0);
}
bool  PythonQtShell_QAudioInput::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QAudioInput::eventFilter(watched0, event1);
}
void PythonQtShell_QAudioInput::timerEvent(QTimerEvent*  event0)
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
  QAudioInput::timerEvent(event0);
}

QAudioInput *PythonQtWrapper_QAudioInput::new_QAudioInput(QObject *parent /*= nullptr*/)
{
   return new PythonQtShell_QAudioInput(parent);
}

QAudioInput *PythonQtWrapper_QAudioInput::new_QAudioInput(const QAudioDevice &deviceInfo, QObject *parent /*= nullptr*/)
{
   return new PythonQtShell_QAudioInput(deviceInfo, parent);
}

const QMetaObject* PythonQtShell_QAudioInput::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QAudioInput::staticMetaObject);
  } else {
    return &QAudioInput::staticMetaObject;
  }
}
int PythonQtShell_QAudioInput::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QAudioInput::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}

void PythonQtWrapper_QAudioInput::setVolume(QAudioInput* theWrappedObject, qreal  volume)
{
  ( theWrappedObject->setVolume(volume));
}

qreal  PythonQtWrapper_QAudioInput::volume(QAudioInput* theWrappedObject) const
{
  return ( theWrappedObject->volume());
}



PythonQtShell_QAudioOutput::~PythonQtShell_QAudioOutput() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}
void PythonQtShell_QAudioOutput::childEvent(QChildEvent*  event0)
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
  QAudioOutput::childEvent(event0);
}
void PythonQtShell_QAudioOutput::customEvent(QEvent*  event0)
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
  QAudioOutput::customEvent(event0);
}
bool  PythonQtShell_QAudioOutput::event(QEvent*  event0)
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
  return QAudioOutput::event(event0);
}
bool  PythonQtShell_QAudioOutput::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QAudioOutput::eventFilter(watched0, event1);
}
void PythonQtShell_QAudioOutput::timerEvent(QTimerEvent*  event0)
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
  QAudioOutput::timerEvent(event0);
}


QAudioOutput *PythonQtWrapper_QAudioOutput::new_QAudioOutput(QObject *parent /*= nullptr*/)
{
   return new PythonQtShell_QAudioOutput(parent);
}

QAudioOutput *PythonQtWrapper_QAudioOutput::new_QAudioOutput(const QAudioDevice &device, QObject *parent /*= nullptr*/)
{
   return new PythonQtShell_QAudioOutput(device, parent);
}

const QMetaObject* PythonQtShell_QAudioOutput::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QAudioOutput::staticMetaObject);
  } else {
    return &QAudioOutput::staticMetaObject;
  }
}
int PythonQtShell_QAudioOutput::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QAudioOutput::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}


void PythonQtWrapper_QAudioOutput::setVolume(QAudioOutput* theWrappedObject, qreal  arg__1)
{
  ( theWrappedObject->setVolume(arg__1));
}

qreal  PythonQtWrapper_QAudioOutput::volume(QAudioOutput* theWrappedObject) const
{
  return ( theWrappedObject->volume());
}


PythonQtShell_QCamera::~PythonQtShell_QCamera() {
  PythonQtPrivate* priv = PythonQt::priv();
  if (priv) { priv->shellClassDeleted(this); }
}

void PythonQtShell_QCamera::childEvent(QChildEvent*  event0)
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
  QCamera::childEvent(event0);
}
void PythonQtShell_QCamera::customEvent(QEvent*  event0)
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
  QCamera::customEvent(event0);
}
bool  PythonQtShell_QCamera::event(QEvent*  event0)
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
  return QCamera::event(event0);
}
bool  PythonQtShell_QCamera::eventFilter(QObject*  watched0, QEvent*  event1)
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
  return QCamera::eventFilter(watched0, event1);
}
bool  PythonQtShell_QCamera::isAvailable() const
{
if (_wrapper) {
  PYTHONQT_GIL_SCOPE
  if (((PyObject*)_wrapper)->ob_refcnt > 0) {
    static PyObject* name = PyString_FromString("isAvailable");
    PyObject* obj = PyBaseObject_Type.tp_getattro((PyObject*)_wrapper, name);
    if (obj) {
      static const char* argumentList[] ={"bool"};
      static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      bool returnValue = 0;
      void* args[1] = {NULL};
      PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
      if (result) {
        args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
        if (args[0]!=&returnValue) {
          if (args[0]==NULL) {
            PythonQt::priv()->handleVirtualOverloadReturnError("isAvailable", methodInfo, result);
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
  return QCamera::isAvailable();
}

void PythonQtShell_QCamera::timerEvent(QTimerEvent*  event0)
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
  QCamera::timerEvent(event0);
}
QCamera* PythonQtWrapper_QCamera::new_QCamera(QCameraDevice::Position  position, QObject*  parent)
{ 
return new PythonQtShell_QCamera(position, parent); }

QCamera* PythonQtWrapper_QCamera::new_QCamera(QObject*  parent)
{ 
return new PythonQtShell_QCamera(parent); }

QCamera* PythonQtWrapper_QCamera::new_QCamera(const QCameraDevice&  cameraDevice, QObject*  parent)
{ 
return new PythonQtShell_QCamera(cameraDevice, parent); }

const QMetaObject* PythonQtShell_QCamera::metaObject() const {
  if (QObject::d_ptr->metaObject) {
    return QObject::d_ptr->dynamicMetaObject();
  } else if (_wrapper) {
    return PythonQt::priv()->getDynamicMetaObject(_wrapper, &QCamera::staticMetaObject);
  } else {
    return &QCamera::staticMetaObject;
  }
}
int PythonQtShell_QCamera::qt_metacall(QMetaObject::Call call, int id, void** args) {
  int result = QCamera::qt_metacall(call, id, args);
  return result >= 0 ? PythonQt::priv()->handleMetaCall(this, _wrapper, call, id, args) : result;
}

QCamera::Error  PythonQtWrapper_QCamera::error(QCamera* theWrappedObject) const
{
  return ( theWrappedObject->error());
}

QString  PythonQtWrapper_QCamera::errorString(QCamera* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}

float PythonQtWrapper_QAudio::static_QAudio_convertVolume(
   float volume,
   QAudio::VolumeScale from,
   QAudio::VolumeScale to)
{
   return QAudio::convertVolume(volume, from, to);
}
