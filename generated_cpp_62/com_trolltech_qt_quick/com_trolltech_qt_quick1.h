#include <PythonQt.h>
#include <QObject>
#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qmatrix4x4.h>
#include <qmetaobject.h>
#include <qobject.h>
#include <qrect.h>
#include <qsgmaterial.h>
#include <qsgnode.h>
#include <qsgtexture.h>
#include <qsgtexturematerial.h>
#include <qsgtextureprovider.h>
#include <qsize.h>



class PythonQtShell_QSGRootNode : public QSGRootNode
{
public:
    PythonQtShell_QSGRootNode():QSGRootNode(),_wrapper(NULL) {};

   ~PythonQtShell_QSGRootNode();

virtual bool  isSubtreeBlocked() const;
virtual void preprocess();

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QSGRootNode : public QObject
{ Q_OBJECT
public:
public slots:
QSGRootNode* new_QSGRootNode();
void delete_QSGRootNode(QSGRootNode* obj) { delete obj; } 
    QString py_toString(QSGRootNode*);
};





class PythonQtShell_QSGTexture : public QSGTexture
{
public:
    PythonQtShell_QSGTexture():QSGTexture(),_wrapper(NULL) {};

   ~PythonQtShell_QSGTexture();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual bool  hasAlphaChannel() const;
virtual bool  hasMipmaps() const;
virtual bool  isAtlasTexture() const;
virtual QRectF  normalizedTextureSubRect() const;
virtual QSGTexture*  removedFromAtlas() const;
virtual QSize  textureSize() const;
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 

  virtual qint64 comparisonKey() const override;

};

class PythonQtPublicPromoter_QSGTexture : public QSGTexture
{ public:
inline bool  py_q_hasAlphaChannel() const { return this->hasAlphaChannel(); }
inline bool  py_q_hasMipmaps() const { return this->hasMipmaps(); }
inline bool  py_q_isAtlasTexture() const { return QSGTexture::isAtlasTexture(); }
inline QRectF  py_q_normalizedTextureSubRect() const { return QSGTexture::normalizedTextureSubRect(); }
inline QSGTexture*  py_q_removedFromAtlas() const { return QSGTexture::removedFromAtlas(); }
inline QSize  py_q_textureSize() const { return this->textureSize(); }
};

class PythonQtWrapper_QSGTexture : public QObject
{
   Q_OBJECT
public:
   Q_ENUMS(Filtering WrapMode AnisotropyLevel)
   enum Filtering
   {
      None = QSGTexture::None,
      Nearest = QSGTexture::Nearest,
      Linear = QSGTexture::Linear
   };

   enum WrapMode
   {
      Repeat = QSGTexture::Repeat,
      ClampToEdge = QSGTexture::ClampToEdge,
      MirroredRepeat = QSGTexture::MirroredRepeat
   };

   enum AnisotropyLevel
   {
      AnisotropyNone = QSGTexture::AnisotropyNone,
      Anisotropy2x = QSGTexture::Anisotropy2x,
      Anisotropy4x = QSGTexture::Anisotropy4x,
      Anisotropy8x = QSGTexture::Anisotropy8x,
      Anisotropy16x = QSGTexture::Anisotropy16x
   };

public slots:
QSGTexture* new_QSGTexture();
void delete_QSGTexture(QSGTexture* obj) { delete obj; } 
   QRectF  convertToNormalizedSourceRect(QSGTexture* theWrappedObject, const QRectF&  rect) const;
   QSGTexture::Filtering  filtering(QSGTexture* theWrappedObject) const;
   bool  hasAlphaChannel(QSGTexture* theWrappedObject) const;
   bool  py_q_hasAlphaChannel(QSGTexture* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSGTexture*)theWrappedObject)->py_q_hasAlphaChannel());}
   bool  hasMipmaps(QSGTexture* theWrappedObject) const;
   bool  py_q_hasMipmaps(QSGTexture* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSGTexture*)theWrappedObject)->py_q_hasMipmaps());}
   QSGTexture::WrapMode  horizontalWrapMode(QSGTexture* theWrappedObject) const;
   bool  isAtlasTexture(QSGTexture* theWrappedObject) const;
   bool  py_q_isAtlasTexture(QSGTexture* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSGTexture*)theWrappedObject)->py_q_isAtlasTexture());}
   QSGTexture::Filtering  mipmapFiltering(QSGTexture* theWrappedObject) const;
   QRectF  normalizedTextureSubRect(QSGTexture* theWrappedObject) const;
   QRectF  py_q_normalizedTextureSubRect(QSGTexture* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSGTexture*)theWrappedObject)->py_q_normalizedTextureSubRect());}
   QSGTexture*  removedFromAtlas(QSGTexture* theWrappedObject) const;
   QSGTexture*  py_q_removedFromAtlas(QSGTexture* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSGTexture*)theWrappedObject)->py_q_removedFromAtlas());}
   void setFiltering(QSGTexture* theWrappedObject, QSGTexture::Filtering  filter);
   void setHorizontalWrapMode(QSGTexture* theWrappedObject, QSGTexture::WrapMode  hwrap);
   void setMipmapFiltering(QSGTexture* theWrappedObject, QSGTexture::Filtering  filter);
   void setVerticalWrapMode(QSGTexture* theWrappedObject, QSGTexture::WrapMode  vwrap);
   QSize  textureSize(QSGTexture* theWrappedObject) const;
   QSize  py_q_textureSize(QSGTexture* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSGTexture*)theWrappedObject)->py_q_textureSize());}
   QSGTexture::WrapMode  verticalWrapMode(QSGTexture* theWrappedObject) const;
   void setAnisotropyLevel(QSGTexture* theWrappedObject, QSGTexture::AnisotropyLevel level);
   QSGTexture::AnisotropyLevel anisotropyLevel(QSGTexture* theWrappedObject) const;
};





