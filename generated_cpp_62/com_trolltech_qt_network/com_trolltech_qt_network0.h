#include <PythonQt.h>
#include <QDateTime>
#include <QObject>
#include <QVariant>
#include <qabstractnetworkcache.h>
#include <qabstractsocket.h>
#include <qauthenticator.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qdatastream.h>
#include <qdatetime.h>
#include <qdnslookup.h>
#include <qhostaddress.h>
#include <qhostinfo.h>
#include <qhttpmultipart.h>
#include <qiodevice.h>
#include <qlist.h>
#include <qlocalserver.h>
#include <qlocalsocket.h>
#include <qmetaobject.h>
#include <qnetworkaccessmanager.h>
#include <qnetworkcookie.h>
#include <qnetworkcookiejar.h>
#include <qnetworkdiskcache.h>
#include <qnetworkinterface.h>
#include <qnetworkproxy.h>
#include <qnetworkreply.h>
#include <qnetworkrequest.h>
#include <qobject.h>
#include <qpair.h>
#include <qsslconfiguration.h>
#include <qsslerror.h>
#include <qsslpresharedkeyauthenticator.h>
#include <qstringlist.h>
#include <qurl.h>



class PythonQtShell_QAbstractNetworkCache : public QAbstractNetworkCache
{
public:
    PythonQtShell_QAbstractNetworkCache(QObject*  parent = NULL):QAbstractNetworkCache(parent),_wrapper(NULL) {};

   ~PythonQtShell_QAbstractNetworkCache();

virtual qint64  cacheSize() const;
virtual void childEvent(QChildEvent*  event);
virtual void clear();
virtual void customEvent(QEvent*  event);
virtual QIODevice*  data(const QUrl&  url);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void insert(QIODevice*  device);
virtual QNetworkCacheMetaData  metaData(const QUrl&  url);
virtual QIODevice*  prepare(const QNetworkCacheMetaData&  metaData);
virtual bool  remove(const QUrl&  url);
virtual void timerEvent(QTimerEvent*  event);
virtual void updateMetaData(const QNetworkCacheMetaData&  metaData);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAbstractNetworkCache : public QAbstractNetworkCache
{ public:
inline qint64  py_q_cacheSize() const { return this->cacheSize(); }
inline void py_q_clear() { this->clear(); }
inline QIODevice*  py_q_data(const QUrl&  url) { return this->data(url); }
inline void py_q_insert(QIODevice*  device) { this->insert(device); }
inline QNetworkCacheMetaData  py_q_metaData(const QUrl&  url) { return this->metaData(url); }
inline QIODevice*  py_q_prepare(const QNetworkCacheMetaData&  metaData) { return this->prepare(metaData); }
inline bool  py_q_remove(const QUrl&  url) { return this->remove(url); }
inline void py_q_updateMetaData(const QNetworkCacheMetaData&  metaData) { this->updateMetaData(metaData); }
};

class PythonQtWrapper_QAbstractNetworkCache : public QObject
{ Q_OBJECT
public:
public slots:
QAbstractNetworkCache* new_QAbstractNetworkCache(QObject*  parent = NULL);
void delete_QAbstractNetworkCache(QAbstractNetworkCache* obj) { delete obj; } 
   qint64  cacheSize(QAbstractNetworkCache* theWrappedObject) const;
   qint64  py_q_cacheSize(QAbstractNetworkCache* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAbstractNetworkCache*)theWrappedObject)->py_q_cacheSize());}
   void py_q_clear(QAbstractNetworkCache* theWrappedObject){  (((PythonQtPublicPromoter_QAbstractNetworkCache*)theWrappedObject)->py_q_clear());}
   QIODevice*  data(QAbstractNetworkCache* theWrappedObject, const QUrl&  url);
   QIODevice*  py_q_data(QAbstractNetworkCache* theWrappedObject, const QUrl&  url){  return (((PythonQtPublicPromoter_QAbstractNetworkCache*)theWrappedObject)->py_q_data(url));}
   void insert(QAbstractNetworkCache* theWrappedObject, QIODevice*  device);
   void py_q_insert(QAbstractNetworkCache* theWrappedObject, QIODevice*  device){  (((PythonQtPublicPromoter_QAbstractNetworkCache*)theWrappedObject)->py_q_insert(device));}
   QNetworkCacheMetaData  metaData(QAbstractNetworkCache* theWrappedObject, const QUrl&  url);
   QNetworkCacheMetaData  py_q_metaData(QAbstractNetworkCache* theWrappedObject, const QUrl&  url){  return (((PythonQtPublicPromoter_QAbstractNetworkCache*)theWrappedObject)->py_q_metaData(url));}
   QIODevice*  prepare(QAbstractNetworkCache* theWrappedObject, const QNetworkCacheMetaData&  metaData);
   QIODevice*  py_q_prepare(QAbstractNetworkCache* theWrappedObject, const QNetworkCacheMetaData&  metaData){  return (((PythonQtPublicPromoter_QAbstractNetworkCache*)theWrappedObject)->py_q_prepare(metaData));}
   bool  remove(QAbstractNetworkCache* theWrappedObject, const QUrl&  url);
   bool  py_q_remove(QAbstractNetworkCache* theWrappedObject, const QUrl&  url){  return (((PythonQtPublicPromoter_QAbstractNetworkCache*)theWrappedObject)->py_q_remove(url));}
   void updateMetaData(QAbstractNetworkCache* theWrappedObject, const QNetworkCacheMetaData&  metaData);
   void py_q_updateMetaData(QAbstractNetworkCache* theWrappedObject, const QNetworkCacheMetaData&  metaData){  (((PythonQtPublicPromoter_QAbstractNetworkCache*)theWrappedObject)->py_q_updateMetaData(metaData));}
};





class PythonQtShell_QAbstractSocket : public QAbstractSocket
{
public:
    PythonQtShell_QAbstractSocket(QAbstractSocket::SocketType  socketType, QObject*  parent):QAbstractSocket(socketType, parent),_wrapper(NULL) {};

