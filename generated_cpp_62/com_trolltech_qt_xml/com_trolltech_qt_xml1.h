#include <PythonQt.h>
#include <QObject>
#include <QVariant>
#include <qbytearray.h>
#include <qiodevice.h>
#include <qlist.h>
#include <qvector.h>
#include <qxmlstream.h>



class PythonQtWrapper_QXmlStreamAttribute : public QObject
{ Q_OBJECT
public:
public slots:
QXmlStreamAttribute* new_QXmlStreamAttribute();
QXmlStreamAttribute* new_QXmlStreamAttribute(const QString&  namespaceUri, const QString&  name, const QString&  value);
QXmlStreamAttribute* new_QXmlStreamAttribute(const QString&  qualifiedName, const QString&  value);
QXmlStreamAttribute* new_QXmlStreamAttribute(const QXmlStreamAttribute&  arg__1);
void delete_QXmlStreamAttribute(QXmlStreamAttribute* obj) { delete obj; } 
   bool  isDefault(QXmlStreamAttribute* theWrappedObject) const;
   QString  name(QXmlStreamAttribute* theWrappedObject) const;
   QString  namespaceUri(QXmlStreamAttribute* theWrappedObject) const;
   bool  __ne__(QXmlStreamAttribute* theWrappedObject, const QXmlStreamAttribute&  other) const;
   bool  __eq__(QXmlStreamAttribute* theWrappedObject, const QXmlStreamAttribute&  other) const;
   QString  prefix(QXmlStreamAttribute* theWrappedObject) const;
   QString  qualifiedName(QXmlStreamAttribute* theWrappedObject) const;
   QString  value(QXmlStreamAttribute* theWrappedObject) const;
};





