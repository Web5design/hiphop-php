/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010- Facebook, Inc. (http://www.facebook.com)         |
   | Copyright (c) 1997-2010 The PHP Group                                |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/

#ifndef __EXT_XMLREADER_H__
#define __EXT_XMLREADER_H__

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include <runtime/base/base_includes.h>
#include <libxml/tree.h>
#include <libxml/xmlreader.h>
#include <libxml/uri.h>
#include <runtime/base/file/file.h>

typedef int (*xmlreader_read_int_t)(xmlTextReaderPtr reader);
typedef unsigned char *(*xmlreader_read_char_t)(xmlTextReaderPtr reader);
typedef const unsigned char *(*xmlreader_read_const_char_t)(xmlTextReaderPtr reader);
typedef unsigned char *(*xmlreader_read_one_char_t)(xmlTextReaderPtr reader, const unsigned char *);
namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

extern const int64_t q_XMLReader$$NONE;
extern const int64_t q_XMLReader$$ELEMENT;
extern const int64_t q_XMLReader$$ATTRIBUTE;
extern const int64_t q_XMLReader$$TEXT;
extern const int64_t q_XMLReader$$CDATA;
extern const int64_t q_XMLReader$$ENTITY_REF;
extern const int64_t q_XMLReader$$ENTITY;
extern const int64_t q_XMLReader$$PI;
extern const int64_t q_XMLReader$$COMMENT;
extern const int64_t q_XMLReader$$DOC;
extern const int64_t q_XMLReader$$DOC_TYPE;
extern const int64_t q_XMLReader$$DOC_FRAGMENT;
extern const int64_t q_XMLReader$$NOTATION;
extern const int64_t q_XMLReader$$WHITESPACE;
extern const int64_t q_XMLReader$$SIGNIFICANT_WHITESPACE;
extern const int64_t q_XMLReader$$END_ELEMENT;
extern const int64_t q_XMLReader$$END_ENTITY;
extern const int64_t q_XMLReader$$XML_DECLARATION;
extern const int64_t q_XMLReader$$LOADDTD;
extern const int64_t q_XMLReader$$DEFAULTATTRS;
extern const int64_t q_XMLReader$$VALIDATE;
extern const int64_t q_XMLReader$$SUBST_ENTITIES;

///////////////////////////////////////////////////////////////////////////////
// class XMLReader

FORWARD_DECLARE_CLASS_BUILTIN(XMLReader);
class c_XMLReader : public ExtObjectDataFlags<ObjectData::UseGet>, public Sweepable {
 public:
  DECLARE_CLASS(XMLReader, XMLReader, ObjectData)

  // need to implement
  public: c_XMLReader(VM::Class* cls = c_XMLReader::s_cls);
  public: ~c_XMLReader();
  public: void t___construct();
  public: bool t_open(CStrRef uri, CStrRef encoding = null_string, int64_t options = 0);
  public: bool t_xml(CStrRef source, CStrRef encoding = null_string, int64_t options = 0);
  public: bool t_close();
  public: bool t_read();
  public: bool t_next(CStrRef localname = null_string);
  public: String t_readstring();
  public: String t_readinnerxml();
  public: String t_readouterxml();
  public: bool t_movetonextattribute();
  public: Variant t_getattribute(CStrRef name);
  public: Variant t_getattributeno(int64_t index);
  public: Variant t_getattributens(CStrRef name, CStrRef namespaceURI);
  public: bool t_movetoattribute(CStrRef name);
  public: bool t_movetoattributeno(int64_t index);
  public: bool t_movetoattributens(CStrRef name, CStrRef namespaceURI);
  public: bool t_movetoelement();
  public: bool t_movetofirstattribute();
  public: bool t_isvalid();
  public: bool t_expand();
  public: Variant t___get(Variant name);
  public: bool t_getparserproperty(int64_t property);
  public: Variant t_lookupnamespace(CStrRef prefix);
  public: bool t_setschema(CStrRef source);
  public: bool t_setparserproperty(int64_t property, bool value);
  public: bool t_setrelaxngschema(CStrRef filename);
  public: bool t_setrelaxngschemasource(CStrRef source);
  public: Variant t___destruct();

  private: String read_string_func(xmlreader_read_char_t internal_function);
  private: bool bool_func_no_arg(xmlreader_read_int_t internal_function);
  private: Variant string_func_string_arg(String value, xmlreader_read_one_char_t internal_function);
  private: bool set_relaxng_schema(String source, int type);

 public:
  SmartObject<File>  m_uri;
 private:
  xmlTextReaderPtr        m_ptr;
  xmlParserInputBufferPtr m_input;
  void*                   m_schema;
  void close_impl();
};

///////////////////////////////////////////////////////////////////////////////
}

#endif // __EXT_XMLREADER_H__