   ~PythonQtShell_QAbstractSocket();

virtual bool  atEnd() const;
virtual qint64  bytesAvailable() const;
virtual qint64  bytesToWrite() const;
virtual bool  canReadLine() const;
virtual void childEvent(QChildEvent*  event);
virtual void close();
virtual void connectToHost(const QHostAddress&  address, unsigned short  port, QIODevice::OpenMode  mode = QIODevice::ReadWrite);
virtual void connectToHost(const QString&  hostName, unsigned short  port, QIODevice::OpenMode  mode = QIODevice::ReadWrite, QAbstractSocket::NetworkLayerProtocol  protocol = QAbstractSocket::AnyIPProtocol);
virtual void customEvent(QEvent*  event);
virtual void disconnectFromHost();
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual bool  isSequential() const;
virtual bool  open(QIODevice::OpenMode  mode);
virtual qint64  pos() const;
virtual qint64  readData(char*  data, qint64  maxlen);
virtual qint64  readLineData(char*  data, qint64  maxlen);
virtual bool  reset();
virtual void resume();
virtual bool  seek(qint64  pos);
virtual void setReadBufferSize(qint64  size);
virtual bool  setSocketDescriptor(qintptr  socketDescriptor, QAbstractSocket::SocketState  state = QAbstractSocket::ConnectedState, QIODevice::OpenMode  openMode = QIODevice::ReadWrite);
virtual void setSocketOption(QAbstractSocket::SocketOption  option, const QVariant&  value);
virtual qint64  size() const;
virtual qintptr  socketDescriptor() const;
virtual QVariant  socketOption(QAbstractSocket::SocketOption  option);
virtual void timerEvent(QTimerEvent*  event);
virtual bool  waitForBytesWritten(int  msecs = 30000);
virtual bool  waitForConnected(int  msecs = 30000);
virtual bool  waitForDisconnected(int  msecs = 30000);
virtual bool  waitForReadyRead(int  msecs = 30000);
virtual qint64  writeData(const char*  data, qint64  len);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QAbstractSocket : public QAbstractSocket
{ public:
inline qint64  promoted_readData(char*  data, qint64  maxlen) { return this->readData(data, maxlen); }
inline qint64  promoted_readLineData(char*  data, qint64  maxlen) { return this->readLineData(data, maxlen); }
inline void promoted_setLocalAddress(const QHostAddress&  address) { this->setLocalAddress(address); }
inline void promoted_setLocalPort(unsigned short  port) { this->setLocalPort(port); }
inline void promoted_setPeerAddress(const QHostAddress&  address) { this->setPeerAddress(address); }
inline void promoted_setPeerName(const QString&  name) { this->setPeerName(name); }
inline void promoted_setPeerPort(unsigned short  port) { this->setPeerPort(port); }
inline void promoted_setSocketError(QAbstractSocket::SocketError  socketError) { this->setSocketError(socketError); }
inline void promoted_setSocketState(QAbstractSocket::SocketState  state) { this->setSocketState(state); }
inline qint64  promoted_writeData(const char*  data, qint64  len) { return this->writeData(data, len); }
inline bool  py_q_atEnd() const { return QAbstractSocket::atEnd(); }
inline qint64  py_q_bytesAvailable() const { return QAbstractSocket::bytesAvailable(); }
inline qint64  py_q_bytesToWrite() const { return QAbstractSocket::bytesToWrite(); }
inline bool  py_q_canReadLine() const { return QAbstractSocket::canReadLine(); }
inline void py_q_close() { QAbstractSocket::close(); }
inline void py_q_connectToHost(const QHostAddress&  address, unsigned short  port, QIODevice::OpenMode  mode = QIODevice::ReadWrite) { QAbstractSocket::connectToHost(address, port, mode); }
inline void py_q_connectToHost(const QString&  hostName, unsigned short  port, QIODevice::OpenMode  mode = QIODevice::ReadWrite, QAbstractSocket::NetworkLayerProtocol  protocol = QAbstractSocket::AnyIPProtocol) { QAbstractSocket::connectToHost(hostName, port, mode, protocol); }
inline void py_q_disconnectFromHost() { QAbstractSocket::disconnectFromHost(); }
inline bool  py_q_isSequential() const { return QAbstractSocket::isSequential(); }
inline qint64  py_q_readData(char*  data, qint64  maxlen) { return QAbstractSocket::readData(data, maxlen); }
inline qint64  py_q_readLineData(char*  data, qint64  maxlen) { return QAbstractSocket::readLineData(data, maxlen); }
inline void py_q_resume() { QAbstractSocket::resume(); }
inline void py_q_setReadBufferSize(qint64  size) { QAbstractSocket::setReadBufferSize(size); }
inline bool  py_q_setSocketDescriptor(qintptr  socketDescriptor, QAbstractSocket::SocketState  state = QAbstractSocket::ConnectedState, QIODevice::OpenMode  openMode = QIODevice::ReadWrite) { return QAbstractSocket::setSocketDescriptor(socketDescriptor, state, openMode); }
inline void py_q_setSocketOption(QAbstractSocket::SocketOption  option, const QVariant&  value) { QAbstractSocket::setSocketOption(option, value); }
inline qintptr  py_q_socketDescriptor() const { return QAbstractSocket::socketDescriptor(); }
inline QVariant  py_q_socketOption(QAbstractSocket::SocketOption  option) { return QAbstractSocket::socketOption(option); }
inline bool  py_q_waitForBytesWritten(int  msecs = 30000) { return QAbstractSocket::waitForBytesWritten(msecs); }
inline bool  py_q_waitForConnected(int  msecs = 30000) { return QAbstractSocket::waitForConnected(msecs); }
inline bool  py_q_waitForDisconnected(int  msecs = 30000) { return QAbstractSocket::waitForDisconnected(msecs); }
inline bool  py_q_waitForReadyRead(int  msecs = 30000) { return QAbstractSocket::waitForReadyRead(msecs); }
inline qint64  py_q_writeData(const char*  data, qint64  len) { return QAbstractSocket::writeData(data, len); }
};

class PythonQtWrapper_QAbstractSocket : public QObject
{ Q_OBJECT
public:
Q_ENUMS(BindFlag PauseMode )
Q_FLAGS(BindMode PauseModes )
enum BindFlag{
  DefaultForPlatform = QAbstractSocket::DefaultForPlatform,   ShareAddress = QAbstractSocket::ShareAddress,   DontShareAddress = QAbstractSocket::DontShareAddress,   ReuseAddressHint = QAbstractSocket::ReuseAddressHint};
enum PauseMode{
  PauseNever = QAbstractSocket::PauseNever,   PauseOnSslErrors = QAbstractSocket::PauseOnSslErrors};
Q_DECLARE_FLAGS(BindMode, BindFlag)
Q_DECLARE_FLAGS(PauseModes, PauseMode)
public slots:
QAbstractSocket* new_QAbstractSocket(QAbstractSocket::SocketType  socketType, QObject*  parent);
void delete_QAbstractSocket(QAbstractSocket* obj) { delete obj; } 
   void abort(QAbstractSocket* theWrappedObject);
   bool  py_q_atEnd(QAbstractSocket* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAbstractSocket*)theWrappedObject)->py_q_atEnd());}
   bool  bind(QAbstractSocket* theWrappedObject, const QHostAddress&  address, unsigned short  port = 0, QAbstractSocket::BindMode  mode = QAbstractSocket::DefaultForPlatform);
   bool  bind(QAbstractSocket* theWrappedObject, unsigned short  port = 0, QAbstractSocket::BindMode  mode = QAbstractSocket::DefaultForPlatform);
   qint64  py_q_bytesAvailable(QAbstractSocket* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAbstractSocket*)theWrappedObject)->py_q_bytesAvailable());}
   qint64  py_q_bytesToWrite(QAbstractSocket* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAbstractSocket*)theWrappedObject)->py_q_bytesToWrite());}
   bool  py_q_canReadLine(QAbstractSocket* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAbstractSocket*)theWrappedObject)->py_q_canReadLine());}
   void py_q_close(QAbstractSocket* theWrappedObject){  (((PythonQtPublicPromoter_QAbstractSocket*)theWrappedObject)->py_q_close());}
   void connectToHost(QAbstractSocket* theWrappedObject, const QHostAddress&  address, unsigned short  port, QIODevice::OpenMode  mode = QIODevice::ReadWrite);
   void py_q_connectToHost(QAbstractSocket* theWrappedObject, const QHostAddress&  address, unsigned short  port, QIODevice::OpenMode  mode = QIODevice::ReadWrite){  (((PythonQtPublicPromoter_QAbstractSocket*)theWrappedObject)->py_q_connectToHost(address, port, mode));}
   void connectToHost(QAbstractSocket* theWrappedObject, const QString&  hostName, unsigned short  port, QIODevice::OpenMode  mode = QIODevice::ReadWrite, QAbstractSocket::NetworkLayerProtocol  protocol = QAbstractSocket::AnyIPProtocol);
   void py_q_connectToHost(QAbstractSocket* theWrappedObject, const QString&  hostName, unsigned short  port, QIODevice::OpenMode  mode = QIODevice::ReadWrite, QAbstractSocket::NetworkLayerProtocol  protocol = QAbstractSocket::AnyIPProtocol){  (((PythonQtPublicPromoter_QAbstractSocket*)theWrappedObject)->py_q_connectToHost(hostName, port, mode, protocol));}
   void disconnectFromHost(QAbstractSocket* theWrappedObject);
   void py_q_disconnectFromHost(QAbstractSocket* theWrappedObject){  (((PythonQtPublicPromoter_QAbstractSocket*)theWrappedObject)->py_q_disconnectFromHost());}
   QAbstractSocket::SocketError  error(QAbstractSocket* theWrappedObject) const;
   bool  flush(QAbstractSocket* theWrappedObject);
   bool  py_q_isSequential(QAbstractSocket* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAbstractSocket*)theWrappedObject)->py_q_isSequential());}
   bool  isValid(QAbstractSocket* theWrappedObject) const;
   QHostAddress  localAddress(QAbstractSocket* theWrappedObject) const;
   unsigned short  localPort(QAbstractSocket* theWrappedObject) const;
   QAbstractSocket::PauseModes  pauseMode(QAbstractSocket* theWrappedObject) const;
   QHostAddress  peerAddress(QAbstractSocket* theWrappedObject) const;
   QString  peerName(QAbstractSocket* theWrappedObject) const;
   unsigned short  peerPort(QAbstractSocket* theWrappedObject) const;
   QNetworkProxy  proxy(QAbstractSocket* theWrappedObject) const;
   qint64  readBufferSize(QAbstractSocket* theWrappedObject) const;
   qint64  py_q_readData(QAbstractSocket* theWrappedObject, char*  data, qint64  maxlen){  return (((PythonQtPublicPromoter_QAbstractSocket*)theWrappedObject)->py_q_readData(data, maxlen));}
   qint64  py_q_readLineData(QAbstractSocket* theWrappedObject, char*  data, qint64  maxlen){  return (((PythonQtPublicPromoter_QAbstractSocket*)theWrappedObject)->py_q_readLineData(data, maxlen));}
   void resume(QAbstractSocket* theWrappedObject);
   void py_q_resume(QAbstractSocket* theWrappedObject){  (((PythonQtPublicPromoter_QAbstractSocket*)theWrappedObject)->py_q_resume());}
   void setLocalAddress(QAbstractSocket* theWrappedObject, const QHostAddress&  address);
   void setLocalPort(QAbstractSocket* theWrappedObject, unsigned short  port);
   void setPauseMode(QAbstractSocket* theWrappedObject, QAbstractSocket::PauseModes  pauseMode);
   void setPeerAddress(QAbstractSocket* theWrappedObject, const QHostAddress&  address);
   void setPeerName(QAbstractSocket* theWrappedObject, const QString&  name);
   void setPeerPort(QAbstractSocket* theWrappedObject, unsigned short  port);
   void setProxy(QAbstractSocket* theWrappedObject, const QNetworkProxy&  networkProxy);
   void setReadBufferSize(QAbstractSocket* theWrappedObject, qint64  size);
   void py_q_setReadBufferSize(QAbstractSocket* theWrappedObject, qint64  size){  (((PythonQtPublicPromoter_QAbstractSocket*)theWrappedObject)->py_q_setReadBufferSize(size));}
   bool  setSocketDescriptor(QAbstractSocket* theWrappedObject, qintptr  socketDescriptor, QAbstractSocket::SocketState  state = QAbstractSocket::ConnectedState, QIODevice::OpenMode  openMode = QIODevice::ReadWrite);
   bool  py_q_setSocketDescriptor(QAbstractSocket* theWrappedObject, qintptr  socketDescriptor, QAbstractSocket::SocketState  state = QAbstractSocket::ConnectedState, QIODevice::OpenMode  openMode = QIODevice::ReadWrite){  return (((PythonQtPublicPromoter_QAbstractSocket*)theWrappedObject)->py_q_setSocketDescriptor(socketDescriptor, state, openMode));}
   void setSocketError(QAbstractSocket* theWrappedObject, QAbstractSocket::SocketError  socketError);
   void setSocketOption(QAbstractSocket* theWrappedObject, QAbstractSocket::SocketOption  option, const QVariant&  value);
   void py_q_setSocketOption(QAbstractSocket* theWrappedObject, QAbstractSocket::SocketOption  option, const QVariant&  value){  (((PythonQtPublicPromoter_QAbstractSocket*)theWrappedObject)->py_q_setSocketOption(option, value));}
   void setSocketState(QAbstractSocket* theWrappedObject, QAbstractSocket::SocketState  state);
   qintptr  socketDescriptor(QAbstractSocket* theWrappedObject) const;
   qintptr  py_q_socketDescriptor(QAbstractSocket* theWrappedObject) const{  return (((PythonQtPublicPromoter_QAbstractSocket*)theWrappedObject)->py_q_socketDescriptor());}
   QVariant  socketOption(QAbstractSocket* theWrappedObject, QAbstractSocket::SocketOption  option);
   QVariant  py_q_socketOption(QAbstractSocket* theWrappedObject, QAbstractSocket::SocketOption  option){  return (((PythonQtPublicPromoter_QAbstractSocket*)theWrappedObject)->py_q_socketOption(option));}
   QAbstractSocket::SocketType  socketType(QAbstractSocket* theWrappedObject) const;
   QAbstractSocket::SocketState  state(QAbstractSocket* theWrappedObject) const;
   bool  py_q_waitForBytesWritten(QAbstractSocket* theWrappedObject, int  msecs = 30000){  return (((PythonQtPublicPromoter_QAbstractSocket*)theWrappedObject)->py_q_waitForBytesWritten(msecs));}
   bool  waitForConnected(QAbstractSocket* theWrappedObject, int  msecs = 30000);
   bool  py_q_waitForConnected(QAbstractSocket* theWrappedObject, int  msecs = 30000){  return (((PythonQtPublicPromoter_QAbstractSocket*)theWrappedObject)->py_q_waitForConnected(msecs));}
   bool  waitForDisconnected(QAbstractSocket* theWrappedObject, int  msecs = 30000);
   bool  py_q_waitForDisconnected(QAbstractSocket* theWrappedObject, int  msecs = 30000){  return (((PythonQtPublicPromoter_QAbstractSocket*)theWrappedObject)->py_q_waitForDisconnected(msecs));}
   bool  py_q_waitForReadyRead(QAbstractSocket* theWrappedObject, int  msecs = 30000){  return (((PythonQtPublicPromoter_QAbstractSocket*)theWrappedObject)->py_q_waitForReadyRead(msecs));}
   qint64  py_q_writeData(QAbstractSocket* theWrappedObject, const char*  data, qint64  len){  return (((PythonQtPublicPromoter_QAbstractSocket*)theWrappedObject)->py_q_writeData(data, len));}
    bool __nonzero__(QAbstractSocket* obj) { return obj->isValid(); }
};





class PythonQtWrapper_QAuthenticator : public QObject
{ Q_OBJECT
public:
public slots:
QAuthenticator* new_QAuthenticator();
QAuthenticator* new_QAuthenticator(const QAuthenticator&  other);
void delete_QAuthenticator(QAuthenticator* obj) { delete obj; } 
   bool  isNull(QAuthenticator* theWrappedObject) const;
   bool  __ne__(QAuthenticator* theWrappedObject, const QAuthenticator&  other) const;
   bool  __eq__(QAuthenticator* theWrappedObject, const QAuthenticator&  other) const;
   QVariant  option(QAuthenticator* theWrappedObject, const QString&  opt) const;
   QHash<QString , QVariant >  options(QAuthenticator* theWrappedObject) const;
   QString  password(QAuthenticator* theWrappedObject) const;
   QString  realm(QAuthenticator* theWrappedObject) const;
   void setOption(QAuthenticator* theWrappedObject, const QString&  opt, const QVariant&  value);
   void setPassword(QAuthenticator* theWrappedObject, const QString&  password);
   void setRealm(QAuthenticator* theWrappedObject, const QString&  realm);
   void setUser(QAuthenticator* theWrappedObject, const QString&  user);
   QString  user(QAuthenticator* theWrappedObject) const;
    bool __nonzero__(QAuthenticator* obj) { return !obj->isNull(); }
};





class PythonQtWrapper_QDnsDomainNameRecord : public QObject
{ Q_OBJECT
public:
public slots:
QDnsDomainNameRecord* new_QDnsDomainNameRecord();
QDnsDomainNameRecord* new_QDnsDomainNameRecord(const QDnsDomainNameRecord&  other);
void delete_QDnsDomainNameRecord(QDnsDomainNameRecord* obj) { delete obj; } 
   QString  name(QDnsDomainNameRecord* theWrappedObject) const;
   QDnsDomainNameRecord*  operator_assign(QDnsDomainNameRecord* theWrappedObject, const QDnsDomainNameRecord&  other);
   void swap(QDnsDomainNameRecord* theWrappedObject, QDnsDomainNameRecord&  other);
   unsigned int  timeToLive(QDnsDomainNameRecord* theWrappedObject) const;
   QString  value(QDnsDomainNameRecord* theWrappedObject) const;
};