class PythonQtWrapper_QXmlStreamAttributes : public QObject
{ Q_OBJECT
public:
public slots:
QXmlStreamAttributes* new_QXmlStreamAttributes();
QXmlStreamAttributes* new_QXmlStreamAttributes(const QXmlStreamAttributes& other) {
QXmlStreamAttributes* a = new QXmlStreamAttributes();
*((QXmlStreamAttributes*)a) = other;
return a; }
void delete_QXmlStreamAttributes(QXmlStreamAttributes* obj) { delete obj; } 
   void append(QXmlStreamAttributes* theWrappedObject, const QString&  namespaceUri, const QString&  name, const QString&  value);
   void append(QXmlStreamAttributes* theWrappedObject, const QString&  qualifiedName, const QString&  value);
   const QXmlStreamAttribute*  at(QXmlStreamAttributes* theWrappedObject, int  i) const;
   int  capacity(QXmlStreamAttributes* theWrappedObject) const;
   void clear(QXmlStreamAttributes* theWrappedObject);
   const QXmlStreamAttribute*  constFirst(QXmlStreamAttributes* theWrappedObject) const;
   const QXmlStreamAttribute*  constLast(QXmlStreamAttributes* theWrappedObject) const;
   bool  contains(QXmlStreamAttributes* theWrappedObject, const QXmlStreamAttribute&  t) const;
   int  count(QXmlStreamAttributes* theWrappedObject) const;
   int  count(QXmlStreamAttributes* theWrappedObject, const QXmlStreamAttribute&  t) const;
   bool  empty(QXmlStreamAttributes* theWrappedObject) const;
   bool  endsWith(QXmlStreamAttributes* theWrappedObject, const QXmlStreamAttribute&  t) const;
   QVector<QXmlStreamAttribute >*  fill(QXmlStreamAttributes* theWrappedObject, const QXmlStreamAttribute&  t, int  size = -1);
   const QXmlStreamAttribute*  first(QXmlStreamAttributes* theWrappedObject) const;
   QVector<QXmlStreamAttribute >  static_QXmlStreamAttributes_fromList(const QList<QXmlStreamAttribute >&  list);
   bool  hasAttribute(QXmlStreamAttributes* theWrappedObject, const QString&  namespaceUri, const QString&  name) const;
   bool  hasAttribute(QXmlStreamAttributes* theWrappedObject, const QString&  qualifiedName) const;
   int  indexOf(QXmlStreamAttributes* theWrappedObject, const QXmlStreamAttribute&  t, int  from = 0) const;
   bool  isEmpty(QXmlStreamAttributes* theWrappedObject) const;
   bool  isSharedWith(QXmlStreamAttributes* theWrappedObject, const QVector<QXmlStreamAttribute >&  other) const;
   const QXmlStreamAttribute*  last(QXmlStreamAttributes* theWrappedObject) const;
   int  lastIndexOf(QXmlStreamAttributes* theWrappedObject, const QXmlStreamAttribute&  t, int  from = -1) const;
   int  length(QXmlStreamAttributes* theWrappedObject) const;
   QVector<QXmlStreamAttribute >  mid(QXmlStreamAttributes* theWrappedObject, int  pos, int  len = -1) const;
   void move(QXmlStreamAttributes* theWrappedObject, int  from, int  to);
   bool  __ne__(QXmlStreamAttributes* theWrappedObject, const QVector<QXmlStreamAttribute >&  v) const;
   bool  __eq__(QXmlStreamAttributes* theWrappedObject, const QVector<QXmlStreamAttribute >&  v) const;
   void prepend(QXmlStreamAttributes* theWrappedObject, const QXmlStreamAttribute&  t);
   void remove(QXmlStreamAttributes* theWrappedObject, int  i);
   void remove(QXmlStreamAttributes* theWrappedObject, int  i, int  n);
   int  removeAll(QXmlStreamAttributes* theWrappedObject, const QXmlStreamAttribute&  t);
   void removeAt(QXmlStreamAttributes* theWrappedObject, int  i);
   void removeFirst(QXmlStreamAttributes* theWrappedObject);
   void removeLast(QXmlStreamAttributes* theWrappedObject);
   bool  removeOne(QXmlStreamAttributes* theWrappedObject, const QXmlStreamAttribute&  t);
   void replace(QXmlStreamAttributes* theWrappedObject, int  i, const QXmlStreamAttribute&  t);
   void reserve(QXmlStreamAttributes* theWrappedObject, int  size);
   void resize(QXmlStreamAttributes* theWrappedObject, int  size);
   int  size(QXmlStreamAttributes* theWrappedObject) const;
   void squeeze(QXmlStreamAttributes* theWrappedObject);
   bool  startsWith(QXmlStreamAttributes* theWrappedObject, const QXmlStreamAttribute&  t) const;
   void swap(QXmlStreamAttributes* theWrappedObject, QVector<QXmlStreamAttribute >&  other);
   QXmlStreamAttribute  takeAt(QXmlStreamAttributes* theWrappedObject, int  i);
   QXmlStreamAttribute  takeFirst(QXmlStreamAttributes* theWrappedObject);
   QXmlStreamAttribute  takeLast(QXmlStreamAttributes* theWrappedObject);
   QList<QXmlStreamAttribute >  toList(QXmlStreamAttributes* theWrappedObject) const;
   QString  value(QXmlStreamAttributes* theWrappedObject, const QString&  namespaceUri, const QString&  name) const;
   QString  value(QXmlStreamAttributes* theWrappedObject, const QString&  qualifiedName) const;
    bool __nonzero__(QXmlStreamAttributes* obj) { return !obj->isEmpty(); }
};





class PythonQtWrapper_QXmlStreamEntityDeclaration : public QObject
{ Q_OBJECT
public:
public slots:
QXmlStreamEntityDeclaration* new_QXmlStreamEntityDeclaration();
QXmlStreamEntityDeclaration* new_QXmlStreamEntityDeclaration(const QXmlStreamEntityDeclaration&  arg__1);
void delete_QXmlStreamEntityDeclaration(QXmlStreamEntityDeclaration* obj) { delete obj; } 
   QString  name(QXmlStreamEntityDeclaration* theWrappedObject) const;
   QString  notationName(QXmlStreamEntityDeclaration* theWrappedObject) const;
   bool  __ne__(QXmlStreamEntityDeclaration* theWrappedObject, const QXmlStreamEntityDeclaration&  other) const;
   bool  __eq__(QXmlStreamEntityDeclaration* theWrappedObject, const QXmlStreamEntityDeclaration&  other) const;
   QString  publicId(QXmlStreamEntityDeclaration* theWrappedObject) const;
   QString  systemId(QXmlStreamEntityDeclaration* theWrappedObject) const;
   QString  value(QXmlStreamEntityDeclaration* theWrappedObject) const;
};





