#include <PythonQt.h>
#include <QObject>
#include <QVariant>
#include <qaction.h>
#include <qbackingstore.h>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qevent.h>
#include <qfont.h>
#include <qfontinfo.h>
#include <qfontmetrics.h>
#include <qgraphicseffect.h>
#include <qgraphicsproxywidget.h>
#include <qicon.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmargins.h>
#include <qmetaobject.h>
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
#include <qstyle.h>
#include <qvideowidget.h>
#include <qwidget.h>
#include <qwindow.h>
#include <QMediaCaptureSession>
#include <QMediaFormat>
#include <QImageCapture>
#include <QMediaMetaData>
#include <QMimeType>



class PythonQtShell_QVideoWidget : public QVideoWidget
{
public:
    PythonQtShell_QVideoWidget(QWidget*  parent = NULL):QVideoWidget(parent),_wrapper(NULL) {};

   ~PythonQtShell_QVideoWidget();

virtual void actionEvent(QActionEvent*  event);
virtual void changeEvent(QEvent*  arg__1);
virtual void childEvent(QChildEvent*  event);
virtual void closeEvent(QCloseEvent*  event);
virtual void contextMenuEvent(QContextMenuEvent*  event);
virtual void customEvent(QEvent*  event);
virtual int  devType() const;
virtual void dragEnterEvent(QDragEnterEvent*  event);
virtual void dragLeaveEvent(QDragLeaveEvent*  event);
virtual void dragMoveEvent(QDragMoveEvent*  event);
virtual void dropEvent(QDropEvent*  event);
virtual void enterEvent(QEnterEvent* event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual void focusInEvent(QFocusEvent*  event);
virtual bool  focusNextPrevChild(bool  next);
virtual void focusOutEvent(QFocusEvent*  event);
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void hideEvent(QHideEvent*  event);
virtual void initPainter(QPainter*  painter) const;
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual void leaveEvent(QEvent*  event);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual QSize  minimumSizeHint() const;
virtual void mouseDoubleClickEvent(QMouseEvent*  event);
virtual void mouseMoveEvent(QMouseEvent*  event);
virtual void mousePressEvent(QMouseEvent*  event);
virtual void mouseReleaseEvent(QMouseEvent*  event);
virtual void moveEvent(QMoveEvent*  event);
virtual bool  nativeEvent(const QByteArray&  eventType, void*  message, qintptr*  result);
virtual QPaintEngine*  paintEngine() const;
virtual void paintEvent(QPaintEvent*  event);
virtual QPaintDevice*  redirected(QPoint*  offset) const;
virtual void resizeEvent(QResizeEvent*  event);
virtual void setVisible(bool  visible);
virtual QPainter*  sharedPainter() const;
virtual void showEvent(QShowEvent*  event);
virtual void tabletEvent(QTabletEvent*  event);
virtual void timerEvent(QTimerEvent*  event);
virtual void wheelEvent(QWheelEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QVideoWidget : public QVideoWidget
{ public:
inline bool  promoted_event(QEvent*  event) { return this->event(event); }
inline void promoted_hideEvent(QHideEvent*  event) { this->hideEvent(event); }
inline void promoted_moveEvent(QMoveEvent*  event) { this->moveEvent(event); }
inline void promoted_paintEvent(QPaintEvent*  event) { this->paintEvent(event); }
inline void promoted_resizeEvent(QResizeEvent*  event) { this->resizeEvent(event); }
inline void promoted_showEvent(QShowEvent*  event) { this->showEvent(event); }
inline bool  py_q_event(QEvent*  event) { return QVideoWidget::event(event); }
inline void py_q_hideEvent(QHideEvent*  event) { QVideoWidget::hideEvent(event); }
inline void py_q_moveEvent(QMoveEvent*  event) { QVideoWidget::moveEvent(event); }
inline void py_q_paintEvent(QPaintEvent*  event) { QVideoWidget::paintEvent(event); }
inline void py_q_resizeEvent(QResizeEvent*  event) { QVideoWidget::resizeEvent(event); }
inline void py_q_showEvent(QShowEvent*  event) { QVideoWidget::showEvent(event); }
};

class PythonQtWrapper_QVideoWidget : public QObject
{ Q_OBJECT
public:
public slots:
QVideoWidget* new_QVideoWidget(QWidget*  parent = NULL);
void delete_QVideoWidget(QVideoWidget* obj) { delete obj; } 
   Qt::AspectRatioMode  aspectRatioMode(QVideoWidget* theWrappedObject) const;
   bool  py_q_event(QVideoWidget* theWrappedObject, QEvent*  event){  return (((PythonQtPublicPromoter_QVideoWidget*)theWrappedObject)->py_q_event(event));}
   void py_q_hideEvent(QVideoWidget* theWrappedObject, QHideEvent*  event){  (((PythonQtPublicPromoter_QVideoWidget*)theWrappedObject)->py_q_hideEvent(event));}
   void py_q_moveEvent(QVideoWidget* theWrappedObject, QMoveEvent*  event){  (((PythonQtPublicPromoter_QVideoWidget*)theWrappedObject)->py_q_moveEvent(event));}
   void py_q_paintEvent(QVideoWidget* theWrappedObject, QPaintEvent*  event){  (((PythonQtPublicPromoter_QVideoWidget*)theWrappedObject)->py_q_paintEvent(event));}
   void py_q_resizeEvent(QVideoWidget* theWrappedObject, QResizeEvent*  event){  (((PythonQtPublicPromoter_QVideoWidget*)theWrappedObject)->py_q_resizeEvent(event));}
   void py_q_showEvent(QVideoWidget* theWrappedObject, QShowEvent*  event){  (((PythonQtPublicPromoter_QVideoWidget*)theWrappedObject)->py_q_showEvent(event));}
   QSize  sizeHint(QVideoWidget* theWrappedObject) const;
};


class PythonQtWrapper_QMediaCaptureSession : public QObject
{
   Q_OBJECT

public slots:
    QMediaCaptureSession *new_QMediaCaptureSession(QObject *parent = nullptr);
    void delete_QMediaCaptureSession(QMediaCaptureSession *self);

    QAudioInput *audioInput(QMediaCaptureSession *self) const;
    void setAudioInput(QMediaCaptureSession *self, QAudioInput *input);
    QCamera *camera(QMediaCaptureSession *self) const;
    void setCamera(QMediaCaptureSession *self, QCamera *camera);
    void setImageCapture(QMediaCaptureSession *self, QImageCapture *imageCapture);
    QMediaRecorder *recorder(QMediaCaptureSession *self);
    void setRecorder(QMediaCaptureSession *self, QMediaRecorder *recorder);
    void setVideoOutput(QMediaCaptureSession *self, QObject *output);
    QObject *videoOutput(QMediaCaptureSession *self) const;
    void setAudioOutput(QMediaCaptureSession *self, QAudioOutput *output);
    QAudioOutput *audioOutput(QMediaCaptureSession *self) const;
};

class PythonQtWrapper_QMediaFormat : public QObject
{
   Q_OBJECT

public:
   Q_ENUMS(FileFormat AudioCodec VideoCodec ConversionMode ResolveFlags)

   enum FileFormat
   {
      UnspecifiedFormat = QMediaFormat::UnspecifiedFormat,
      WMV = QMediaFormat::WMV,
      AVI = QMediaFormat::AVI,
      Matroska = QMediaFormat::Matroska,
      MPEG4 = QMediaFormat::MPEG4,
      Ogg = QMediaFormat::Ogg,
      QuickTime = QMediaFormat::QuickTime,
      WebM = QMediaFormat::WebM,
      Mpeg4Audio = QMediaFormat::Mpeg4Audio,
      AAC = QMediaFormat::AAC,
      WMA = QMediaFormat::WMA,
      MP3 = QMediaFormat::MP3,
      FLAC = QMediaFormat::FLAC,
      Wave = QMediaFormat::Wave,
      LastFileFormat = QMediaFormat::LastFileFormat
   };

   enum class AudioCodec
   {
      Unspecified = QMediaFormat::AudioCodec::Unspecified,
      MP3 = QMediaFormat::AudioCodec::MP3,
      AAC = QMediaFormat::AudioCodec::AAC,
      AC3 = QMediaFormat::AudioCodec::AC3,
      EAC3 = QMediaFormat::AudioCodec::EAC3,
      FLAC = QMediaFormat::AudioCodec::FLAC,
      DolbyTrueHD = QMediaFormat::AudioCodec::DolbyTrueHD,
      Opus = QMediaFormat::AudioCodec::Opus,
      Vorbis = QMediaFormat::AudioCodec::Vorbis,
      Wave = QMediaFormat::AudioCodec::Wave,
      WMA = QMediaFormat::AudioCodec::WMA,
      ALAC = QMediaFormat::AudioCodec::ALAC,
      LastAudioCodec = QMediaFormat::AudioCodec::LastAudioCodec
   };

   enum class VideoCodec
   {
      Unspecified = QMediaFormat::VideoCodec::Unspecified,
      MPEG1 = QMediaFormat::VideoCodec::MPEG1,
      MPEG2 = QMediaFormat::VideoCodec::MPEG2,
      MPEG4 = QMediaFormat::VideoCodec::MPEG4,
      H264 = QMediaFormat::VideoCodec::H264,
      H265 = QMediaFormat::VideoCodec::H265,
      VP8 = QMediaFormat::VideoCodec::VP8,
      VP9 = QMediaFormat::VideoCodec::VP9,
      AV1 = QMediaFormat::VideoCodec::AV1,
      Theora = QMediaFormat::VideoCodec::Theora,
      WMV = QMediaFormat::VideoCodec::WMV,
      MotionJPEG = QMediaFormat::VideoCodec::MotionJPEG,
      LastVideoCodec = QMediaFormat::VideoCodec::LastVideoCodec
   };

   enum ConversionMode
   {
      Encode = QMediaFormat::Encode,
      Decode = QMediaFormat::Decode
   };

   enum ResolveFlags
   {
      NoFlags = QMediaFormat::NoFlags,
      RequiresVideo = QMediaFormat::RequiresVideo
   };

public slots:
   QMediaFormat *new_QMediaFormat(QMediaFormat::FileFormat format = QMediaFormat::UnspecifiedFormat);
   void delete_QMediaFormat(QMediaFormat *self);

   QMediaFormat::AudioCodec audioCodec(QMediaFormat *self) const;
   QMediaFormat::FileFormat fileFormat(QMediaFormat *self) const;
   bool isSupported(QMediaFormat *self, QMediaFormat::ConversionMode mode) const;
   QMimeType mimeType(QMediaFormat *self) const;
   void resolveForEncoding(QMediaFormat *self, QMediaFormat::ResolveFlags flags);
   void setAudioCodec(QMediaFormat *self, QMediaFormat::AudioCodec codec);
   void setFileFormat(QMediaFormat *self, QMediaFormat::FileFormat f);
   void setVideoCodec(QMediaFormat *self, QMediaFormat::VideoCodec codec);
   QList<QMediaFormat::AudioCodec> supportedAudioCodecs(QMediaFormat *self, QMediaFormat::ConversionMode m);
   QList<QMediaFormat::FileFormat> supportedFileFormats(QMediaFormat *self, QMediaFormat::ConversionMode m);
   QList<QMediaFormat::VideoCodec> supportedVideoCodecs(QMediaFormat *self, QMediaFormat::ConversionMode m);
   QMediaFormat::VideoCodec videoCodec(QMediaFormat *self) const;

   bool __ne__(QMediaFormat *self, const QMediaFormat &other);
   bool __eq__(QMediaFormat *self, const QMediaFormat &other);

   QString static_QMediaFormat_audioCodecDescription(QMediaFormat::AudioCodec codec);
   QString static_QMediaFormat_audioCodecName(QMediaFormat::AudioCodec codec);
   QString static_QMediaFormat_fileFormatDescription(QMediaFormat::FileFormat fileFormat);
   QString static_QMediaFormat_fileFormatName(QMediaFormat::FileFormat fileFormat);
   QString static_QMediaFormat_videoCodecDescription(QMediaFormat::VideoCodec codec);
   QString static_QMediaFormat_videoCodecName(QMediaFormat::VideoCodec codec);
};


class PythonQtWrapper_QImageCapture : public QObject
{
   Q_OBJECT

public:
   Q_ENUMS(Error Quality FileFormat)

   enum Error
   {
      NoError = QImageCapture::NoError,
      NotReadyError = QImageCapture::NotReadyError,
      ResourceError = QImageCapture::ResourceError,
      OutOfSpaceError = QImageCapture::OutOfSpaceError,
      NotSupportedFeatureError = QImageCapture::NotSupportedFeatureError,
      FormatError = QImageCapture::FormatError
   };

   enum Quality
   {
      VeryLowQuality = QImageCapture::VeryLowQuality,
      LowQuality = QImageCapture::LowQuality,
      NormalQuality = QImageCapture::NormalQuality,
      HighQuality = QImageCapture::HighQuality,
      VeryHighQuality = QImageCapture::VeryHighQuality
   };

   enum FileFormat
   {
      UnspecifiedFormat = QImageCapture::UnspecifiedFormat,
      JPEG = QImageCapture::JPEG,
      PNG = QImageCapture::PNG,
      WebP = QImageCapture::WebP,
      Tiff = QImageCapture::Tiff,
      LastFileFormat = QImageCapture::LastFileFormat
   };

public slots:
   QImageCapture *new_QImageCapture(QObject *parent = nullptr);
   void delete_QImageCapture(QImageCapture *self);

   bool isAvailable(QImageCapture *self) const;
   QMediaCaptureSession *captureSession(QImageCapture *self) const;
   QImageCapture::Error error(QImageCapture *self) const;
   QString errorString(QImageCapture *self) const;
   bool isReadyForCapture(QImageCapture *self) const;
   QImageCapture::FileFormat fileFormat(QImageCapture *self) const;
   void setFileFormat(QImageCapture *self, QImageCapture::FileFormat format);

   QList<QImageCapture::FileFormat> static_QImageCapture_supportedFormats();
   QString static_QImageCapture_fileFormatName(QImageCapture::FileFormat c);
   QString static_QImageCapture_fileFormatDescription(QImageCapture::FileFormat c);

   QSize resolution(QImageCapture *self) const;
   void setResolution(QImageCapture *self, const QSize &size);
   void setResolution(QImageCapture *self, int width, int height);
   QImageCapture::Quality quality(QImageCapture *self) const;
   void setQuality(QImageCapture *self, QImageCapture::Quality quality);
   QMediaMetaData metaData(QImageCapture *self) const;
   void setMetaData(QImageCapture *self, const QMediaMetaData &metaData);
   void addMetaData(QImageCapture *self, const QMediaMetaData &metaData);
   int captureToFile(QImageCapture *self, const QString &location = QString());
   int capture(QImageCapture *self);
};

class PythonQtWrapper_QMediaMetaData : public QObject
{
   Q_OBJECT

public:
   Q_ENUMS(Key)

   enum Key
   {
      Title = QMediaMetaData::Title,
      Author = QMediaMetaData::Author,
      Comment = QMediaMetaData::Comment,
      Description = QMediaMetaData::Description,
      Genre = QMediaMetaData::Genre,
      Date = QMediaMetaData::Date,
      Language = QMediaMetaData::Language,
      Publisher = QMediaMetaData::Publisher,
      Copyright = QMediaMetaData::Copyright,
      Url = QMediaMetaData::Url,
      Duration = QMediaMetaData::Duration,
      MediaType = QMediaMetaData::MediaType,
      FileFormat = QMediaMetaData::FileFormat,
      AudioBitRate = QMediaMetaData::AudioBitRate,
      AudioCodec = QMediaMetaData::AudioCodec,
      VideoBitRate = QMediaMetaData::VideoBitRate,
      VideoCodec = QMediaMetaData::VideoCodec,
      VideoFrameRate = QMediaMetaData::VideoFrameRate,
      AlbumTitle = QMediaMetaData::AlbumTitle,
      AlbumArtist = QMediaMetaData::AlbumArtist,
      ContributingArtist = QMediaMetaData::ContributingArtist,
      TrackNumber = QMediaMetaData::TrackNumber,
      Composer = QMediaMetaData::Composer,
      LeadPerformer = QMediaMetaData::LeadPerformer,
      ThumbnailImage = QMediaMetaData::ThumbnailImage,
      CoverArtImage = QMediaMetaData::CoverArtImage,
      Orientation = QMediaMetaData::Orientation,
      Resolution = QMediaMetaData::Resolution
   };

public slots:
   void delete_QMediaMetaData(QMediaMetaData *self);

   QVariant value(QMediaMetaData *self, QMediaMetaData::Key k) const;
   void insert(QMediaMetaData *self, QMediaMetaData::Key k, const QVariant &value);
   void remove(QMediaMetaData *self, QMediaMetaData::Key k);
   QList<QMediaMetaData::Key> keys(QMediaMetaData *self) const;
   void clear(QMediaMetaData *self);
   bool isEmpty(QMediaMetaData *self) const;
   QString stringValue(QMediaMetaData *self, QMediaMetaData::Key k) const;

   static QString static_QMediaMetaData_metaDataKeyToString(QMediaMetaData::Key k);
};