class PythonQtWrapper_QDnsHostAddressRecord : public QObject
{ Q_OBJECT
public:
public slots:
QDnsHostAddressRecord* new_QDnsHostAddressRecord();
QDnsHostAddressRecord* new_QDnsHostAddressRecord(const QDnsHostAddressRecord&  other);
void delete_QDnsHostAddressRecord(QDnsHostAddressRecord* obj) { delete obj; } 
   QString  name(QDnsHostAddressRecord* theWrappedObject) const;
   QDnsHostAddressRecord*  operator_assign(QDnsHostAddressRecord* theWrappedObject, const QDnsHostAddressRecord&  other);
   void swap(QDnsHostAddressRecord* theWrappedObject, QDnsHostAddressRecord&  other);
   unsigned int  timeToLive(QDnsHostAddressRecord* theWrappedObject) const;
   QHostAddress  value(QDnsHostAddressRecord* theWrappedObject) const;
};





class PythonQtShell_QDnsLookup : public QDnsLookup
{
public:
    PythonQtShell_QDnsLookup(QDnsLookup::Type  type, const QString&  name, QObject*  parent = NULL):QDnsLookup(type, name, parent),_wrapper(NULL) {};
    PythonQtShell_QDnsLookup(QDnsLookup::Type  type, const QString&  name, const QHostAddress&  nameserver, QObject*  parent = NULL):QDnsLookup(type, name, nameserver, parent),_wrapper(NULL) {};
    PythonQtShell_QDnsLookup(QObject*  parent = NULL):QDnsLookup(parent),_wrapper(NULL) {};

   ~PythonQtShell_QDnsLookup();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QDnsLookup : public QObject
{ Q_OBJECT
public:
public slots:
QDnsLookup* new_QDnsLookup(QDnsLookup::Type  type, const QString&  name, QObject*  parent = NULL);
QDnsLookup* new_QDnsLookup(QDnsLookup::Type  type, const QString&  name, const QHostAddress&  nameserver, QObject*  parent = NULL);
QDnsLookup* new_QDnsLookup(QObject*  parent = NULL);
void delete_QDnsLookup(QDnsLookup* obj) { delete obj; } 
   QList<QDnsDomainNameRecord >  canonicalNameRecords(QDnsLookup* theWrappedObject) const;
   QDnsLookup::Error  error(QDnsLookup* theWrappedObject) const;
   QString  errorString(QDnsLookup* theWrappedObject) const;
   QList<QDnsHostAddressRecord >  hostAddressRecords(QDnsLookup* theWrappedObject) const;
   bool  isFinished(QDnsLookup* theWrappedObject) const;
   QList<QDnsMailExchangeRecord >  mailExchangeRecords(QDnsLookup* theWrappedObject) const;
   QString  name(QDnsLookup* theWrappedObject) const;
   QList<QDnsDomainNameRecord >  nameServerRecords(QDnsLookup* theWrappedObject) const;
   QHostAddress  nameserver(QDnsLookup* theWrappedObject) const;
   QList<QDnsDomainNameRecord >  pointerRecords(QDnsLookup* theWrappedObject) const;
   QList<QDnsServiceRecord >  serviceRecords(QDnsLookup* theWrappedObject) const;
   void setName(QDnsLookup* theWrappedObject, const QString&  name);
   void setNameserver(QDnsLookup* theWrappedObject, const QHostAddress&  nameserver);
   void setType(QDnsLookup* theWrappedObject, QDnsLookup::Type  arg__1);
   QList<QDnsTextRecord >  textRecords(QDnsLookup* theWrappedObject) const;
   QDnsLookup::Type  type(QDnsLookup* theWrappedObject) const;
};





class PythonQtWrapper_QDnsMailExchangeRecord : public QObject
{ Q_OBJECT
public:
public slots:
QDnsMailExchangeRecord* new_QDnsMailExchangeRecord();
QDnsMailExchangeRecord* new_QDnsMailExchangeRecord(const QDnsMailExchangeRecord&  other);
void delete_QDnsMailExchangeRecord(QDnsMailExchangeRecord* obj) { delete obj; } 
   QString  exchange(QDnsMailExchangeRecord* theWrappedObject) const;
   QString  name(QDnsMailExchangeRecord* theWrappedObject) const;
   QDnsMailExchangeRecord*  operator_assign(QDnsMailExchangeRecord* theWrappedObject, const QDnsMailExchangeRecord&  other);
   unsigned short  preference(QDnsMailExchangeRecord* theWrappedObject) const;
   void swap(QDnsMailExchangeRecord* theWrappedObject, QDnsMailExchangeRecord&  other);
   unsigned int  timeToLive(QDnsMailExchangeRecord* theWrappedObject) const;
};





class PythonQtWrapper_QDnsServiceRecord : public QObject
{ Q_OBJECT
public:
public slots:
QDnsServiceRecord* new_QDnsServiceRecord();
QDnsServiceRecord* new_QDnsServiceRecord(const QDnsServiceRecord&  other);
void delete_QDnsServiceRecord(QDnsServiceRecord* obj) { delete obj; } 
   QString  name(QDnsServiceRecord* theWrappedObject) const;
   QDnsServiceRecord*  operator_assign(QDnsServiceRecord* theWrappedObject, const QDnsServiceRecord&  other);
   unsigned short  port(QDnsServiceRecord* theWrappedObject) const;
   unsigned short  priority(QDnsServiceRecord* theWrappedObject) const;
   void swap(QDnsServiceRecord* theWrappedObject, QDnsServiceRecord&  other);
   QString  target(QDnsServiceRecord* theWrappedObject) const;
   unsigned int  timeToLive(QDnsServiceRecord* theWrappedObject) const;
   unsigned short  weight(QDnsServiceRecord* theWrappedObject) const;
};





class PythonQtWrapper_QDnsTextRecord : public QObject
{ Q_OBJECT
public:
public slots:
QDnsTextRecord* new_QDnsTextRecord();
QDnsTextRecord* new_QDnsTextRecord(const QDnsTextRecord&  other);
void delete_QDnsTextRecord(QDnsTextRecord* obj) { delete obj; } 
   QString  name(QDnsTextRecord* theWrappedObject) const;
   QDnsTextRecord*  operator_assign(QDnsTextRecord* theWrappedObject, const QDnsTextRecord&  other);
   void swap(QDnsTextRecord* theWrappedObject, QDnsTextRecord&  other);
   unsigned int  timeToLive(QDnsTextRecord* theWrappedObject) const;
   QList<QByteArray >  values(QDnsTextRecord* theWrappedObject) const;
};





class PythonQtWrapper_QHostAddress : public QObject
{ Q_OBJECT
public:
Q_ENUMS(SpecialAddress )
enum SpecialAddress{
  Null = QHostAddress::Null,   Broadcast = QHostAddress::Broadcast,   LocalHost = QHostAddress::LocalHost,   LocalHostIPv6 = QHostAddress::LocalHostIPv6,   Any = QHostAddress::Any,   AnyIPv6 = QHostAddress::AnyIPv6,   AnyIPv4 = QHostAddress::AnyIPv4};
public slots:
QHostAddress* new_QHostAddress();
QHostAddress* new_QHostAddress(QHostAddress::SpecialAddress  address);
QHostAddress* new_QHostAddress(const QHostAddress&  copy);
QHostAddress* new_QHostAddress(const QIPv6Address&  ip6Addr);
QHostAddress* new_QHostAddress(const QString&  address);
QHostAddress* new_QHostAddress(const unsigned char*  ip6Addr);
QHostAddress* new_QHostAddress(unsigned int  ip4Addr);
void delete_QHostAddress(QHostAddress* obj) { delete obj; } 
   void clear(QHostAddress* theWrappedObject);
   bool  isInSubnet(QHostAddress* theWrappedObject, const QHostAddress&  subnet, int  netmask) const;
   bool  isInSubnet(QHostAddress* theWrappedObject, const QPair<QHostAddress , int >&  subnet) const;
   bool  isLoopback(QHostAddress* theWrappedObject) const;
   bool  isMulticast(QHostAddress* theWrappedObject) const;
   bool  isNull(QHostAddress* theWrappedObject) const;
   bool  __ne__(QHostAddress* theWrappedObject, QHostAddress::SpecialAddress  address) const;
   bool  __ne__(QHostAddress* theWrappedObject, const QHostAddress&  address) const;
   void writeTo(QHostAddress* theWrappedObject, QDataStream&  arg__1);
   bool  __eq__(QHostAddress* theWrappedObject, QHostAddress::SpecialAddress  address) const;
   bool  __eq__(QHostAddress* theWrappedObject, const QHostAddress&  address) const;
   void readFrom(QHostAddress* theWrappedObject, QDataStream&  arg__1);
   QPair<QHostAddress , int >  static_QHostAddress_parseSubnet(const QString&  subnet);
   QAbstractSocket::NetworkLayerProtocol  protocol(QHostAddress* theWrappedObject) const;
   QString  scopeId(QHostAddress* theWrappedObject) const;
   void setAddress(QHostAddress* theWrappedObject, const QIPv6Address&  ip6Addr);
   bool  setAddress(QHostAddress* theWrappedObject, const QString&  address);
   void setAddress(QHostAddress* theWrappedObject, const unsigned char*  ip6Addr);
   void setAddress(QHostAddress* theWrappedObject, unsigned int  ip4Addr);
   void setScopeId(QHostAddress* theWrappedObject, const QString&  id);
   void swap(QHostAddress* theWrappedObject, QHostAddress&  other);
   unsigned int  toIPv4Address(QHostAddress* theWrappedObject) const;
   unsigned int  toIPv4Address(QHostAddress* theWrappedObject, bool*  ok) const;
   QIPv6Address  toIPv6Address(QHostAddress* theWrappedObject) const;
   QString  toString(QHostAddress* theWrappedObject) const;
    QString py_toString(QHostAddress*);
    bool __nonzero__(QHostAddress* obj) { return !obj->isNull(); }
};





class PythonQtWrapper_QHostInfo : public QObject
{ Q_OBJECT
public:
Q_ENUMS(HostInfoError )
enum HostInfoError{
  NoError = QHostInfo::NoError,   HostNotFound = QHostInfo::HostNotFound,   UnknownError = QHostInfo::UnknownError};
public slots:
QHostInfo* new_QHostInfo(const QHostInfo&  d);
QHostInfo* new_QHostInfo(int  lookupId = -1);
void delete_QHostInfo(QHostInfo* obj) { delete obj; } 
   void static_QHostInfo_abortHostLookup(int  lookupId);
   QList<QHostAddress >  addresses(QHostInfo* theWrappedObject) const;
   QHostInfo::HostInfoError  error(QHostInfo* theWrappedObject) const;
   QString  errorString(QHostInfo* theWrappedObject) const;
   QHostInfo  static_QHostInfo_fromName(const QString&  name);
   QString  hostName(QHostInfo* theWrappedObject) const;
   QString  static_QHostInfo_localDomainName();
   QString  static_QHostInfo_localHostName();
   int  static_QHostInfo_lookupHost(const QString&  name, QObject*  receiver, const char*  member);
   int  lookupId(QHostInfo* theWrappedObject) const;
   void setAddresses(QHostInfo* theWrappedObject, const QList<QHostAddress >&  addresses);
   void setError(QHostInfo* theWrappedObject, QHostInfo::HostInfoError  error);
   void setErrorString(QHostInfo* theWrappedObject, const QString&  errorString);
   void setHostName(QHostInfo* theWrappedObject, const QString&  name);
   void setLookupId(QHostInfo* theWrappedObject, int  id);
};





class PythonQtShell_QHttpMultiPart : public QHttpMultiPart
{
public:
    PythonQtShell_QHttpMultiPart(QHttpMultiPart::ContentType  contentType, QObject*  parent = NULL):QHttpMultiPart(contentType, parent),_wrapper(NULL) {};
    PythonQtShell_QHttpMultiPart(QObject*  parent = NULL):QHttpMultiPart(parent),_wrapper(NULL) {};