class PythonQtShell_QSGTextureMaterial : public QSGTextureMaterial
{
public:
    PythonQtShell_QSGTextureMaterial():QSGTextureMaterial(),_wrapper(NULL) {};

   ~PythonQtShell_QSGTextureMaterial();

virtual QSGMaterialType*  type() const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QSGTextureMaterial : public QSGTextureMaterial
{ public:
inline QSGMaterialType*  py_q_type() const { return QSGTextureMaterial::type(); }
};

class PythonQtWrapper_QSGTextureMaterial : public QObject
{ Q_OBJECT
public:
public slots:
QSGTextureMaterial* new_QSGTextureMaterial();
void delete_QSGTextureMaterial(QSGTextureMaterial* obj) { delete obj; } 
   QSGMaterialType*  type(QSGTextureMaterial* theWrappedObject) const;
   QSGMaterialType*  py_q_type(QSGTextureMaterial* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSGTextureMaterial*)theWrappedObject)->py_q_type());}
};





class PythonQtShell_QSGTextureProvider : public QSGTextureProvider
{
public:
    PythonQtShell_QSGTextureProvider():QSGTextureProvider(),_wrapper(NULL) {};

   ~PythonQtShell_QSGTextureProvider();

virtual void childEvent(QChildEvent*  event);
virtual void customEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual bool  eventFilter(QObject*  watched, QEvent*  event);
virtual QSGTexture*  texture() const;
virtual void timerEvent(QTimerEvent*  event);

  const QMetaObject* metaObject() const;
  int qt_metacall(QMetaObject::Call call, int id, void** args);
  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QSGTextureProvider : public QSGTextureProvider
{ public:
inline QSGTexture*  py_q_texture() const { return this->texture(); }
};

class PythonQtWrapper_QSGTextureProvider : public QObject
{ Q_OBJECT
public:
public slots:
QSGTextureProvider* new_QSGTextureProvider();
void delete_QSGTextureProvider(QSGTextureProvider* obj) { delete obj; } 
   QSGTexture*  texture(QSGTextureProvider* theWrappedObject) const;
   QSGTexture*  py_q_texture(QSGTextureProvider* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSGTextureProvider*)theWrappedObject)->py_q_texture());}
};





class PythonQtShell_QSGTransformNode : public QSGTransformNode
{
public:
    PythonQtShell_QSGTransformNode():QSGTransformNode(),_wrapper(NULL) {};

   ~PythonQtShell_QSGTransformNode();

virtual bool  isSubtreeBlocked() const;
virtual void preprocess();

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QSGTransformNode : public QObject
{ Q_OBJECT
public:
public slots:
QSGTransformNode* new_QSGTransformNode();
void delete_QSGTransformNode(QSGTransformNode* obj) { delete obj; } 
   const QMatrix4x4*  combinedMatrix(QSGTransformNode* theWrappedObject) const;
   const QMatrix4x4*  matrix(QSGTransformNode* theWrappedObject) const;
   void setCombinedMatrix(QSGTransformNode* theWrappedObject, const QMatrix4x4&  matrix);
   void setMatrix(QSGTransformNode* theWrappedObject, const QMatrix4x4&  matrix);
    QString py_toString(QSGTransformNode*);
};