class PythonQtWrapper_QXmlStreamNamespaceDeclaration : public QObject
{ Q_OBJECT
public:
public slots:
QXmlStreamNamespaceDeclaration* new_QXmlStreamNamespaceDeclaration();
QXmlStreamNamespaceDeclaration* new_QXmlStreamNamespaceDeclaration(const QString&  prefix, const QString&  namespaceUri);
QXmlStreamNamespaceDeclaration* new_QXmlStreamNamespaceDeclaration(const QXmlStreamNamespaceDeclaration&  arg__1);
void delete_QXmlStreamNamespaceDeclaration(QXmlStreamNamespaceDeclaration* obj) { delete obj; } 
   QString  namespaceUri(QXmlStreamNamespaceDeclaration* theWrappedObject) const;
   bool  __ne__(QXmlStreamNamespaceDeclaration* theWrappedObject, const QXmlStreamNamespaceDeclaration&  other) const;
   bool  __eq__(QXmlStreamNamespaceDeclaration* theWrappedObject, const QXmlStreamNamespaceDeclaration&  other) const;
   QString  prefix(QXmlStreamNamespaceDeclaration* theWrappedObject) const;
};





class PythonQtWrapper_QXmlStreamNotationDeclaration : public QObject
{ Q_OBJECT
public:
public slots:
QXmlStreamNotationDeclaration* new_QXmlStreamNotationDeclaration();
QXmlStreamNotationDeclaration* new_QXmlStreamNotationDeclaration(const QXmlStreamNotationDeclaration&  arg__1);
void delete_QXmlStreamNotationDeclaration(QXmlStreamNotationDeclaration* obj) { delete obj; } 
   QString  name(QXmlStreamNotationDeclaration* theWrappedObject) const;
   bool  __ne__(QXmlStreamNotationDeclaration* theWrappedObject, const QXmlStreamNotationDeclaration&  other) const;
   bool  __eq__(QXmlStreamNotationDeclaration* theWrappedObject, const QXmlStreamNotationDeclaration&  other) const;
   QString  publicId(QXmlStreamNotationDeclaration* theWrappedObject) const;
   QString  systemId(QXmlStreamNotationDeclaration* theWrappedObject) const;
};





class PythonQtWrapper_QXmlStreamReader : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Error ReadElementTextBehaviour TokenType )
enum Error{
  NoError = QXmlStreamReader::NoError,   UnexpectedElementError = QXmlStreamReader::UnexpectedElementError,   CustomError = QXmlStreamReader::CustomError,   NotWellFormedError = QXmlStreamReader::NotWellFormedError,   PrematureEndOfDocumentError = QXmlStreamReader::PrematureEndOfDocumentError};
enum ReadElementTextBehaviour{
  ErrorOnUnexpectedElement = QXmlStreamReader::ErrorOnUnexpectedElement,   IncludeChildElements = QXmlStreamReader::IncludeChildElements,   SkipChildElements = QXmlStreamReader::SkipChildElements};
enum TokenType{
  NoToken = QXmlStreamReader::NoToken,   Invalid = QXmlStreamReader::Invalid,   StartDocument = QXmlStreamReader::StartDocument,   EndDocument = QXmlStreamReader::EndDocument,   StartElement = QXmlStreamReader::StartElement,   EndElement = QXmlStreamReader::EndElement,   Characters = QXmlStreamReader::Characters,   Comment = QXmlStreamReader::Comment,   DTD = QXmlStreamReader::DTD,   EntityReference = QXmlStreamReader::EntityReference,   ProcessingInstruction = QXmlStreamReader::ProcessingInstruction};