   ~PythonQtShell_QHttpMultiPart();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QHttpMultiPart : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ContentType )
enum ContentType{
  MixedType = QHttpMultiPart::MixedType,   RelatedType = QHttpMultiPart::RelatedType,   FormDataType = QHttpMultiPart::FormDataType,   AlternativeType = QHttpMultiPart::AlternativeType};
public slots:
QHttpMultiPart* new_QHttpMultiPart(QHttpMultiPart::ContentType  contentType, QObject*  parent = NULL);
QHttpMultiPart* new_QHttpMultiPart(QObject*  parent = NULL);
void delete_QHttpMultiPart(QHttpMultiPart* obj) { delete obj; } 
   void append(QHttpMultiPart* theWrappedObject, const QHttpPart&  httpPart);
   QByteArray  boundary(QHttpMultiPart* theWrappedObject) const;
   void setBoundary(QHttpMultiPart* theWrappedObject, const QByteArray&  boundary);
   void setContentType(QHttpMultiPart* theWrappedObject, QHttpMultiPart::ContentType  contentType);
};





class PythonQtWrapper_QHttpPart : public QObject
{ Q_OBJECT
public:
public slots:
QHttpPart* new_QHttpPart();
QHttpPart* new_QHttpPart(const QHttpPart&  other);
void delete_QHttpPart(QHttpPart* obj) { delete obj; } 
   bool  __ne__(QHttpPart* theWrappedObject, const QHttpPart&  other) const;
   QHttpPart*  operator_assign(QHttpPart* theWrappedObject, const QHttpPart&  other);
   bool  __eq__(QHttpPart* theWrappedObject, const QHttpPart&  other) const;
   void setBody(QHttpPart* theWrappedObject, const QByteArray&  body);
   void setBodyDevice(QHttpPart* theWrappedObject, QIODevice*  device);
   void setHeader(QHttpPart* theWrappedObject, QNetworkRequest::KnownHeaders  header, const QVariant&  value);
   void setRawHeader(QHttpPart* theWrappedObject, const QByteArray&  headerName, const QByteArray&  headerValue);
   void swap(QHttpPart* theWrappedObject, QHttpPart&  other);
};





class PythonQtShell_QIPv6Address : public QIPv6Address
{
public:
    PythonQtShell_QIPv6Address():QIPv6Address(),_wrapper(NULL) {};

   ~PythonQtShell_QIPv6Address();


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QIPv6Address : public QObject
{ Q_OBJECT
public:
public slots:
QIPv6Address* new_QIPv6Address();
QIPv6Address* new_QIPv6Address(const QIPv6Address& other) {
PythonQtShell_QIPv6Address* a = new PythonQtShell_QIPv6Address();
*((QIPv6Address*)a) = other;
return a; }
void delete_QIPv6Address(QIPv6Address* obj) { delete obj; } 
};





class PythonQtShell_QLocalServer : public QLocalServer
{
public:
    PythonQtShell_QLocalServer(QObject*  parent = NULL):QLocalServer(parent),_wrapper(NULL) {};

   ~PythonQtShell_QLocalServer();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual bool  hasPendingConnections() const;
virtual void incomingConnection(quintptr  socketDescriptor);
virtual QLocalSocket*  nextPendingConnection();
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QLocalServer : public QLocalServer
{ public:
inline void promoted_incomingConnection(quintptr  socketDescriptor) { this->incomingConnection(socketDescriptor); }
inline bool  py_q_hasPendingConnections() const { return QLocalServer::hasPendingConnections(); }
inline void py_q_incomingConnection(quintptr  socketDescriptor) { QLocalServer::incomingConnection(socketDescriptor); }
inline QLocalSocket*  py_q_nextPendingConnection() { return QLocalServer::nextPendingConnection(); }
};

class PythonQtWrapper_QLocalServer : public QObject
{ Q_OBJECT
public:
Q_ENUMS(SocketOption )
Q_FLAGS(SocketOptions )
enum SocketOption{
  NoOptions = QLocalServer::NoOptions,   UserAccessOption = QLocalServer::UserAccessOption,   GroupAccessOption = QLocalServer::GroupAccessOption,   OtherAccessOption = QLocalServer::OtherAccessOption,   WorldAccessOption = QLocalServer::WorldAccessOption};
Q_DECLARE_FLAGS(SocketOptions, SocketOption)
public slots:
QLocalServer* new_QLocalServer(QObject*  parent = NULL);
void delete_QLocalServer(QLocalServer* obj) { delete obj; } 
   void close(QLocalServer* theWrappedObject);
   QString  errorString(QLocalServer* theWrappedObject) const;
   QString  fullServerName(QLocalServer* theWrappedObject) const;
   bool  hasPendingConnections(QLocalServer* theWrappedObject) const;
   bool  py_q_hasPendingConnections(QLocalServer* theWrappedObject) const{  return (((PythonQtPublicPromoter_QLocalServer*)theWrappedObject)->py_q_hasPendingConnections());}
   void incomingConnection(QLocalServer* theWrappedObject, quintptr  socketDescriptor);
   void py_q_incomingConnection(QLocalServer* theWrappedObject, quintptr  socketDescriptor){  (((PythonQtPublicPromoter_QLocalServer*)theWrappedObject)->py_q_incomingConnection(socketDescriptor));}
   bool  isListening(QLocalServer* theWrappedObject) const;
   bool  listen(QLocalServer* theWrappedObject, const QString&  name);
   bool  listen(QLocalServer* theWrappedObject, qintptr  socketDescriptor);
   int  maxPendingConnections(QLocalServer* theWrappedObject) const;
   QLocalSocket*  nextPendingConnection(QLocalServer* theWrappedObject);
   QLocalSocket*  py_q_nextPendingConnection(QLocalServer* theWrappedObject){  return (((PythonQtPublicPromoter_QLocalServer*)theWrappedObject)->py_q_nextPendingConnection());}
   bool  static_QLocalServer_removeServer(const QString&  name);
   QAbstractSocket::SocketError  serverError(QLocalServer* theWrappedObject) const;
   QString  serverName(QLocalServer* theWrappedObject) const;
   void setMaxPendingConnections(QLocalServer* theWrappedObject, int  numConnections);
   void setSocketOptions(QLocalServer* theWrappedObject, QLocalServer::SocketOptions  options);
   QLocalServer::SocketOptions  socketOptions(QLocalServer* theWrappedObject) const;
   bool  waitForNewConnection(QLocalServer* theWrappedObject, int  msec = 0, bool*  timedOut = NULL);
};





class PythonQtShell_QLocalSocket : public QLocalSocket
{
public:
    PythonQtShell_QLocalSocket(QObject*  parent = NULL):QLocalSocket(parent),_wrapper(NULL) {};

   ~PythonQtShell_QLocalSocket();

virtual bool  atEnd() const;
virtual qint64  bytesAvailable() const;
virtual qint64  bytesToWrite() const;
virtual bool  canReadLine() const;
virtual void childEvent(QChildEvent*  event);
virtual void close();
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual bool  isSequential() const;
virtual bool  open(QIODevice::OpenMode  openMode = QIODevice::ReadWrite);
virtual qint64  pos() const;
virtual qint64  readData(char*  arg__1, qint64  arg__2);
virtual qint64  readLineData(char*  data, qint64  maxlen);
virtual bool  reset();
virtual bool  seek(qint64  pos);
virtual qint64  size() const;
virtual void timerEvent(QTimerEvent*  event);
virtual bool  waitForBytesWritten(int  msecs = 30000);
virtual bool  waitForReadyRead(int  msecs = 30000);
virtual qint64  writeData(const char*  arg__1, qint64  arg__2);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QLocalSocket : public QLocalSocket
{ public:
inline qint64  promoted_readData(char*  arg__1, qint64  arg__2) { return this->readData(arg__1, arg__2); }
inline qint64  promoted_writeData(const char*  arg__1, qint64  arg__2) { return this->writeData(arg__1, arg__2); }
inline qint64  py_q_bytesAvailable() const { return QLocalSocket::bytesAvailable(); }
inline qint64  py_q_bytesToWrite() const { return QLocalSocket::bytesToWrite(); }
inline bool  py_q_canReadLine() const { return QLocalSocket::canReadLine(); }
inline void py_q_close() { QLocalSocket::close(); }
inline bool  py_q_isSequential() const { return QLocalSocket::isSequential(); }
inline bool  py_q_open(QIODevice::OpenMode  openMode = QIODevice::ReadWrite) { return QLocalSocket::open(openMode); }
inline qint64  py_q_readData(char*  arg__1, qint64  arg__2) { return QLocalSocket::readData(arg__1, arg__2); }
inline bool  py_q_waitForBytesWritten(int  msecs = 30000) { return QLocalSocket::waitForBytesWritten(msecs); }
inline bool  py_q_waitForReadyRead(int  msecs = 30000) { return QLocalSocket::waitForReadyRead(msecs); }
inline qint64  py_q_writeData(const char*  arg__1, qint64  arg__2) { return QLocalSocket::writeData(arg__1, arg__2); }
};

class PythonQtWrapper_QLocalSocket : public QObject
{ Q_OBJECT
public:
Q_ENUMS(LocalSocketError LocalSocketState )
enum LocalSocketError{
  ConnectionRefusedError = QLocalSocket::ConnectionRefusedError,   PeerClosedError = QLocalSocket::PeerClosedError,   ServerNotFoundError = QLocalSocket::ServerNotFoundError,   SocketAccessError = QLocalSocket::SocketAccessError,   SocketResourceError = QLocalSocket::SocketResourceError,   SocketTimeoutError = QLocalSocket::SocketTimeoutError,   DatagramTooLargeError = QLocalSocket::DatagramTooLargeError,   ConnectionError = QLocalSocket::ConnectionError,   UnsupportedSocketOperationError = QLocalSocket::UnsupportedSocketOperationError,   UnknownSocketError = QLocalSocket::UnknownSocketError,   OperationError = QLocalSocket::OperationError};
enum LocalSocketState{
  UnconnectedState = QLocalSocket::UnconnectedState,   ConnectingState = QLocalSocket::ConnectingState,   ConnectedState = QLocalSocket::ConnectedState,   ClosingState = QLocalSocket::ClosingState};
public slots:
QLocalSocket* new_QLocalSocket(QObject*  parent = NULL);
void delete_QLocalSocket(QLocalSocket* obj) { delete obj; } 
   void abort(QLocalSocket* theWrappedObject);
   qint64  py_q_bytesAvailable(QLocalSocket* theWrappedObject) const{  return (((PythonQtPublicPromoter_QLocalSocket*)theWrappedObject)->py_q_bytesAvailable());}
   qint64  py_q_bytesToWrite(QLocalSocket* theWrappedObject) const{  return (((PythonQtPublicPromoter_QLocalSocket*)theWrappedObject)->py_q_bytesToWrite());}
   bool  py_q_canReadLine(QLocalSocket* theWrappedObject) const{  return (((PythonQtPublicPromoter_QLocalSocket*)theWrappedObject)->py_q_canReadLine());}
   void py_q_close(QLocalSocket* theWrappedObject){  (((PythonQtPublicPromoter_QLocalSocket*)theWrappedObject)->py_q_close());}
   void connectToServer(QLocalSocket* theWrappedObject, QIODevice::OpenMode  openMode = QIODevice::ReadWrite);
   void connectToServer(QLocalSocket* theWrappedObject, const QString&  name, QIODevice::OpenMode  openMode = QIODevice::ReadWrite);
   void disconnectFromServer(QLocalSocket* theWrappedObject);
   QLocalSocket::LocalSocketError  error(QLocalSocket* theWrappedObject) const;
   bool  flush(QLocalSocket* theWrappedObject);
   QString  fullServerName(QLocalSocket* theWrappedObject) const;
   bool  py_q_isSequential(QLocalSocket* theWrappedObject) const{  return (((PythonQtPublicPromoter_QLocalSocket*)theWrappedObject)->py_q_isSequential());}
   bool  isValid(QLocalSocket* theWrappedObject) const;
   bool  py_q_open(QLocalSocket* theWrappedObject, QIODevice::OpenMode  openMode = QIODevice::ReadWrite){  return (((PythonQtPublicPromoter_QLocalSocket*)theWrappedObject)->py_q_open(openMode));}
   qint64  readBufferSize(QLocalSocket* theWrappedObject) const;
   qint64  py_q_readData(QLocalSocket* theWrappedObject, char*  arg__1, qint64  arg__2){  return (((PythonQtPublicPromoter_QLocalSocket*)theWrappedObject)->py_q_readData(arg__1, arg__2));}
   QString  serverName(QLocalSocket* theWrappedObject) const;
   void setReadBufferSize(QLocalSocket* theWrappedObject, qint64  size);
   void setServerName(QLocalSocket* theWrappedObject, const QString&  name);
   bool  setSocketDescriptor(QLocalSocket* theWrappedObject, qintptr  socketDescriptor, QLocalSocket::LocalSocketState  socketState = QLocalSocket::ConnectedState, QIODevice::OpenMode  openMode = QIODevice::ReadWrite);
   qintptr  socketDescriptor(QLocalSocket* theWrappedObject) const;
   QLocalSocket::LocalSocketState  state(QLocalSocket* theWrappedObject) const;
   bool  py_q_waitForBytesWritten(QLocalSocket* theWrappedObject, int  msecs = 30000){  return (((PythonQtPublicPromoter_QLocalSocket*)theWrappedObject)->py_q_waitForBytesWritten(msecs));}
   bool  waitForConnected(QLocalSocket* theWrappedObject, int  msecs = 30000);
   bool  waitForDisconnected(QLocalSocket* theWrappedObject, int  msecs = 30000);
   bool  py_q_waitForReadyRead(QLocalSocket* theWrappedObject, int  msecs = 30000){  return (((PythonQtPublicPromoter_QLocalSocket*)theWrappedObject)->py_q_waitForReadyRead(msecs));}
   qint64  py_q_writeData(QLocalSocket* theWrappedObject, const char*  arg__1, qint64  arg__2){  return (((PythonQtPublicPromoter_QLocalSocket*)theWrappedObject)->py_q_writeData(arg__1, arg__2));}
    bool __nonzero__(QLocalSocket* obj) { return obj->isValid(); }
};





class PythonQtShell_QNetworkAccessManager : public QNetworkAccessManager
{
public:
    PythonQtShell_QNetworkAccessManager(QObject*  parent = NULL):QNetworkAccessManager(parent),_wrapper(NULL) {};

