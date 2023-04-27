#include <PythonQt.h>
#include <QObject>
#include <QVariant>
#include <qaction.h>
#include <qaudiobuffer.h>
#include <qbackingstore.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcamera.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qfont.h>
#include <qfontinfo.h>
#include <qfontmetrics.h>
#include <qgraphicseffect.h>
#include <qgraphicsitem.h>
#include <qgraphicsproxywidget.h>
#include <qgraphicsvideoitem.h>
#include <qicon.h>
#include <qimage.h>
#include <qiodevice.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmargins.h>
#include <qmediaplayer.h>
#include <qmediatimerange.h>
#include <qmetaobject.h>
#include <qnetworkrequest.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qrect.h>
#include <qregion.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstringlist.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qurl.h>
#include <qvideoframe.h>
#include <qvideowidget.h>
#include <qwidget.h>
#include <qwindow.h>




class PythonQtShell_QGraphicsVideoItem : public QGraphicsVideoItem
{
public:
    PythonQtShell_QGraphicsVideoItem(QGraphicsItem*  parent = NULL):QGraphicsVideoItem(parent),_wrapper(NULL) {};

   ~PythonQtShell_QGraphicsVideoItem();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  ev);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QGraphicsVideoItem : public QGraphicsVideoItem
{ public:
inline QVariant  promoted_itemChange(QGraphicsItem::GraphicsItemChange  change, const QVariant&  value) { return this->itemChange(change, value); }
inline void promoted_timerEvent(QTimerEvent*  event) { this->timerEvent(event); }
inline void py_q_timerEvent(QTimerEvent*  event) { QGraphicsVideoItem::timerEvent(event); }
};

class PythonQtWrapper_QGraphicsVideoItem : public QObject
{ Q_OBJECT
public:
public slots:
QGraphicsVideoItem* new_QGraphicsVideoItem(QGraphicsItem*  parent = NULL);
void delete_QGraphicsVideoItem(QGraphicsVideoItem* obj) { delete obj; } 
   Qt::AspectRatioMode  aspectRatioMode(QGraphicsVideoItem* theWrappedObject) const;
   QRectF  boundingRect(QGraphicsVideoItem* theWrappedObject) const;
   QVariant  itemChange(QGraphicsVideoItem* theWrappedObject, QGraphicsItem::GraphicsItemChange  change, const QVariant&  value);
   QSizeF  nativeSize(QGraphicsVideoItem* theWrappedObject) const;
   QPointF  offset(QGraphicsVideoItem* theWrappedObject) const;
   void paint(QGraphicsVideoItem* theWrappedObject, QPainter*  painter, const QStyleOptionGraphicsItem*  option, QWidget*  widget = NULL);
   void setAspectRatioMode(QGraphicsVideoItem* theWrappedObject, Qt::AspectRatioMode  mode);
   void setOffset(QGraphicsVideoItem* theWrappedObject, const QPointF&  offset);
   void setSize(QGraphicsVideoItem* theWrappedObject, const QSizeF&  size);
   QSizeF  size(QGraphicsVideoItem* theWrappedObject) const;
   void py_q_timerEvent(QGraphicsVideoItem* theWrappedObject, QTimerEvent*  event){  (((PythonQtPublicPromoter_QGraphicsVideoItem*)theWrappedObject)->py_q_timerEvent(event));}
};



class PythonQtShell_QMediaPlayer : public QMediaPlayer
{
public:
    PythonQtShell_QMediaPlayer(QObject*  parent = NULL):QMediaPlayer(parent),_wrapper(NULL) {};

   ~PythonQtShell_QMediaPlayer();

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

class PythonQtWrapper_QMediaPlayer : public QObject
{ Q_OBJECT
public slots:
QMediaPlayer* new_QMediaPlayer(QObject*  parent = NULL);
void delete_QMediaPlayer(QMediaPlayer* obj) { delete obj; } 
   qint64  duration(QMediaPlayer* theWrappedObject) const;
   QMediaPlayer::Error  error(QMediaPlayer* theWrappedObject) const;
   QString  errorString(QMediaPlayer* theWrappedObject) const;
   bool  isSeekable(QMediaPlayer* theWrappedObject) const;
   QMediaPlayer::MediaStatus  mediaStatus(QMediaPlayer* theWrappedObject) const;
   qreal  playbackRate(QMediaPlayer* theWrappedObject) const;
   qint64  position(QMediaPlayer* theWrappedObject) const;
};