public slots:
QXmlStreamReader* new_QXmlStreamReader();
QXmlStreamReader* new_QXmlStreamReader(QIODevice*  device);
QXmlStreamReader* new_QXmlStreamReader(const QByteArray&  data);
QXmlStreamReader* new_QXmlStreamReader(const QString&  data);
void delete_QXmlStreamReader(QXmlStreamReader* obj) { delete obj; } 
   void addData(QXmlStreamReader* theWrappedObject, const QByteArray&  data);
   void addData(QXmlStreamReader* theWrappedObject, const QString&  data);
   void addExtraNamespaceDeclaration(QXmlStreamReader* theWrappedObject, const QXmlStreamNamespaceDeclaration&  extraNamespaceDeclaraction);
   void addExtraNamespaceDeclarations(QXmlStreamReader* theWrappedObject, const QVector<QXmlStreamNamespaceDeclaration >&  extraNamespaceDeclaractions);
   bool  atEnd(QXmlStreamReader* theWrappedObject) const;
   QXmlStreamAttributes  attributes(QXmlStreamReader* theWrappedObject) const;
   qint64  characterOffset(QXmlStreamReader* theWrappedObject) const;
   void clear(QXmlStreamReader* theWrappedObject);
   qint64  columnNumber(QXmlStreamReader* theWrappedObject) const;
   QIODevice*  device(QXmlStreamReader* theWrappedObject) const;
   QString  documentEncoding(QXmlStreamReader* theWrappedObject) const;
   QString  documentVersion(QXmlStreamReader* theWrappedObject) const;
   QString  dtdName(QXmlStreamReader* theWrappedObject) const;
   QString  dtdPublicId(QXmlStreamReader* theWrappedObject) const;
   QString  dtdSystemId(QXmlStreamReader* theWrappedObject) const;
   QVector<QXmlStreamEntityDeclaration >  entityDeclarations(QXmlStreamReader* theWrappedObject) const;
   QXmlStreamEntityResolver*  entityResolver(QXmlStreamReader* theWrappedObject) const;
   QXmlStreamReader::Error  error(QXmlStreamReader* theWrappedObject) const;
   QString  errorString(QXmlStreamReader* theWrappedObject) const;
   bool  hasError(QXmlStreamReader* theWrappedObject) const;
   bool  isCDATA(QXmlStreamReader* theWrappedObject) const;
   bool  isCharacters(QXmlStreamReader* theWrappedObject) const;
   bool  isComment(QXmlStreamReader* theWrappedObject) const;
   bool  isDTD(QXmlStreamReader* theWrappedObject) const;
   bool  isEndDocument(QXmlStreamReader* theWrappedObject) const;
   bool  isEndElement(QXmlStreamReader* theWrappedObject) const;
   bool  isEntityReference(QXmlStreamReader* theWrappedObject) const;
   bool  isProcessingInstruction(QXmlStreamReader* theWrappedObject) const;
   bool  isStandaloneDocument(QXmlStreamReader* theWrappedObject) const;
   bool  isStartDocument(QXmlStreamReader* theWrappedObject) const;
   bool  isStartElement(QXmlStreamReader* theWrappedObject) const;
   bool  isWhitespace(QXmlStreamReader* theWrappedObject) const;
   qint64  lineNumber(QXmlStreamReader* theWrappedObject) const;
   QString  name(QXmlStreamReader* theWrappedObject) const;
   QVector<QXmlStreamNamespaceDeclaration >  namespaceDeclarations(QXmlStreamReader* theWrappedObject) const;
   bool  namespaceProcessing(QXmlStreamReader* theWrappedObject) const;
   QString  namespaceUri(QXmlStreamReader* theWrappedObject) const;
   QVector<QXmlStreamNotationDeclaration >  notationDeclarations(QXmlStreamReader* theWrappedObject) const;
   QString  prefix(QXmlStreamReader* theWrappedObject) const;
   QString  processingInstructionData(QXmlStreamReader* theWrappedObject) const;
   QString  processingInstructionTarget(QXmlStreamReader* theWrappedObject) const;
   QString  qualifiedName(QXmlStreamReader* theWrappedObject) const;
   void raiseError(QXmlStreamReader* theWrappedObject, const QString&  message = QString());
   QString  readElementText(QXmlStreamReader* theWrappedObject, QXmlStreamReader::ReadElementTextBehaviour  behaviour = QXmlStreamReader::ErrorOnUnexpectedElement);
   QXmlStreamReader::TokenType  readNext(QXmlStreamReader* theWrappedObject);
   bool  readNextStartElement(QXmlStreamReader* theWrappedObject);
   void setDevice(QXmlStreamReader* theWrappedObject, QIODevice*  device);
   void setEntityResolver(QXmlStreamReader* theWrappedObject, QXmlStreamEntityResolver*  resolver);
   void setNamespaceProcessing(QXmlStreamReader* theWrappedObject, bool  arg__1);
   void skipCurrentElement(QXmlStreamReader* theWrappedObject);
   QString  text(QXmlStreamReader* theWrappedObject) const;
   QString  tokenString(QXmlStreamReader* theWrappedObject) const;
   QXmlStreamReader::TokenType  tokenType(QXmlStreamReader* theWrappedObject) const;
};