   ~PythonQtShell_QNetworkAccessManager();

virtual void childEvent(QChildEvent*  event);
virtual QNetworkReply*  createRequest(QNetworkAccessManager::Operation  op, const QNetworkRequest&  request, QIODevice*  outgoingData = NULL);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QNetworkAccessManager : public QNetworkAccessManager
{ public:
inline QNetworkReply*  promoted_createRequest(QNetworkAccessManager::Operation  op, const QNetworkRequest&  request, QIODevice*  outgoingData = NULL) { return this->createRequest(op, request, outgoingData); }
inline QStringList  promoted_supportedSchemesImplementation() const { return this->supportedSchemesImplementation(); }
inline QNetworkReply*  py_q_createRequest(QNetworkAccessManager::Operation  op, const QNetworkRequest&  request, QIODevice*  outgoingData = NULL) { return QNetworkAccessManager::createRequest(op, request, outgoingData); }
};

class PythonQtWrapper_QNetworkAccessManager : public QObject
{ Q_OBJECT
public:
Q_ENUMS( Operation )
enum Operation{
  HeadOperation = QNetworkAccessManager::HeadOperation,   GetOperation = QNetworkAccessManager::GetOperation,   PutOperation = QNetworkAccessManager::PutOperation,   PostOperation = QNetworkAccessManager::PostOperation,   DeleteOperation = QNetworkAccessManager::DeleteOperation,   CustomOperation = QNetworkAccessManager::CustomOperation,   UnknownOperation = QNetworkAccessManager::UnknownOperation};
public slots:
QNetworkAccessManager* new_QNetworkAccessManager(QObject*  parent = NULL);
void delete_QNetworkAccessManager(QNetworkAccessManager* obj) { delete obj; } 
   QAbstractNetworkCache*  cache(QNetworkAccessManager* theWrappedObject) const;
   void clearAccessCache(QNetworkAccessManager* theWrappedObject);
   void connectToHost(QNetworkAccessManager* theWrappedObject, const QString&  hostName, unsigned short  port = 80);
   void connectToHostEncrypted(QNetworkAccessManager* theWrappedObject, const QString&  hostName, unsigned short  port = 443, const QSslConfiguration&  sslConfiguration = QSslConfiguration::defaultConfiguration());
   QNetworkCookieJar*  cookieJar(QNetworkAccessManager* theWrappedObject) const;
   QNetworkReply*  createRequest(QNetworkAccessManager* theWrappedObject, QNetworkAccessManager::Operation  op, const QNetworkRequest&  request, QIODevice*  outgoingData = NULL);
   QNetworkReply*  py_q_createRequest(QNetworkAccessManager* theWrappedObject, QNetworkAccessManager::Operation  op, const QNetworkRequest&  request, QIODevice*  outgoingData = NULL){  return (((PythonQtPublicPromoter_QNetworkAccessManager*)theWrappedObject)->py_q_createRequest(op, request, outgoingData));}
   QNetworkReply*  deleteResource(QNetworkAccessManager* theWrappedObject, const QNetworkRequest&  request);
   QNetworkReply*  get(QNetworkAccessManager* theWrappedObject, const QNetworkRequest&  request);
   QNetworkReply*  head(QNetworkAccessManager* theWrappedObject, const QNetworkRequest&  request);
   QNetworkReply*  post(QNetworkAccessManager* theWrappedObject, const QNetworkRequest&  request, QHttpMultiPart*  multiPart);
   QNetworkReply*  post(QNetworkAccessManager* theWrappedObject, const QNetworkRequest&  request, QIODevice*  data);
   QNetworkReply*  post(QNetworkAccessManager* theWrappedObject, const QNetworkRequest&  request, const QByteArray&  data);
   QNetworkProxy  proxy(QNetworkAccessManager* theWrappedObject) const;
   QNetworkProxyFactory*  proxyFactory(QNetworkAccessManager* theWrappedObject) const;
   QNetworkReply*  put(QNetworkAccessManager* theWrappedObject, const QNetworkRequest&  request, QHttpMultiPart*  multiPart);
   QNetworkReply*  put(QNetworkAccessManager* theWrappedObject, const QNetworkRequest&  request, QIODevice*  data);
   QNetworkReply*  put(QNetworkAccessManager* theWrappedObject, const QNetworkRequest&  request, const QByteArray&  data);
   QNetworkReply*  sendCustomRequest(QNetworkAccessManager* theWrappedObject, const QNetworkRequest&  request, const QByteArray&  verb, QIODevice*  data = NULL);
   void setCache(QNetworkAccessManager* theWrappedObject, QAbstractNetworkCache*  cache);
   void setCookieJar(QNetworkAccessManager* theWrappedObject, QNetworkCookieJar*  cookieJar);
   void setProxy(QNetworkAccessManager* theWrappedObject, const QNetworkProxy&  proxy);
   void setProxyFactory(QNetworkAccessManager* theWrappedObject, QNetworkProxyFactory*  factory);
   QStringList  supportedSchemes(QNetworkAccessManager* theWrappedObject) const;
};





class PythonQtWrapper_QNetworkAddressEntry : public QObject
{ Q_OBJECT
public:
public slots:
QNetworkAddressEntry* new_QNetworkAddressEntry();
QNetworkAddressEntry* new_QNetworkAddressEntry(const QNetworkAddressEntry&  other);
void delete_QNetworkAddressEntry(QNetworkAddressEntry* obj) { delete obj; } 
   QHostAddress  broadcast(QNetworkAddressEntry* theWrappedObject) const;
   QHostAddress  ip(QNetworkAddressEntry* theWrappedObject) const;
   QHostAddress  netmask(QNetworkAddressEntry* theWrappedObject) const;
   bool  __ne__(QNetworkAddressEntry* theWrappedObject, const QNetworkAddressEntry&  other) const;
   bool  __eq__(QNetworkAddressEntry* theWrappedObject, const QNetworkAddressEntry&  other) const;
   int  prefixLength(QNetworkAddressEntry* theWrappedObject) const;
   void setBroadcast(QNetworkAddressEntry* theWrappedObject, const QHostAddress&  newBroadcast);
   void setIp(QNetworkAddressEntry* theWrappedObject, const QHostAddress&  newIp);
   void setNetmask(QNetworkAddressEntry* theWrappedObject, const QHostAddress&  newNetmask);
   void setPrefixLength(QNetworkAddressEntry* theWrappedObject, int  length);
   void swap(QNetworkAddressEntry* theWrappedObject, QNetworkAddressEntry&  other);
};





class PythonQtWrapper_QNetworkCacheMetaData : public QObject
{ Q_OBJECT
public:
public slots:
QNetworkCacheMetaData* new_QNetworkCacheMetaData();
QNetworkCacheMetaData* new_QNetworkCacheMetaData(const QNetworkCacheMetaData&  other);
void delete_QNetworkCacheMetaData(QNetworkCacheMetaData* obj) { delete obj; } 
   QHash<QNetworkRequest::Attribute , QVariant >  attributes(QNetworkCacheMetaData* theWrappedObject) const;
   QDateTime  expirationDate(QNetworkCacheMetaData* theWrappedObject) const;
   bool  isValid(QNetworkCacheMetaData* theWrappedObject) const;
   QDateTime  lastModified(QNetworkCacheMetaData* theWrappedObject) const;
   bool  __ne__(QNetworkCacheMetaData* theWrappedObject, const QNetworkCacheMetaData&  other) const;
   void writeTo(QNetworkCacheMetaData* theWrappedObject, QDataStream&  arg__1);
   bool  __eq__(QNetworkCacheMetaData* theWrappedObject, const QNetworkCacheMetaData&  other) const;
   void readFrom(QNetworkCacheMetaData* theWrappedObject, QDataStream&  arg__1);
   QList<QPair<QByteArray , QByteArray >  >  rawHeaders(QNetworkCacheMetaData* theWrappedObject) const;
   bool  saveToDisk(QNetworkCacheMetaData* theWrappedObject) const;
   void setAttributes(QNetworkCacheMetaData* theWrappedObject, const QHash<QNetworkRequest::Attribute , QVariant >&  attributes);
   void setExpirationDate(QNetworkCacheMetaData* theWrappedObject, const QDateTime&  dateTime);
   void setLastModified(QNetworkCacheMetaData* theWrappedObject, const QDateTime&  dateTime);
   void setRawHeaders(QNetworkCacheMetaData* theWrappedObject, const QList<QPair<QByteArray , QByteArray >  >&  headers);
   void setSaveToDisk(QNetworkCacheMetaData* theWrappedObject, bool  allow);
   void setUrl(QNetworkCacheMetaData* theWrappedObject, const QUrl&  url);
   void swap(QNetworkCacheMetaData* theWrappedObject, QNetworkCacheMetaData&  other);
   QUrl  url(QNetworkCacheMetaData* theWrappedObject) const;
    bool __nonzero__(QNetworkCacheMetaData* obj) { return obj->isValid(); }
};


class PythonQtWrapper_QNetworkCookie : public QObject
{ Q_OBJECT
public:
Q_ENUMS(RawForm )
enum RawForm{
  NameAndValueOnly = QNetworkCookie::NameAndValueOnly,   Full = QNetworkCookie::Full};
public slots:
QNetworkCookie* new_QNetworkCookie(const QByteArray&  name = QByteArray(), const QByteArray&  value = QByteArray());
QNetworkCookie* new_QNetworkCookie(const QNetworkCookie&  other);
void delete_QNetworkCookie(QNetworkCookie* obj) { delete obj; } 
   QString  domain(QNetworkCookie* theWrappedObject) const;
   QDateTime  expirationDate(QNetworkCookie* theWrappedObject) const;
   bool  hasSameIdentifier(QNetworkCookie* theWrappedObject, const QNetworkCookie&  other) const;
   bool  isHttpOnly(QNetworkCookie* theWrappedObject) const;
   bool  isSecure(QNetworkCookie* theWrappedObject) const;
   bool  isSessionCookie(QNetworkCookie* theWrappedObject) const;
   QByteArray  name(QNetworkCookie* theWrappedObject) const;
   void normalize(QNetworkCookie* theWrappedObject, const QUrl&  url);
   bool  __ne__(QNetworkCookie* theWrappedObject, const QNetworkCookie&  other) const;
   bool  __eq__(QNetworkCookie* theWrappedObject, const QNetworkCookie&  other) const;
   QList<QNetworkCookie >  static_QNetworkCookie_parseCookies(const QByteArray&  cookieString);
   QString  path(QNetworkCookie* theWrappedObject) const;
   void setDomain(QNetworkCookie* theWrappedObject, const QString&  domain);
   void setExpirationDate(QNetworkCookie* theWrappedObject, const QDateTime&  date);
   void setHttpOnly(QNetworkCookie* theWrappedObject, bool  enable);
   void setName(QNetworkCookie* theWrappedObject, const QByteArray&  cookieName);
   void setPath(QNetworkCookie* theWrappedObject, const QString&  path);
   void setSecure(QNetworkCookie* theWrappedObject, bool  enable);
   void setValue(QNetworkCookie* theWrappedObject, const QByteArray&  value);
   void swap(QNetworkCookie* theWrappedObject, QNetworkCookie&  other);
   QByteArray  toRawForm(QNetworkCookie* theWrappedObject, QNetworkCookie::RawForm  form = QNetworkCookie::Full) const;
   QByteArray  value(QNetworkCookie* theWrappedObject) const;
    QString py_toString(QNetworkCookie*);
};





class PythonQtShell_QNetworkCookieJar : public QNetworkCookieJar
{
public:
    PythonQtShell_QNetworkCookieJar(QObject*  parent = NULL):QNetworkCookieJar(parent),_wrapper(NULL) {};

   ~PythonQtShell_QNetworkCookieJar();

virtual void childEvent(QChildEvent*  event);
virtual QList<QNetworkCookie >  cookiesForUrl(const QUrl&  url) const;
virtual void customEvent(QEvent*  event);
virtual bool  deleteCookie(const QNetworkCookie&  cookie);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual bool  insertCookie(const QNetworkCookie&  cookie);
virtual bool  setCookiesFromUrl(const QList<QNetworkCookie >&  cookieList, const QUrl&  url);
virtual void timerEvent(QTimerEvent*  event);
virtual bool  updateCookie(const QNetworkCookie&  cookie);
virtual bool  validateCookie(const QNetworkCookie&  cookie, const QUrl&  url) const;

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QNetworkCookieJar : public QNetworkCookieJar
{ public:
inline QList<QNetworkCookie >  promoted_allCookies() const { return this->allCookies(); }
inline void promoted_setAllCookies(const QList<QNetworkCookie >&  cookieList) { this->setAllCookies(cookieList); }
inline bool  promoted_validateCookie(const QNetworkCookie&  cookie, const QUrl&  url) const { return this->validateCookie(cookie, url); }
inline QList<QNetworkCookie >  py_q_cookiesForUrl(const QUrl&  url) const { return QNetworkCookieJar::cookiesForUrl(url); }
inline bool  py_q_deleteCookie(const QNetworkCookie&  cookie) { return QNetworkCookieJar::deleteCookie(cookie); }
inline bool  py_q_insertCookie(const QNetworkCookie&  cookie) { return QNetworkCookieJar::insertCookie(cookie); }
inline bool  py_q_setCookiesFromUrl(const QList<QNetworkCookie >&  cookieList, const QUrl&  url) { return QNetworkCookieJar::setCookiesFromUrl(cookieList, url); }
inline bool  py_q_updateCookie(const QNetworkCookie&  cookie) { return QNetworkCookieJar::updateCookie(cookie); }
inline bool  py_q_validateCookie(const QNetworkCookie&  cookie, const QUrl&  url) const { return QNetworkCookieJar::validateCookie(cookie, url); }
};

class PythonQtWrapper_QNetworkCookieJar : public QObject
{ Q_OBJECT
public:
public slots:
QNetworkCookieJar* new_QNetworkCookieJar(QObject*  parent = NULL);
void delete_QNetworkCookieJar(QNetworkCookieJar* obj) { delete obj; } 
   QList<QNetworkCookie >  allCookies(QNetworkCookieJar* theWrappedObject) const;
   QList<QNetworkCookie >  cookiesForUrl(QNetworkCookieJar* theWrappedObject, const QUrl&  url) const;
   QList<QNetworkCookie >  py_q_cookiesForUrl(QNetworkCookieJar* theWrappedObject, const QUrl&  url) const{  return (((PythonQtPublicPromoter_QNetworkCookieJar*)theWrappedObject)->py_q_cookiesForUrl(url));}
   bool  deleteCookie(QNetworkCookieJar* theWrappedObject, const QNetworkCookie&  cookie);
   bool  py_q_deleteCookie(QNetworkCookieJar* theWrappedObject, const QNetworkCookie&  cookie){  return (((PythonQtPublicPromoter_QNetworkCookieJar*)theWrappedObject)->py_q_deleteCookie(cookie));}
   bool  insertCookie(QNetworkCookieJar* theWrappedObject, const QNetworkCookie&  cookie);
   bool  py_q_insertCookie(QNetworkCookieJar* theWrappedObject, const QNetworkCookie&  cookie){  return (((PythonQtPublicPromoter_QNetworkCookieJar*)theWrappedObject)->py_q_insertCookie(cookie));}
   void setAllCookies(QNetworkCookieJar* theWrappedObject, const QList<QNetworkCookie >&  cookieList);
   bool  setCookiesFromUrl(QNetworkCookieJar* theWrappedObject, const QList<QNetworkCookie >&  cookieList, const QUrl&  url);
   bool  py_q_setCookiesFromUrl(QNetworkCookieJar* theWrappedObject, const QList<QNetworkCookie >&  cookieList, const QUrl&  url){  return (((PythonQtPublicPromoter_QNetworkCookieJar*)theWrappedObject)->py_q_setCookiesFromUrl(cookieList, url));}
   bool  updateCookie(QNetworkCookieJar* theWrappedObject, const QNetworkCookie&  cookie);
   bool  py_q_updateCookie(QNetworkCookieJar* theWrappedObject, const QNetworkCookie&  cookie){  return (((PythonQtPublicPromoter_QNetworkCookieJar*)theWrappedObject)->py_q_updateCookie(cookie));}
   bool  validateCookie(QNetworkCookieJar* theWrappedObject, const QNetworkCookie&  cookie, const QUrl&  url) const;
   bool  py_q_validateCookie(QNetworkCookieJar* theWrappedObject, const QNetworkCookie&  cookie, const QUrl&  url) const{  return (((PythonQtPublicPromoter_QNetworkCookieJar*)theWrappedObject)->py_q_validateCookie(cookie, url));}
};





class PythonQtShell_QNetworkDiskCache : public QNetworkDiskCache
{
public:
    PythonQtShell_QNetworkDiskCache(QObject*  parent = NULL):QNetworkDiskCache(parent),_wrapper(NULL) {};

   ~PythonQtShell_QNetworkDiskCache();

virtual qint64  cacheSize() const;
virtual void childEvent(QChildEvent*  event);
virtual void clear();
virtual void customEvent(QEvent*  event);
virtual QIODevice*  data(const QUrl&  url);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual qint64  expire();
virtual void insert(QIODevice*  device);
virtual QNetworkCacheMetaData  metaData(const QUrl&  url);
virtual QIODevice*  prepare(const QNetworkCacheMetaData&  metaData);
virtual bool  remove(const QUrl&  url);
virtual void timerEvent(QTimerEvent*  event);
virtual void updateMetaData(const QNetworkCacheMetaData&  metaData);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QNetworkDiskCache : public QNetworkDiskCache
{ public:
inline qint64  promoted_expire() { return this->expire(); }
inline qint64  py_q_cacheSize() const { return QNetworkDiskCache::cacheSize(); }
inline void py_q_clear() { QNetworkDiskCache::clear(); }
inline QIODevice*  py_q_data(const QUrl&  url) { return QNetworkDiskCache::data(url); }
inline qint64  py_q_expire() { return QNetworkDiskCache::expire(); }
inline void py_q_insert(QIODevice*  device) { QNetworkDiskCache::insert(device); }
inline QNetworkCacheMetaData  py_q_metaData(const QUrl&  url) { return QNetworkDiskCache::metaData(url); }
inline QIODevice*  py_q_prepare(const QNetworkCacheMetaData&  metaData) { return QNetworkDiskCache::prepare(metaData); }
inline bool  py_q_remove(const QUrl&  url) { return QNetworkDiskCache::remove(url); }
inline void py_q_updateMetaData(const QNetworkCacheMetaData&  metaData) { QNetworkDiskCache::updateMetaData(metaData); }
};

class PythonQtWrapper_QNetworkDiskCache : public QObject
{ Q_OBJECT
public:
public slots:
QNetworkDiskCache* new_QNetworkDiskCache(QObject*  parent = NULL);
void delete_QNetworkDiskCache(QNetworkDiskCache* obj) { delete obj; } 
   QString  cacheDirectory(QNetworkDiskCache* theWrappedObject) const;
   qint64  py_q_cacheSize(QNetworkDiskCache* theWrappedObject) const{  return (((PythonQtPublicPromoter_QNetworkDiskCache*)theWrappedObject)->py_q_cacheSize());}
   void py_q_clear(QNetworkDiskCache* theWrappedObject){  (((PythonQtPublicPromoter_QNetworkDiskCache*)theWrappedObject)->py_q_clear());}
   QIODevice*  py_q_data(QNetworkDiskCache* theWrappedObject, const QUrl&  url){  return (((PythonQtPublicPromoter_QNetworkDiskCache*)theWrappedObject)->py_q_data(url));}
   qint64  expire(QNetworkDiskCache* theWrappedObject);
   qint64  py_q_expire(QNetworkDiskCache* theWrappedObject){  return (((PythonQtPublicPromoter_QNetworkDiskCache*)theWrappedObject)->py_q_expire());}
   QNetworkCacheMetaData  fileMetaData(QNetworkDiskCache* theWrappedObject, const QString&  fileName) const;
   void py_q_insert(QNetworkDiskCache* theWrappedObject, QIODevice*  device){  (((PythonQtPublicPromoter_QNetworkDiskCache*)theWrappedObject)->py_q_insert(device));}
   qint64  maximumCacheSize(QNetworkDiskCache* theWrappedObject) const;
   QNetworkCacheMetaData  py_q_metaData(QNetworkDiskCache* theWrappedObject, const QUrl&  url){  return (((PythonQtPublicPromoter_QNetworkDiskCache*)theWrappedObject)->py_q_metaData(url));}
   QIODevice*  py_q_prepare(QNetworkDiskCache* theWrappedObject, const QNetworkCacheMetaData&  metaData){  return (((PythonQtPublicPromoter_QNetworkDiskCache*)theWrappedObject)->py_q_prepare(metaData));}
   bool  py_q_remove(QNetworkDiskCache* theWrappedObject, const QUrl&  url){  return (((PythonQtPublicPromoter_QNetworkDiskCache*)theWrappedObject)->py_q_remove(url));}
   void setCacheDirectory(QNetworkDiskCache* theWrappedObject, const QString&  cacheDir);
   void setMaximumCacheSize(QNetworkDiskCache* theWrappedObject, qint64  size);
   void py_q_updateMetaData(QNetworkDiskCache* theWrappedObject, const QNetworkCacheMetaData&  metaData){  (((PythonQtPublicPromoter_QNetworkDiskCache*)theWrappedObject)->py_q_updateMetaData(metaData));}
};





class PythonQtWrapper_QNetworkInterface : public QObject
{ Q_OBJECT
public:
Q_ENUMS(InterfaceFlag )
Q_FLAGS(InterfaceFlags )
enum InterfaceFlag{
  IsUp = QNetworkInterface::IsUp,   IsRunning = QNetworkInterface::IsRunning,   CanBroadcast = QNetworkInterface::CanBroadcast,   IsLoopBack = QNetworkInterface::IsLoopBack,   IsPointToPoint = QNetworkInterface::IsPointToPoint,   CanMulticast = QNetworkInterface::CanMulticast};
Q_DECLARE_FLAGS(InterfaceFlags, InterfaceFlag)
public slots:
QNetworkInterface* new_QNetworkInterface();
QNetworkInterface* new_QNetworkInterface(const QNetworkInterface&  other);
void delete_QNetworkInterface(QNetworkInterface* obj) { delete obj; } 
   QList<QNetworkAddressEntry >  addressEntries(QNetworkInterface* theWrappedObject) const;
   QList<QHostAddress >  static_QNetworkInterface_allAddresses();
   QList<QNetworkInterface >  static_QNetworkInterface_allInterfaces();
   QNetworkInterface::InterfaceFlags  flags(QNetworkInterface* theWrappedObject) const;
   QString  hardwareAddress(QNetworkInterface* theWrappedObject) const;
   QString  humanReadableName(QNetworkInterface* theWrappedObject) const;
   int  index(QNetworkInterface* theWrappedObject) const;
   QNetworkInterface  static_QNetworkInterface_interfaceFromIndex(int  index);
   QNetworkInterface  static_QNetworkInterface_interfaceFromName(const QString&  name);
   bool  isValid(QNetworkInterface* theWrappedObject) const;
   QString  name(QNetworkInterface* theWrappedObject) const;
   void swap(QNetworkInterface* theWrappedObject, QNetworkInterface&  other);
    QString py_toString(QNetworkInterface*);
    bool __nonzero__(QNetworkInterface* obj) { return obj->isValid(); }
};





class PythonQtWrapper_QNetworkProxy : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Capability ProxyType )
Q_FLAGS(Capabilities )
enum Capability{
  TunnelingCapability = QNetworkProxy::TunnelingCapability,   ListeningCapability = QNetworkProxy::ListeningCapability,   UdpTunnelingCapability = QNetworkProxy::UdpTunnelingCapability,   CachingCapability = QNetworkProxy::CachingCapability,   HostNameLookupCapability = QNetworkProxy::HostNameLookupCapability};
enum ProxyType{
  DefaultProxy = QNetworkProxy::DefaultProxy,   Socks5Proxy = QNetworkProxy::Socks5Proxy,   NoProxy = QNetworkProxy::NoProxy,   HttpProxy = QNetworkProxy::HttpProxy,   HttpCachingProxy = QNetworkProxy::HttpCachingProxy,   FtpCachingProxy = QNetworkProxy::FtpCachingProxy};
Q_DECLARE_FLAGS(Capabilities, Capability)
public slots:
QNetworkProxy* new_QNetworkProxy();
QNetworkProxy* new_QNetworkProxy(QNetworkProxy::ProxyType  type, const QString&  hostName = QString(), unsigned short  port = 0, const QString&  user = QString(), const QString&  password = QString());
QNetworkProxy* new_QNetworkProxy(const QNetworkProxy&  other);
void delete_QNetworkProxy(QNetworkProxy* obj) { delete obj; } 
   QNetworkProxy  static_QNetworkProxy_applicationProxy();
   QNetworkProxy::Capabilities  capabilities(QNetworkProxy* theWrappedObject) const;
   bool  hasRawHeader(QNetworkProxy* theWrappedObject, const QByteArray&  headerName) const;
   QVariant  header(QNetworkProxy* theWrappedObject, QNetworkRequest::KnownHeaders  header) const;
   QString  hostName(QNetworkProxy* theWrappedObject) const;
   bool  isCachingProxy(QNetworkProxy* theWrappedObject) const;
   bool  isTransparentProxy(QNetworkProxy* theWrappedObject) const;
   bool  __ne__(QNetworkProxy* theWrappedObject, const QNetworkProxy&  other) const;
   bool  __eq__(QNetworkProxy* theWrappedObject, const QNetworkProxy&  other) const;
   QString  password(QNetworkProxy* theWrappedObject) const;
   unsigned short  port(QNetworkProxy* theWrappedObject) const;
   QByteArray  rawHeader(QNetworkProxy* theWrappedObject, const QByteArray&  headerName) const;
   QList<QByteArray >  rawHeaderList(QNetworkProxy* theWrappedObject) const;
   void static_QNetworkProxy_setApplicationProxy(const QNetworkProxy&  proxy);
   void setCapabilities(QNetworkProxy* theWrappedObject, QNetworkProxy::Capabilities  capab);
   void setHeader(QNetworkProxy* theWrappedObject, QNetworkRequest::KnownHeaders  header, const QVariant&  value);
   void setHostName(QNetworkProxy* theWrappedObject, const QString&  hostName);
   void setPassword(QNetworkProxy* theWrappedObject, const QString&  password);
   void setPort(QNetworkProxy* theWrappedObject, unsigned short  port);
   void setRawHeader(QNetworkProxy* theWrappedObject, const QByteArray&  headerName, const QByteArray&  value);
   void setType(QNetworkProxy* theWrappedObject, QNetworkProxy::ProxyType  type);
   void setUser(QNetworkProxy* theWrappedObject, const QString&  userName);
   void swap(QNetworkProxy* theWrappedObject, QNetworkProxy&  other);
   QNetworkProxy::ProxyType  type(QNetworkProxy* theWrappedObject) const;
   QString  user(QNetworkProxy* theWrappedObject) const;
    QString py_toString(QNetworkProxy*);
};





class PythonQtShell_QNetworkProxyFactory : public QNetworkProxyFactory
{
public:
    PythonQtShell_QNetworkProxyFactory():QNetworkProxyFactory(),_wrapper(NULL) {};