class PythonQtWrapper_QXmlStreamWriter : public QObject
{ Q_OBJECT
public:
public slots:
QXmlStreamWriter* new_QXmlStreamWriter();
QXmlStreamWriter* new_QXmlStreamWriter(QByteArray*  array);
QXmlStreamWriter* new_QXmlStreamWriter(QIODevice*  device);
void delete_QXmlStreamWriter(QXmlStreamWriter* obj) { delete obj; } 
   bool  autoFormatting(QXmlStreamWriter* theWrappedObject) const;
   int  autoFormattingIndent(QXmlStreamWriter* theWrappedObject) const;
   QIODevice*  device(QXmlStreamWriter* theWrappedObject) const;
   bool  hasError(QXmlStreamWriter* theWrappedObject) const;
   void setAutoFormatting(QXmlStreamWriter* theWrappedObject, bool  arg__1);
   void setAutoFormattingIndent(QXmlStreamWriter* theWrappedObject, int  spacesOrTabs);
   void setDevice(QXmlStreamWriter* theWrappedObject, QIODevice*  device);
   void writeAttribute(QXmlStreamWriter* theWrappedObject, const QString&  namespaceUri, const QString&  name, const QString&  value);
   void writeAttribute(QXmlStreamWriter* theWrappedObject, const QString&  qualifiedName, const QString&  value);
   void writeAttribute(QXmlStreamWriter* theWrappedObject, const QXmlStreamAttribute&  attribute);
   void writeAttributes(QXmlStreamWriter* theWrappedObject, const QXmlStreamAttributes&  attributes);
   void writeCDATA(QXmlStreamWriter* theWrappedObject, const QString&  text);
   void writeCharacters(QXmlStreamWriter* theWrappedObject, const QString&  text);
   void writeComment(QXmlStreamWriter* theWrappedObject, const QString&  text);
   void writeCurrentToken(QXmlStreamWriter* theWrappedObject, const QXmlStreamReader&  reader);
   void writeDTD(QXmlStreamWriter* theWrappedObject, const QString&  dtd);
   void writeDefaultNamespace(QXmlStreamWriter* theWrappedObject, const QString&  namespaceUri);
   void writeEmptyElement(QXmlStreamWriter* theWrappedObject, const QString&  namespaceUri, const QString&  name);
   void writeEmptyElement(QXmlStreamWriter* theWrappedObject, const QString&  qualifiedName);
   void writeEndDocument(QXmlStreamWriter* theWrappedObject);
   void writeEndElement(QXmlStreamWriter* theWrappedObject);
   void writeEntityReference(QXmlStreamWriter* theWrappedObject, const QString&  name);
   void writeNamespace(QXmlStreamWriter* theWrappedObject, const QString&  namespaceUri, const QString&  prefix = QString());
   void writeProcessingInstruction(QXmlStreamWriter* theWrappedObject, const QString&  target, const QString&  data = QString());
   void writeStartDocument(QXmlStreamWriter* theWrappedObject);
   void writeStartDocument(QXmlStreamWriter* theWrappedObject, const QString&  version);
   void writeStartDocument(QXmlStreamWriter* theWrappedObject, const QString&  version, bool  standalone);
   void writeStartElement(QXmlStreamWriter* theWrappedObject, const QString&  namespaceUri, const QString&  name);
   void writeStartElement(QXmlStreamWriter* theWrappedObject, const QString&  qualifiedName);
   void writeTextElement(QXmlStreamWriter* theWrappedObject, const QString&  namespaceUri, const QString&  name, const QString&  text);
   void writeTextElement(QXmlStreamWriter* theWrappedObject, const QString&  qualifiedName, const QString&  text);
};