   ~PythonQtShell_QNetworkProxyFactory();

virtual QList<QNetworkProxy >  queryProxy(const QNetworkProxyQuery&  query = QNetworkProxyQuery());

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QNetworkProxyFactory : public QNetworkProxyFactory
{ public:
inline QList<QNetworkProxy >  py_q_queryProxy(const QNetworkProxyQuery&  query = QNetworkProxyQuery()) { return this->queryProxy(query); }
};

class PythonQtWrapper_QNetworkProxyFactory : public QObject
{ Q_OBJECT
public:
public slots:
QNetworkProxyFactory* new_QNetworkProxyFactory();
void delete_QNetworkProxyFactory(QNetworkProxyFactory* obj) { delete obj; } 
   QList<QNetworkProxy >  static_QNetworkProxyFactory_proxyForQuery(const QNetworkProxyQuery&  query);
   QList<QNetworkProxy >  queryProxy(QNetworkProxyFactory* theWrappedObject, const QNetworkProxyQuery&  query = QNetworkProxyQuery());
   QList<QNetworkProxy >  py_q_queryProxy(QNetworkProxyFactory* theWrappedObject, const QNetworkProxyQuery&  query = QNetworkProxyQuery()){  return (((PythonQtPublicPromoter_QNetworkProxyFactory*)theWrappedObject)->py_q_queryProxy(query));}
   void static_QNetworkProxyFactory_setApplicationProxyFactory(QNetworkProxyFactory*  factory);
   void static_QNetworkProxyFactory_setUseSystemConfiguration(bool  enable);
   QList<QNetworkProxy >  static_QNetworkProxyFactory_systemProxyForQuery(const QNetworkProxyQuery&  query = QNetworkProxyQuery());
};





class PythonQtWrapper_QNetworkProxyQuery : public QObject
{ Q_OBJECT
public:
Q_ENUMS(QueryType )
enum QueryType{
  TcpSocket = QNetworkProxyQuery::TcpSocket,   UdpSocket = QNetworkProxyQuery::UdpSocket,   TcpServer = QNetworkProxyQuery::TcpServer,   UrlRequest = QNetworkProxyQuery::UrlRequest};
public slots:
QNetworkProxyQuery* new_QNetworkProxyQuery();
QNetworkProxyQuery* new_QNetworkProxyQuery(const QNetworkProxyQuery&  other);
QNetworkProxyQuery* new_QNetworkProxyQuery(const QString&  hostname, int  port, const QString&  protocolTag = QString(), QNetworkProxyQuery::QueryType  queryType = QNetworkProxyQuery::TcpSocket);
QNetworkProxyQuery* new_QNetworkProxyQuery(const QUrl&  requestUrl, QNetworkProxyQuery::QueryType  queryType = QNetworkProxyQuery::UrlRequest);
QNetworkProxyQuery* new_QNetworkProxyQuery(unsigned short  bindPort, const QString&  protocolTag = QString(), QNetworkProxyQuery::QueryType  queryType = QNetworkProxyQuery::TcpServer);
void delete_QNetworkProxyQuery(QNetworkProxyQuery* obj) { delete obj; } 
   int  localPort(QNetworkProxyQuery* theWrappedObject) const;
   bool  __ne__(QNetworkProxyQuery* theWrappedObject, const QNetworkProxyQuery&  other) const;
   bool  __eq__(QNetworkProxyQuery* theWrappedObject, const QNetworkProxyQuery&  other) const;
   QString  peerHostName(QNetworkProxyQuery* theWrappedObject) const;
   int  peerPort(QNetworkProxyQuery* theWrappedObject) const;
   QString  protocolTag(QNetworkProxyQuery* theWrappedObject) const;
   QNetworkProxyQuery::QueryType  queryType(QNetworkProxyQuery* theWrappedObject) const;
   void setLocalPort(QNetworkProxyQuery* theWrappedObject, int  port);
   void setPeerHostName(QNetworkProxyQuery* theWrappedObject, const QString&  hostname);
   void setPeerPort(QNetworkProxyQuery* theWrappedObject, int  port);
   void setProtocolTag(QNetworkProxyQuery* theWrappedObject, const QString&  protocolTag);
   void setQueryType(QNetworkProxyQuery* theWrappedObject, QNetworkProxyQuery::QueryType  type);
   void setUrl(QNetworkProxyQuery* theWrappedObject, const QUrl&  url);
   void swap(QNetworkProxyQuery* theWrappedObject, QNetworkProxyQuery&  other);
   QUrl  url(QNetworkProxyQuery* theWrappedObject) const;
};





class PythonQtShell_QNetworkReply : public QNetworkReply
{
public:
    PythonQtShell_QNetworkReply(QObject*  parent = NULL):QNetworkReply(parent),_wrapper(NULL) {};

   ~PythonQtShell_QNetworkReply();

virtual void abort();
virtual bool  atEnd() const;
virtual qint64  bytesAvailable() const;
virtual qint64  bytesToWrite() const;
virtual bool  canReadLine() const;
virtual void childEvent(QChildEvent*  event);
virtual void close();
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void ignoreSslErrors();
virtual void ignoreSslErrorsImplementation(const QList<QSslError >&  arg__1);
virtual bool  isSequential() const;
virtual bool  open(QIODevice::OpenMode  mode);
virtual qint64  pos() const;
virtual qint64  readData(char*  data, qint64  maxlen);
virtual qint64  readLineData(char*  data, qint64  maxlen);
virtual bool  reset();
virtual bool  seek(qint64  pos);
virtual void setReadBufferSize(qint64  size);
virtual void setSslConfigurationImplementation(const QSslConfiguration&  arg__1);
virtual qint64  size() const;
virtual void sslConfigurationImplementation(QSslConfiguration&  arg__1) const;
virtual void timerEvent(QTimerEvent*  event);
virtual bool  waitForBytesWritten(int  msecs);
virtual bool  waitForReadyRead(int  msecs);
virtual qint64  writeData(const char*  data, qint64  len);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QNetworkReply : public QNetworkReply
{ public:
inline void promoted_ignoreSslErrorsImplementation(const QList<QSslError >&  arg__1) { this->ignoreSslErrorsImplementation(arg__1); }
inline void promoted_setAttribute(QNetworkRequest::Attribute  code, const QVariant&  value) { this->setAttribute(code, value); }
inline void promoted_setError(QNetworkReply::NetworkError  errorCode, const QString&  errorString) { this->setError(errorCode, errorString); }
inline void promoted_setFinished(bool  arg__1) { this->setFinished(arg__1); }
inline void promoted_setHeader(QNetworkRequest::KnownHeaders  header, const QVariant&  value) { this->setHeader(header, value); }
inline void promoted_setOperation(QNetworkAccessManager::Operation  operation) { this->setOperation(operation); }
inline void promoted_setRawHeader(const QByteArray&  headerName, const QByteArray&  value) { this->setRawHeader(headerName, value); }
inline void promoted_setRequest(const QNetworkRequest&  request) { this->setRequest(request); }
inline void promoted_setSslConfigurationImplementation(const QSslConfiguration&  arg__1) { this->setSslConfigurationImplementation(arg__1); }
inline void promoted_setUrl(const QUrl&  url) { this->setUrl(url); }
inline void promoted_sslConfigurationImplementation(QSslConfiguration&  arg__1) const { this->sslConfigurationImplementation(arg__1); }
inline qint64  promoted_writeData(const char*  data, qint64  len) { return this->writeData(data, len); }
inline void py_q_abort() { this->abort(); }
inline void py_q_close() { QNetworkReply::close(); }
inline void py_q_ignoreSslErrors() { QNetworkReply::ignoreSslErrors(); }
inline void py_q_ignoreSslErrorsImplementation(const QList<QSslError >&  arg__1) { QNetworkReply::ignoreSslErrorsImplementation(arg__1); }
inline bool  py_q_isSequential() const { return QNetworkReply::isSequential(); }
inline void py_q_setReadBufferSize(qint64  size) { QNetworkReply::setReadBufferSize(size); }
inline void py_q_setSslConfigurationImplementation(const QSslConfiguration&  arg__1) { QNetworkReply::setSslConfigurationImplementation(arg__1); }
inline void py_q_sslConfigurationImplementation(QSslConfiguration&  arg__1) const { QNetworkReply::sslConfigurationImplementation(arg__1); }
inline qint64  py_q_writeData(const char*  data, qint64  len) { return QNetworkReply::writeData(data, len); }
};

class PythonQtWrapper_QNetworkReply : public QObject
{ Q_OBJECT
public:
public slots:
QNetworkReply* new_QNetworkReply(QObject*  parent = NULL);
void delete_QNetworkReply(QNetworkReply* obj) { delete obj; } 
   void py_q_abort(QNetworkReply* theWrappedObject){  (((PythonQtPublicPromoter_QNetworkReply*)theWrappedObject)->py_q_abort());}
   QVariant  attribute(QNetworkReply* theWrappedObject, QNetworkRequest::Attribute  code) const;
   void py_q_close(QNetworkReply* theWrappedObject){  (((PythonQtPublicPromoter_QNetworkReply*)theWrappedObject)->py_q_close());}
   QNetworkReply::NetworkError  error(QNetworkReply* theWrappedObject) const;
   bool  hasRawHeader(QNetworkReply* theWrappedObject, const QByteArray&  headerName) const;
   QVariant  header(QNetworkReply* theWrappedObject, QNetworkRequest::KnownHeaders  header) const;
   void py_q_ignoreSslErrors(QNetworkReply* theWrappedObject){  (((PythonQtPublicPromoter_QNetworkReply*)theWrappedObject)->py_q_ignoreSslErrors());}
   void ignoreSslErrorsImplementation(QNetworkReply* theWrappedObject, const QList<QSslError >&  arg__1);
   void py_q_ignoreSslErrorsImplementation(QNetworkReply* theWrappedObject, const QList<QSslError >&  arg__1){  (((PythonQtPublicPromoter_QNetworkReply*)theWrappedObject)->py_q_ignoreSslErrorsImplementation(arg__1));}
   bool  isFinished(QNetworkReply* theWrappedObject) const;
   bool  isRunning(QNetworkReply* theWrappedObject) const;
   bool  py_q_isSequential(QNetworkReply* theWrappedObject) const{  return (((PythonQtPublicPromoter_QNetworkReply*)theWrappedObject)->py_q_isSequential());}
   QNetworkAccessManager*  manager(QNetworkReply* theWrappedObject) const;
   QNetworkAccessManager::Operation  operation(QNetworkReply* theWrappedObject) const;
   QByteArray  rawHeader(QNetworkReply* theWrappedObject, const QByteArray&  headerName) const;
   QList<QByteArray >  rawHeaderList(QNetworkReply* theWrappedObject) const;
   const QList<QPair<QByteArray , QByteArray >  >*  rawHeaderPairs(QNetworkReply* theWrappedObject) const;
   qint64  readBufferSize(QNetworkReply* theWrappedObject) const;
   QNetworkRequest  request(QNetworkReply* theWrappedObject) const;
   void setAttribute(QNetworkReply* theWrappedObject, QNetworkRequest::Attribute  code, const QVariant&  value);
   void setError(QNetworkReply* theWrappedObject, QNetworkReply::NetworkError  errorCode, const QString&  errorString);
   void setFinished(QNetworkReply* theWrappedObject, bool  arg__1);
   void setHeader(QNetworkReply* theWrappedObject, QNetworkRequest::KnownHeaders  header, const QVariant&  value);
   void setOperation(QNetworkReply* theWrappedObject, QNetworkAccessManager::Operation  operation);
   void setRawHeader(QNetworkReply* theWrappedObject, const QByteArray&  headerName, const QByteArray&  value);
   void setReadBufferSize(QNetworkReply* theWrappedObject, qint64  size);
   void py_q_setReadBufferSize(QNetworkReply* theWrappedObject, qint64  size){  (((PythonQtPublicPromoter_QNetworkReply*)theWrappedObject)->py_q_setReadBufferSize(size));}
   void setRequest(QNetworkReply* theWrappedObject, const QNetworkRequest&  request);
   void setSslConfigurationImplementation(QNetworkReply* theWrappedObject, const QSslConfiguration&  arg__1);
   void py_q_setSslConfigurationImplementation(QNetworkReply* theWrappedObject, const QSslConfiguration&  arg__1){  (((PythonQtPublicPromoter_QNetworkReply*)theWrappedObject)->py_q_setSslConfigurationImplementation(arg__1));}
   void setUrl(QNetworkReply* theWrappedObject, const QUrl&  url);
   void sslConfigurationImplementation(QNetworkReply* theWrappedObject, QSslConfiguration&  arg__1) const;
   void py_q_sslConfigurationImplementation(QNetworkReply* theWrappedObject, QSslConfiguration&  arg__1) const{  (((PythonQtPublicPromoter_QNetworkReply*)theWrappedObject)->py_q_sslConfigurationImplementation(arg__1));}
   QUrl  url(QNetworkReply* theWrappedObject) const;
   qint64  py_q_writeData(QNetworkReply* theWrappedObject, const char*  data, qint64  len){  return (((PythonQtPublicPromoter_QNetworkReply*)theWrappedObject)->py_q_writeData(data, len));}
};





class PythonQtWrapper_QNetworkRequest : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Attribute CacheLoadControl KnownHeaders LoadControl Priority )
enum Attribute{
HttpStatusCodeAttribute = QNetworkRequest::HttpStatusCodeAttribute,
HttpReasonPhraseAttribute = QNetworkRequest::HttpReasonPhraseAttribute,
RedirectionTargetAttribute = QNetworkRequest::RedirectionTargetAttribute,
ConnectionEncryptedAttribute = QNetworkRequest::ConnectionEncryptedAttribute,
CacheLoadControlAttribute = QNetworkRequest::CacheLoadControlAttribute,
CacheSaveControlAttribute = QNetworkRequest::CacheSaveControlAttribute,
SourceIsFromCacheAttribute = QNetworkRequest::SourceIsFromCacheAttribute,
DoNotBufferUploadDataAttribute = QNetworkRequest::DoNotBufferUploadDataAttribute,
HttpPipeliningAllowedAttribute = QNetworkRequest::HttpPipeliningAllowedAttribute,
HttpPipeliningWasUsedAttribute = QNetworkRequest::HttpPipeliningWasUsedAttribute,
CustomVerbAttribute = QNetworkRequest::CustomVerbAttribute,
CookieLoadControlAttribute = QNetworkRequest::CookieLoadControlAttribute,
AuthenticationReuseAttribute = QNetworkRequest::AuthenticationReuseAttribute,
CookieSaveControlAttribute = QNetworkRequest::CookieSaveControlAttribute,
MaximumDownloadBufferSizeAttribute = QNetworkRequest::MaximumDownloadBufferSizeAttribute,
DownloadBufferAttribute = QNetworkRequest::DownloadBufferAttribute,
SynchronousRequestAttribute = QNetworkRequest::SynchronousRequestAttribute,
BackgroundRequestAttribute = QNetworkRequest::BackgroundRequestAttribute,
EmitAllUploadProgressSignalsAttribute = QNetworkRequest::EmitAllUploadProgressSignalsAttribute,
Http2AllowedAttribute = QNetworkRequest::Http2AllowedAttribute,
Http2WasUsedAttribute = QNetworkRequest::Http2WasUsedAttribute,
OriginalContentLengthAttribute = QNetworkRequest::OriginalContentLengthAttribute,
RedirectPolicyAttribute = QNetworkRequest::RedirectPolicyAttribute,
Http2DirectAttribute = QNetworkRequest::Http2DirectAttribute,
ResourceTypeAttribute = QNetworkRequest::ResourceTypeAttribute,
AutoDeleteReplyOnFinishAttribute = QNetworkRequest::AutoDeleteReplyOnFinishAttribute,
User = QNetworkRequest::User,
UserMax = QNetworkRequest::UserMax};
enum CacheLoadControl{
  AlwaysNetwork = QNetworkRequest::AlwaysNetwork,   PreferNetwork = QNetworkRequest::PreferNetwork,   PreferCache = QNetworkRequest::PreferCache,   AlwaysCache = QNetworkRequest::AlwaysCache};
enum KnownHeaders{
  ContentTypeHeader = QNetworkRequest::ContentTypeHeader,   ContentLengthHeader = QNetworkRequest::ContentLengthHeader,   LocationHeader = QNetworkRequest::LocationHeader,   LastModifiedHeader = QNetworkRequest::LastModifiedHeader,   CookieHeader = QNetworkRequest::CookieHeader,   SetCookieHeader = QNetworkRequest::SetCookieHeader,   ContentDispositionHeader = QNetworkRequest::ContentDispositionHeader,   UserAgentHeader = QNetworkRequest::UserAgentHeader,   ServerHeader = QNetworkRequest::ServerHeader};
enum LoadControl{
  Automatic = QNetworkRequest::Automatic,   Manual = QNetworkRequest::Manual};
enum Priority{
  HighPriority = QNetworkRequest::HighPriority,   NormalPriority = QNetworkRequest::NormalPriority,   LowPriority = QNetworkRequest::LowPriority};
public slots:
QNetworkRequest* new_QNetworkRequest(const QNetworkRequest&  other);
QNetworkRequest* new_QNetworkRequest(const QUrl&  url = QUrl());
void delete_QNetworkRequest(QNetworkRequest* obj) { delete obj; } 
   QVariant  attribute(QNetworkRequest* theWrappedObject, QNetworkRequest::Attribute  code, const QVariant&  defaultValue = QVariant()) const;
   bool  hasRawHeader(QNetworkRequest* theWrappedObject, const QByteArray&  headerName) const;
   QVariant  header(QNetworkRequest* theWrappedObject, QNetworkRequest::KnownHeaders  header) const;
   int  maximumRedirectsAllowed(QNetworkRequest* theWrappedObject) const;
   bool  __ne__(QNetworkRequest* theWrappedObject, const QNetworkRequest&  other) const;
   bool  __eq__(QNetworkRequest* theWrappedObject, const QNetworkRequest&  other) const;
   QObject*  originatingObject(QNetworkRequest* theWrappedObject) const;
   QNetworkRequest::Priority  priority(QNetworkRequest* theWrappedObject) const;
   QByteArray  rawHeader(QNetworkRequest* theWrappedObject, const QByteArray&  headerName) const;
   QList<QByteArray >  rawHeaderList(QNetworkRequest* theWrappedObject) const;
   void setAttribute(QNetworkRequest* theWrappedObject, QNetworkRequest::Attribute  code, const QVariant&  value);
   void setHeader(QNetworkRequest* theWrappedObject, QNetworkRequest::KnownHeaders  header, const QVariant&  value);
   void setMaximumRedirectsAllowed(QNetworkRequest* theWrappedObject, int  maximumRedirectsAllowed);
   void setOriginatingObject(QNetworkRequest* theWrappedObject, QObject*  object);
   void setPriority(QNetworkRequest* theWrappedObject, QNetworkRequest::Priority  priority);
   void setRawHeader(QNetworkRequest* theWrappedObject, const QByteArray&  headerName, const QByteArray&  value);
   void setUrl(QNetworkRequest* theWrappedObject, const QUrl&  url);
   void swap(QNetworkRequest* theWrappedObject, QNetworkRequest&  other);
   QUrl  url(QNetworkRequest* theWrappedObject) const;
};


